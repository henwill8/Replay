#include "include/video_recorder.hpp"

rgb24* VideoCapture::UnityColorsToRGB24Array(Array<UnityEngine::Color>* colors) {
    rgb24* rgbPixels = new rgb24[colors->Length()];
    for(int i = 0; i < colors->Length(); i++) {
        rgb24 rgb;
        rgb.r = int(0);
        rgb.g = int(0);
        rgb.b = int(255);
        rgbPixels[i] = rgb;
        // log("R %i G %i B %i", rgb.r, rgb.g, colors->values[i].b);
    }
    return rgbPixels;
}

void VideoCapture::Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, FILE *outfile) {
    int ret;
 
    /* send the frame to the encoder */
    if (frame) {
        log("Send frame %i at time %li", frameCounter, frame->pts);
    }
 
    ret = avcodec_send_frame(enc_ctx, frame);
    if (ret < 0) {
        log("Error sending a frame for encoding\n");
        return;
    }
 
    while (ret >= 0) {
        ret = avcodec_receive_packet(enc_ctx, pkt);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF) {
            return;
        } else if (ret < 0) {
            log("Error during encoding\n");
            return;
        }
 
        printf("Write packet %li (size=%i)\n", pkt->pts, pkt->size);
        fwrite(pkt->data, 1, pkt->size, outfile);
        av_packet_unref(pkt);
    }
}
 
void VideoCapture::AddFrame(rgb24* data) {
    fflush(stdout);
 
    frameCounter++;
 
    int ret;
 
    /* make sure the frame data is writable */
    ret = av_frame_make_writable(frame);
    if (ret < 0) {
        log("Could not make the frame writable: %s", av_err2str(ret));
        return;
    }
 
    if (!swsCtx) {
        swsCtx = sws_getContext(c->width, c->height, AV_PIX_FMT_RGB24, c->width, c->height, AV_PIX_FMT_YUV420P, SWS_BICUBIC, 0, 0, 0);
    }
    int inLinesize[1] = { 3 * c->width };
    sws_scale(swsCtx, (const uint8_t* const*)&data, inLinesize, 0, c->height, frame->data, frame->linesize);
 
    frame->pts = frameCounter;
 
    /* encode the image */
    Encode(c, frame, pkt, f);
}
 
void VideoCapture::Finish() {
    //DELAYED FRAMES
    Encode(c, NULL, pkt, f);
    
    uint8_t endcode[] = { 0, 0, 1, 0xb7 };
 
    /* add sequence end code to have a real MPEG file */
    if (codec->id == AV_CODEC_ID_MPEG1VIDEO || codec->id == AV_CODEC_ID_MPEG2VIDEO)
        fwrite(endcode, 1, sizeof(endcode), f);
    fclose(f);
 
    avcodec_free_context(&c);
    av_frame_free(&frame);
    av_packet_free(&pkt);
}
 
void VideoCapture::Init(int videoWidth, int videoHeight, int fpsrate, int videoBitrate, std::string encodeSpeed, std::string filepath) {
    log("Setting up video at path "+filepath);
    fps = fpsrate;
    width = videoWidth;
    height = videoHeight;
    bitrate = videoBitrate;
    filename = filepath.c_str();
 
    int ret;
 
    codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (!codec) {
        log("Codec not found");
        return;
    }
 
    c = avcodec_alloc_context3(codec);
    if (!c) {
        log("Could not allocate video codec context\n");
        return;
    }
 
    pkt = av_packet_alloc();
    if (!pkt) return;
 
    c->bit_rate = bitrate * 1000;
    c->width = width;
    c->height = height;
    c->time_base = (AVRational){1, fps};
    c->framerate = (AVRational){fps, 1};
 
    c->gop_size = 10;
    c->max_b_frames = 1;
    c->pix_fmt = AV_PIX_FMT_YUV420P;
 
    if (codec->id == AV_CODEC_ID_H264) av_opt_set(c->priv_data, "preset", encodeSpeed.c_str(), 0);
 
    ret = avcodec_open2(c, codec, NULL);
    if (ret < 0) {
        log("Could not open codec: %s\n", av_err2str(ret));
        return;
    }
 
    log("Successfully opened codec");
 
    f = fopen(filename, "wb");
    if (!f) {
        log("Could not open %s\n", filename);
        return;
    }
 
    frame = av_frame_alloc();
    if (!frame) {
        log("Could not allocate video frame\n");
        return;
    }
    frame->format = c->pix_fmt;
    frame->width  = c->width;
    frame->height = c->height;
 
    ret = av_frame_get_buffer(frame, 0);
    if (ret < 0) {
        log("Could not allocate the video frame data\n");
        return;
    }

    initialized = true;
    log("Finished initialization");
}