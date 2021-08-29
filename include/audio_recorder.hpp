#pragma once

#include "main.hpp"
#include "codegen.hpp"

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <string>

DECLARE_CLASS_CODEGEN(Replay, AudioCapture, UnityEngine::MonoBehaviour,

    DECLARE_DEFAULT_CTOR();

    DECLARE_INSTANCE_METHOD(void, OnDestroy);

    public:
        int SAMPLE_RATE = 48000;

        void Save();

        void OpenFile(const std::string& filename);

        void Write(Array<float>* audioData);

        std::ofstream writer;

        bool IsRendering() const {
            return Rendering;
        }

    private:
        const int HEADER_SIZE = 44;
        const short BITS_PER_SAMPLE = 16;

        int channels = 2;

        void AddHeader();
        
        bool Rendering = false;
)