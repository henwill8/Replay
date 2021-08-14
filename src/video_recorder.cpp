#include "include/video_recorder.hpp"

void VideoCapture::Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, std::ofstream& outfile, int framesToWrite = 1) {
    int ret;

    /* send the frame to the encoder */
    // if (frame)
    // {
        // log("Send frame %i at time %li", frameCounter, frame->pts);
    // }

    ret = avcodec_send_frame(enc_ctx, frame);
    if (ret < 0)
    {
        log("Error sending a frame for encoding\n");
        return;
    }

    while (ret >= 0)
    {
        ret = avcodec_receive_packet(enc_ctx, pkt);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
        {
            return;
        }
        else if (ret < 0)
        {
            log("Error during encoding\n");
            return;
        }

        // log("Writing replay frames %d", pkt->size);

        // log("Write packet %li (size=%i)\n", pkt->pts, pkt->size);
        for (int i = 0; i < framesToWrite; i++)
        {
            outfile.write(reinterpret_cast<const char *>(pkt->data), pkt->size);
        }
        av_packet_unref(pkt);
    }
}

void VideoCapture::AddFrame(rgb24*& data) {
    if(!initialized) return;

    if(startTime == 0) {
        static auto get_time = FPtrWrapper<&UnityEngine::Time::get_time>::get();
        startTime = get_time();
        log("Video global time start is %f", startTime);
    }

    int framesToWrite = 1;

    // if (stabilizeFPS) {
    //     framesToWrite = std::max(0, int(TotalLength() / (1.0f / float(fps))) - frameCounter);
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

    // int inLinesize[1] = {3 * c->width};
    // sws_scale(swsCtx, (const uint8_t *const *)&data, inLinesize, 0, c->height, frame->data, frame->linesize);

    frame->data[0] = (uint8_t*) data;
    if (stabilizeFPS) {
        frame->pts = TotalLength();
    } else {
        frame->pts = (int) ((1.0f / (float) fps) * (float) frameCounter);
    }
    /* encode the image */
    Encode(c, frame, pkt, f, framesToWrite);


    frame->data[0] = reinterpret_cast<uint8_t *>(emptyFrame);
//  iterating slow?  for(auto & i : frame->data) i = nullptr;
}

void VideoCapture::Finish()
{
    if(!initialized) {
        log("Attempted to finish video capture when capture wasn't initialized, returning");
        return;
    }
    //DELAYED FRAMES
    Encode(c, NULL, pkt, f);

    f.close();

    avcodec_free_context(&c);
    av_frame_free(&frame);
    av_packet_free(&pkt);
    // sws_freeContext(swsCtx);

    initialized = false;
}

void VideoCapture::Init(int videoWidth, int videoHeight, int fpsrate, int videoBitrate, bool stabilizeFPS, const std::string& encodeSpeed, const std::string& filepath)
{
    log("Setting up video at path %s", filepath.c_str());
    fps = fpsrate;
    width = videoWidth;
    height = videoHeight;
    bitrate = videoBitrate * 1000;
    filename = filepath;
    this->stabilizeFPS = stabilizeFPS;
    frameCounter = 0;

    int ret;

    codec = avcodec_find_encoder_by_name("libx264rgb");
    // codec = avcodec_find_encoder(AV_CODEC_ID_H264);
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
    c->time_base = (AVRational){1, fps};
    c->framerate = (AVRational){fps, 1};

    c->gop_size = 10;
    c->max_b_frames = 1;
    c->pix_fmt = AV_PIX_FMT_RGB24;
    // c->pix_fmt = AV_PIX_FMT_YUV420P;

    if (codec->id == AV_CODEC_ID_H264) {
        av_opt_set(c->priv_data, "preset", encodeSpeed.c_str(), 0);
        // av_opt_set(c->priv_data, "tune", "zerolatency", 0);
    }

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
        log("Could not open %s\n", filename.c_str());
        return;
    }

    frame = av_frame_alloc();
    if (!frame)
    {
        log("Could not allocate video frame\n");
        return;
    }
    frame->format = c->pix_fmt;
    frame->width = width;
    frame->height = height;

    ret = av_frame_get_buffer(frame, 0);
    if (ret < 0)
    {
        log("Could not allocate the video frame data\n");
        return;
    }

    // swsCtx = sws_getContext(c->width, c->height, AV_PIX_FMT_RGB24, c->width, c->height, AV_PIX_FMT_YUV420P, SWS_BICUBIC, 0, 0, 0);

    initialized = true;
    log("Finished initializing video at path %s", filename.c_str());

    encodingThread = std::thread(&VideoCapture::encodeFrames, this);
//    flippingThread = std::thread(&VideoCapture::flipFrames, this);

    emptyFrame = new rgb24[width * height];
}

// Make this more than 1 thread? We need a way to synchronize the frame order then.
// This seems to be a bottle neck since it can't keep up with queued frames.
void VideoCapture::flipFrames() {
    log("Starting flipping thread");

    while (initialized) {
        QueueContent frameDataPair;

        // Block instead?
        if (!framebuffers.try_dequeue(frameDataPair)) {
            continue;
        }

        auto startTime = std::chrono::high_resolution_clock::now();
        // TODO: Comment while using OnRenderImage, for now no worky because 16x16 too small
        //Flip the screen
        for (int line = 0; line != height / 2; ++line) {
            std::swap_ranges(
                    frameDataPair->data + width * line,
                    frameDataPair->data + width * (line + 1),
                    frameDataPair->data + width * (height - line - 1));
        }

        while (!flippedframebuffers.try_enqueue(frameDataPair));

        auto currentTime = std::chrono::high_resolution_clock::now();
        int64_t duration = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();

        log("Took %lldms to flip frame", (long long) duration);
    }
    log("Ending flipping thread");
}

void VideoCapture::encodeFrames() {
    log("Starting encoding thread");

    while (initialized) {
        QueueContent frameData = nullptr;

        // Block instead?
        if (!flippedframebuffers.try_dequeue(frameData)) {
            continue;
        }

        auto startTime = std::chrono::high_resolution_clock::now();
        this->AddFrame(frameData->data);
        auto currentTime = std::chrono::high_resolution_clock::now();
        int64_t duration = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();

        // log("Took %lldms to add and encode frame", (long long) duration);

        free(frameData->data);
        frameData->encoded = true;
    }
    log("Ending encoding thread");
}

std::shared_ptr<FrameStatus> VideoCapture::queueFrame(rgb24*& queuedFrame) {
    if(!initialized)
        throw std::runtime_error("Video capture is not initialized");

    std::shared_ptr<FrameStatus> status = std::make_shared<FrameStatus>(queuedFrame);
    while(!flippedframebuffers.enqueue(status));
    // log("Frame queue: %zu", flippedframebuffers.size_approx());

    return status;
}

VideoCapture::~VideoCapture()
{
    if(initialized) Finish();

    if (encodingThread.joinable())
        encodingThread.join();

    if (flippingThread.joinable())
        flippingThread.join();

    delete[] emptyFrame;

    log("Deleting video capture %p", this);

    QueueContent frame;
    while (flippedframebuffers.try_dequeue(frame)) {
        free(frame->data);
        frame->encoded = true;
    }

    while (framebuffers.try_dequeue(frame)) {
        free(frame->data);
        frame->encoded = true;
    }
}
