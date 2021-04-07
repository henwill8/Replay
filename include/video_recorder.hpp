#pragma once
 
#include "main.hpp"
 
#include <iostream>
extern "C" {
    #include <libavcodec/avcodec.h>
    #include <libavformat/avformat.h>
    #include <libavutil/avutil.h>
    #include <libavutil/time.h>
    #include <libavutil/opt.h>
    #include <libavutil/imgutils.h>
    #include <libswscale/swscale.h>
}

struct rgb24 {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};
 
class VideoCapture {
    public:
        void Init(int width, int height, int fpsrate, int bitrate, std::string encodeSpeed, std::string filepath);
 
        void AddFrame(rgb24 *data);
 
        void Finish();

        static rgb24* UnityColorsToRGB24Array(Array<UnityEngine::Color>* colors);
 
    private:
        const AVCodec *codec;
        AVCodecContext *c = NULL;
        SwsContext* swsCtx = nullptr;
        AVFrame *frame;
        AVPacket *pkt;
        AVFormatContext* ofctx = nullptr;
        AVOutputFormat* oformat = nullptr;
 
        int frameCounter = 0;
 
        bool initialized = false;
 
        int fps;
        int width;
        int height;
        int bitrate;
 
        const char* filename;
        FILE* f;
 
        void Encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, FILE *outfile);
};