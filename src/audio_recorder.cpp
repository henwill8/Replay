#include "../include/audio_recorder.hpp"

void AudioRenderer::OpenFile(std::string filename) {
    Rendering = true;
    
    SAMPLE_RATE = UnityEngine::AudioSettings::get_outputSampleRate();

    if(writer.is_open()) {
        writer.close();
    }
    
    writer.open(filename, std::ios::binary);
}

/// Write a chunk of data to the output stream.
void AudioRenderer::Write(Array<float>& audioData) {
    if(Rendering) {
        for (int i = 0; i < audioData.Length(); i++) {
            // write the short to the stream
            short value = short(audioData.values[i] * float(32767));
            writer.write(reinterpret_cast<const char*>(&value), sizeof(short));
        }
    }
}

// write the incoming audio to the output string
void AudioRenderer::OnAudioFilterRead(Array<float>& data, int audioChannels) {
    if(Rendering) {
        // store the number of channels we are rendering
        if(audioChannels > 0) channels = audioChannels;

        // store the data stream
        Write(data);
    }
}

void AudioRenderer::Save() {
    AddHeader();
    writer.close();
    Rendering = false;
}

void AudioRenderer::AddHeader() {
    if(Rendering) {
        long samples = writer.tellp() / (BITS_PER_SAMPLE / 8);

        // reset the output stream
        writer.seekp(0);

        int intValue;
        short shortValue;

        intValue = 0x46464952;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int)); // "RIFF" in ASCII

        // write the number of bytes in the entire file
        intValue = (int)(HEADER_SIZE + (samples * BITS_PER_SAMPLE * channels / 8)) - 8;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int));

        intValue = 0x45564157;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int)); // "WAVE" in ASCII
        intValue = 0x20746d66;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int)); // "fmt " in ASCII
        intValue = 16;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int));

        // write the format tag. 1 = PCM
        shortValue = short(1);
        writer.write(reinterpret_cast<const char*>(&shortValue), sizeof(short));

        // write the number of channels.
        shortValue = short(channels);
        writer.write(reinterpret_cast<const char*>(&shortValue), sizeof(short));

        // write the sample rate. 44100 in this case. The number of audio samples per second
        writer.write(reinterpret_cast<const char*>(&SAMPLE_RATE), sizeof(int));

        intValue = SAMPLE_RATE * channels * (BITS_PER_SAMPLE / 8);
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int));
        shortValue = (short)(channels * (BITS_PER_SAMPLE / 8));
        writer.write(reinterpret_cast<const char*>(&shortValue), sizeof(short));

        // 16 bits per sample
        writer.write(reinterpret_cast<const char*>(&BITS_PER_SAMPLE), sizeof(short));

        // "data" in ASCII. Start the data chunk.
        intValue = 0x61746164;
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int));

        // write the number of bytes in the data portion
        intValue = (int)(samples * BITS_PER_SAMPLE * channels / 8);
        writer.write(reinterpret_cast<const char*>(&intValue), sizeof(int));
    }
}