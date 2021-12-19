#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "Recording/ReplayRecorder.hpp"

namespace Replay {
    struct EulerTransform {
        UnityEngine::Vector3* position;
        UnityEngine::Vector3* rotation;

        void Write(std::ofstream& writer) const {
            writer.write(reinterpret_cast<const char*>(&position), sizeof(UnityEngine::Vector3*));
            writer.write(reinterpret_cast<const char*>(&rotation), sizeof(UnityEngine::Vector3*));
        }
    }

    struct PlayerTransforms {
        EulerTransform head;
        EulerTransform leftSaber;
        EulerTransform rightSaber;

        void Write(std::ofstream& writer) const {
            head.Write(writer);
            leftSaber.Write(writer);
            rightSaber.Write(writer);
        }
    }

    struct PlayerEvent {
        float time;
        PlayerTransforms player;

        void Write(std::ofstream& writer) const {
            writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
            player.Write(writer);
        }
    }

    class PlayerRecorder {
    private:
        const static std::bitset<eventIdBitCount> eventID{"0000"};

        const static std::bitset<eventSizeBitCount> eventSize{};

        ReplayRecorder recorder;

    public:
        void Init();

        void AddEvent(Replay::PlayerTransforms playerTransforms);
        
        static Replay::PlayerTransforms TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber);
    }
}