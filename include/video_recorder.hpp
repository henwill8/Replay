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

struct FrameStatus {
    std::atomic<bool> encoded;
    rgb24* data;

    explicit FrameStatus(rgb24 *data) : encoded(false), data(data) {}
};

class VideoCapture
{
public:
    void Init(int width, int height, int fpsrate, int bitrate, bool stabilizeFPS, const std::string& encodeSpeed, const std::string& filepath);

    void AddFrame(rgb24*& data);
    
    std::shared_ptr<FrameStatus> queueFrame(rgb24*& queuedFrame);

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

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

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

    std::string filename;
    std::ofstream f;

    using QueueContent = std::shared_ptr<FrameStatus>;
    moodycamel::ReaderWriterQueue<QueueContent> framebuffers;

    // Flipped frames ready to encode
    moodycamel::ReaderWriterQueue<QueueContent> flippedframebuffers;
//    std::list<rgb24*> framebuffers;
    std::thread encodingThread;
    std::thread flippingThread;
    rgb24* emptyFrame; // constant used to set the frame data to null

    void Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, std::ofstream& outfile, int framesToWrite);

    void encodeFrames();
    void flipFrames();

    void WaitForEndFrames();
};