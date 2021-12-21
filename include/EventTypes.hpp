#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "GlobalNamespace/ColorType.hpp"
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"

using namespace GlobalNamespace;

namespace Replay {
    namespace PlayerEventTypes {
        struct EulerTransform {
            UnityEngine::Vector3 position;
            UnityEngine::Vector3 rotation;
        };

        struct PlayerTransforms {
            EulerTransform head;
            EulerTransform leftSaber;
            EulerTransform rightSaber;
        };

        struct PlayerEvent {
            float time;
            PlayerTransforms player;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&player), sizeof(PlayerTransforms));
            }

            void Read(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&player), sizeof(PlayerTransforms));
            }
        };

        const inline static byte eventID = 0b00000000;
    }

    namespace NoteEventTypes {
        struct DifferentiatingNoteData {
            float time;
            int lineIndex;
            NoteLineLayer noteLineLayer;
            ColorType colorType;
            NoteCutDirection noteCutDirection;
        };
    
        struct NoteCutEvent {
            int hash;
            float time;
            NoteCutInfo noteCutInfo;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&hash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&noteCutInfo), sizeof(NoteCutInfo));
            }

            void Read(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&hash), sizeof(int));
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&noteCutInfo), sizeof(NoteCutInfo));
            }
        };

        const inline static byte cutEventID = 0b00000001;

        struct NoteMissEvent {
            int hash;
            float time;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&hash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
            }

            void Read(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&hash), sizeof(int));
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
            }
        };

        const inline static byte missEventID = 0b00000010;
    }
}