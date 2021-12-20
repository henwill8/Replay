#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "SongData.hpp"
#include "fstream"

namespace Replay {
    struct EulerTransform {
        UnityEngine::Vector3 position;
        UnityEngine::Vector3 rotation;

        void Write(std::ofstream& writer) const {
            writer.write(reinterpret_cast<const char*>(&position.x), sizeof(float));
            writer.write(reinterpret_cast<const char*>(&position.y), sizeof(float));
            writer.write(reinterpret_cast<const char*>(&position.z), sizeof(float));
            
            writer.write(reinterpret_cast<const char*>(&rotation.x), sizeof(float));
            writer.write(reinterpret_cast<const char*>(&rotation.y), sizeof(float));
            writer.write(reinterpret_cast<const char*>(&rotation.z), sizeof(float));
        }
    };

    struct PlayerTransforms {
        EulerTransform head;
        EulerTransform leftSaber;
        EulerTransform rightSaber;

        void Write(std::ofstream& writer) const {
            head.Write(writer);
            leftSaber.Write(writer);
            rightSaber.Write(writer);
        }
    };

    struct PlayerEvent {
        float time;
        PlayerTransforms player;

        void Write(std::ofstream& writer) const {
            writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
            player.Write(writer);
        }
    };

    class PlayerRecorder {
    private:
        const inline static byte eventID = 0b00000000;
        const inline static int eventSize = sizeof(PlayerEvent);

        std::vector<PlayerEvent> events;

    public:
        PlayerRecorder();

        void AddEvent(Replay::PlayerTransforms playerTransforms);

        void WriteEvents(std::ofstream& output);
        
        static Replay::PlayerTransforms TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber);
    };
}