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

enum class Encoder {
    MEDIACODEC_GPU,
    LIBX264_RGB_CPU
};

constexpr std::string_view encoderName(Encoder enc) {
    switch (enc) {
        case Encoder::MEDIACODEC_GPU:
            return "h264_mediacodec";
        case Encoder::LIBX264_RGB_CPU:
            return "libx264rgb";
    }
}

class VideoCapture
{
public:
    void Init(int width, int height, int fpsrate, int bitrate, bool stabilizeFPS, const std::string& encodeSpeed, const std::string& filepath, std::string_view encoderStr = encoderName(Encoder::LIBX264_RGB_CPU));

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

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    size_t approximateFramesToRender() {
        return framebuffers.size_approx() + flippedframebuffers.size_approx();
    }

private:
    const AVCodec *codec;
    AVCodecContext *c = NULL;
    SwsContext *swsCtx = nullptr;
    AVFrame *frame;
    AVPacket *pkt;
    AVFormatContext *ofctx = nullptr;
    AVOutputFormat *oformat = nullptr;

    Encoder encoder;
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

    using QueueContent = rgb24*;
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