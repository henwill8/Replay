#pragma once

#include "main.hpp"

#include <iostream>
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/avutil.h"
#include <ctime>
#include "libavutil/opt.h"
#include "libavutil/imgutils.h"
#include "libswscale/swscale.h"
}

struct rgb24
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

class VideoCapture
{
public:
    void Init(int width, int height, int fpsrate, int bitrate, bool stabilizeFPS, std::string encodeSpeed, std::string filepath);

    void AddFrame(rgb24 *data);
    
    void queueFrame(void *frame);

    void Finish();

    int FrameCount()
    {
        return frameCounter;
    };

    bool IsInitialized()
    {
        return initialized;
    };

    float RecordingLength()
    {
        return float(frameCounter) * (1.0f / float(fps));
    };

    float TotalLength()
    {
        return UnityEngine::Time::get_time() - startTime;
    };

    ~VideoCapture();

private:
    const AVCodec *codec;
    AVCodecContext *c = NULL;
    SwsContext *swsCtx = nullptr;
    AVFrame *frame;
    AVPacket *pkt;
    AVFormatContext *ofctx = nullptr;
    AVOutputFormat *oformat = nullptr;

    float startTime = 0;

    int frameCounter = 0;

    bool initialized = false;

    int fps;
    int width;
    int height;
    int bitrate;

    bool stabilizeFPS;

    const char *filename;
    FILE *f;

    mutable std::mutex framebuffer_mutex;
    std::list<void *> framebuffers;
    std::thread encodingThread;

    void Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, FILE *outfile, int framesToWrite);

    void encodeFrames();

    void WaitForEndFrames();
};