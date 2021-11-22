#pragma once

#include "AbstractEncoder.hpp"
#include "queue/readerwriterqueue.h"

#include "rav1e/rav1e.h"

#include <fstream>

namespace Hollywood {
    class Rav1eVideoEncoder : public Hollywood::AbstractVideoEncoder {
    public:
        void queueFrame(rgb24 *data, std::optional<float> timeOfFrame) override;

        void Init() override;

        size_t approximateFramesToRender() override;

        // Blocks until encoding is done
        ~Rav1eVideoEncoder() override;

        // Blocks until encoding is done
        void Finish();

        Rav1eVideoEncoder(const uint32_t width, const uint32_t height, const uint32_t fpsRate,
                          std::string filename, const uint32_t bitrate);

        const std::string filename;
        const uint32_t bitrate;
    private:
        RaContext* context;
        RaFrame* frame;
        std::ofstream outfile;

        using QueueContent = rgb24*;
        moodycamel::ReaderWriterQueue<QueueContent> framebuffers;

        std::thread encodingThread;

        void HandleError(void* ptr);
        void HandleError(int i);

        void CheckError();

        void Encode(rgb24* data);

        void EncodeLoop();
    };
}

