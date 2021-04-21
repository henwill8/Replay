#include "include/video_recorder.hpp"

void VideoCapture::Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, std::ofstream& outfile, int framesToWrite = 1) {
    int ret;

    /* send the frame to the encoder */
    // if (frame)
    // {
        // log("Send frame %i at time %li", frameCounter, frame->pts);
    // }

    bool gotOutput;

    if(frame != NULL) {
        ret = avcodec_encode_video2(enc_ctx, &pkt, frame, &gotOutput);
        if (ret < 0)
        {
            log("Error sending a frame for encoding\n");
            return;
        }
        if(gotOutput) {
            for (int i = 0; i < framesToWrite; i++)
            {
                outfile.write(reinterpret_cast<const char *>(pkt->data), pkt->size);
            }
            av_packet_unref(pkt);
        }
    } else if(frame == NULL) {
        for (got_output = 1; got_output; i++) {
            ret = avcodec_encode_video2(enc_ctx, &pkt, frame, &gotOutput);
            if (ret < 0)
            {
                log("Error sending a frame for encoding\n");
                return;
            }

            if (got_output) {
                outfile.write(reinterpret_cast<const char *>(pkt->data), pkt->size);
                av_packet_unref(pkt);
            }
        }
    }
}

void VideoCapture::AddFrame(std::shared_ptr<std::vector<rgb24>>& data) {
    if(!initialized) return;

    if(startTime == 0) {
        startTime = UnityEngine::Time::get_time();
        log("Video global time start is %f", startTime);
    }

    int framesToWrite = 1;

    // if (stabilizeFPS) {
    //     framesToWrite = std::max(0, int(TotalLength() / (1.0f / float(fps * 2))) - frameCounter);
    //     log("Frames to write: %i, equation is int(%f / (1 / %i)) - %i", framesToWrite, TotalLength(), fps, frameCounter);
    // }

    if(framesToWrite == 0) return;

    frameCounter += framesToWrite;

    int ret;

    /* make sure the frame data is writable */
    ret = av_frame_make_writable(frame);
    if (ret < 0)
    {
        log("Could not make the frame writable: %s", av_err2str(ret));
        return;
    }

    if (!swsCtx)
    {
        swsCtx = sws_getContext(c->width, c->height, AV_PIX_FMT_RGB24, c->width, c->height, AV_PIX_FMT_YUV420P, SWS_POINT, 0, 0, 0);
    }
    int inLinesize[1] = {3 * c->width};
    sws_scale(swsCtx, (const uint8_t *const *)&data, inLinesize, 0, c->height, frame->data, frame->linesize);

    // frame->data[0] = (uint8_t*) data->data();
    frame->pts = TotalLength();

    // for(int i = 1; i < AV_NUM_DATA_POINTERS; i++) frame->data[i] = nullptr;

    /* encode the image */
    Encode(c, frame, pkt, f, framesToWrite);
}

void VideoCapture::Finish()
{
    //DELAYED FRAMES
    Encode(c, NULL, pkt, f);

    f.close();

    avcodec_free_context(&c);
    av_frame_free(&frame);
    av_packet_free(&pkt);
    // sws_freeContext(swsCtx);

    initialized = false;
}

void VideoCapture::Init(int videoWidth, int videoHeight, int fpsrate, int videoBitrate, bool stabilizeFPS, std::string encodeSpeed, std::string filepath)
{
    log("Setting up video at path " + filepath);
    fps = fpsrate;
    width = videoWidth;
    height = videoHeight;
    bitrate = videoBitrate * 1000;
    filename = filepath.c_str();
    this->stabilizeFPS = stabilizeFPS;
    frameCounter = 0;

    int ret;

    // codec = avcodec_find_encoder_by_name("libx264rgb");
    codec = avcodec_find_encoder(AV_CODEC_ID_HEVC);
    if (!codec)
    {
        log("Codec not found");
        return;
    }

    c = avcodec_alloc_context3(codec);
    if (!c)
    {
        log("Could not allocate video codec context\n");
        return;
    }

    pkt = av_packet_alloc();
    if (!pkt)
        return;

    c->bit_rate = bitrate * 1000;
    c->width = width;
    c->height = height;
    c->time_base = (AVRational){1, 1};
    c->framerate = (AVRational){fps, 1};

    c->gop_size = 10;
    c->max_b_frames = 1;
    // c->pix_fmt = AV_PIX_FMT_RGB24;
    c->pix_fmt = AV_PIX_FMT_YUV420P;

    if (codec->id == AV_CODEC_ID_H264)
        av_opt_set(c->priv_data, "preset", encodeSpeed.c_str(), 0);

    ret = avcodec_open2(c, codec, NULL);
    if (ret < 0)
    {
        log("Could not open codec: %s\n", av_err2str(ret));
        return;
    }

    log("Successfully opened codec");

    f = std::ofstream(filename);
    if (!f)
    {
        log("Could not open %s\n", filename);
        return;
    }

    frame = av_frame_alloc();
    if (!frame)
    {
        log("Could not allocate video frame\n");
        return;
    }
    frame->format = c->pix_fmt;
    frame->width = c->width;
    frame->height = c->height;

    ret = av_frame_get_buffer(frame, 0);
    if (ret < 0)
    {
        log("Could not allocate the video frame data\n");
        return;
    }

    initialized = true;
    log("Finished initializing video at path %s", filename);

    encodingThread = std::thread(&VideoCapture::encodeFrames, this);
}

void VideoCapture::encodeFrames()
{
    log("Starting encoding thread");

    while (initialized || !framebuffers.empty())
    {
        if (!framebuffers.empty())
        {
            framebuffer_mutex.lock();
            std::list<std::shared_ptr<std::vector<rgb24>>> listCopy(framebuffers); // copy the list
            framebuffers.clear();
            framebuffer_mutex.unlock();
            // Unlock and use the copy

            // Now we use the copied list and it should be ours only
            while (!listCopy.empty()) {
                // log("size is %i", framebuffers.size());
                auto frameData = listCopy.front();

                // Flip the screen
                for(int line = 0; line != height/2; ++line) {
                    std::swap_ranges(
                            frameData->begin() + width * line,
                            frameData->begin() + width * (line+1),
                            frameData->begin() + width * (height-line-1));
                }

                this->AddFrame(frameData);
                listCopy.pop_front();
            }
        }
    }
    log("Ending encoding thread");
}

void VideoCapture::queueFrame(std::shared_ptr<std::vector<rgb24>> frame) {
    framebuffer_mutex.lock();
    framebuffers.push_back(frame);
    framebuffer_mutex.unlock();
}

VideoCapture::~VideoCapture()
{
    Finish();

    if (encodingThread.joinable())
        encodingThread.join();
}
