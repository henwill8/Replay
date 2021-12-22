#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "GlobalNamespace/ColorType.hpp"
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteController.hpp"

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
            int noteLineLayer;
            int colorType;
            int noteCutDirection;
        };
    
        struct NoteCutEvent {
            int noteHash;
            float time;
            NoteCutInfo noteCutInfo;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&noteHash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&noteCutInfo), sizeof(NoteCutInfo));
            }

            void Read(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&noteHash), sizeof(int));
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&noteCutInfo), sizeof(NoteCutInfo));
            }
        };

        const inline static byte cutEventID = 0b00000001;

        struct NoteMissEvent {
            int noteHash;
            float time;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&noteHash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
            }

            void Read(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&noteHash), sizeof(int));
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
            }
        };

        const inline static byte missEventID = 0b00000010;
    }
}

template<>
struct std::hash<Replay::NoteEventTypes::DifferentiatingNoteData>
{
    std::size_t operator()(Replay::NoteEventTypes::DifferentiatingNoteData const& s) const noexcept
    {
        std::size_t h1 = std::hash<float>{}(s.time);
        std::size_t h2 = std::hash<int>{}(s.lineIndex);
        std::size_t h3 = std::hash<int>{}(s.noteLineLayer);
        std::size_t h4 = std::hash<int>{}(s.colorType);
        std::size_t h5 = std::hash<int>{}(s.noteCutDirection);

        return h1 ^ h2 ^ h3 ^ h4 ^ h5;
    }
};