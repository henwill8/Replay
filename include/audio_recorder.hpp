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

class AudioRenderer {
    public:
        int SAMPLE_RATE = 48000;

        void Save();

        void OnAudioFilterRead(Array<float>& data, int channels);

        void OpenFile(std::string fileName);

        std::ofstream writer;

    private:
        const int HEADER_SIZE = 44;
        const short BITS_PER_SAMPLE = 16;

        int channels = 2;

        void AddHeader();

        void Write(Array<float>& audioData);
        
        bool Rendering = false;
};