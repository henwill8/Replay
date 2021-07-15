#pragma once

#include "main.hpp"
#include "CustomTypes/AsyncGPUReadbackPluginRequest.hpp"
#include "queue/readerwriterqueue.h"

#include <iostream>
#include <fstream>

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

class VideoCapture
{
public:
    void Init(int width, int height, int fpsrate, int bitrate, bool stabilizeFPS, std::string encodeSpeed, std::string filepath);

    void AddFrame(rgb24*& data);
    
    void queueFrame(rgb24*& queuedFrame);

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

    float getFpsrate() {
        return fps;
    }

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
    std::ofstream f;

    moodycamel::ReaderWriterQueue<rgb24*> framebuffers;
//    std::list<rgb24*> framebuffers;
    std::thread encodingThread;

    void Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, std::ofstream& outfile, int framesToWrite);

    void encodeFrames();

    void WaitForEndFrames();
};