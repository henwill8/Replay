#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "GlobalNamespace/ColorType.hpp"
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"

// avoid using namespace in headers, but do as you wish
using namespace GlobalNamespace;

namespace Replay {
    namespace PlayerEventTypes {
        struct EulerTransform {
            UnityEngine::Vector3 position;
            UnityEngine::Vector3 rotation;

            constexpr EulerTransform() = default;

            constexpr EulerTransform(const UnityEngine::Vector3 &position, const UnityEngine::Vector3 &rotation) : position(
                    position), rotation(rotation) {}
        };

        struct PlayerTransforms {
            EulerTransform head;
            EulerTransform leftSaber;
            EulerTransform rightSaber;

            constexpr PlayerTransforms() = default;

            constexpr PlayerTransforms(const EulerTransform &head, const EulerTransform &leftSaber,
                             const EulerTransform &rightSaber) : head(head), leftSaber(leftSaber),
                                                                 rightSaber(rightSaber) {}
        };

        struct PlayerEvent {
            float time;
            PlayerTransforms player;

            constexpr PlayerEvent() = default;

            constexpr PlayerEvent(float time, const PlayerTransforms &player) : time(time), player(player) {}

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&player), sizeof(PlayerTransforms));
            }

            constexpr PlayerEvent(std::ifstream& reader) {
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

            constexpr DifferentiatingNoteData() = default;

            constexpr DifferentiatingNoteData(float time, int lineIndex, int noteLineLayer, int colorType, int noteCutDirection)
                    : time(time), lineIndex(lineIndex), noteLineLayer(noteLineLayer), colorType(colorType),
                      noteCutDirection(noteCutDirection) {}
        };

        struct SimpleNoteCutInfo {
            bool speedOK;
            bool directionOK;
            bool saberTypeOK;
            bool wasCutTooSoon;
            float saberSpeed;
            UnityEngine::Vector3 saberDir;
            int saberType;
            float timeDeviation;
            float cutDirDeviation;
            UnityEngine::Vector3 cutPoint;
            UnityEngine::Vector3 cutNormal;
            float cutDistanceToCenter;
            float cutAngle;

            constexpr SimpleNoteCutInfo() = default;

            constexpr SimpleNoteCutInfo(const NoteCutInfo& noteCutInfo) {
                speedOK = noteCutInfo.speedOK;
                directionOK = noteCutInfo.directionOK;
                saberTypeOK = noteCutInfo.saberTypeOK;
                wasCutTooSoon = noteCutInfo.wasCutTooSoon;
                saberSpeed = noteCutInfo.saberSpeed;
                saberDir = noteCutInfo.saberDir;
                saberType = (int) noteCutInfo.saberType;
                timeDeviation = noteCutInfo.timeDeviation;
                cutDirDeviation = noteCutInfo.cutDirDeviation;
                cutPoint = noteCutInfo.cutPoint;
                cutNormal = noteCutInfo.cutNormal;
                cutDistanceToCenter = noteCutInfo.cutDistanceToCenter;
                cutAngle = noteCutInfo.cutAngle;
            }
        };

        struct SwingRating {
            float beforeCutRating;
            float afterCutRating;

            constexpr SwingRating() = default;

            constexpr SwingRating(ISaberSwingRatingCounter* swingRating) {
                beforeCutRating = swingRating->get_beforeCutRating();
                afterCutRating = swingRating->get_afterCutRating();
            }

            constexpr SwingRating(float beforeCutRating, float afterCutRating) : beforeCutRating(beforeCutRating), afterCutRating(afterCutRating) {}
        };
    
        struct StoredCutEvent {
            int noteHash;
            float time;
            NoteCutInfo noteCutInfo;

            constexpr StoredCutEvent(int noteHash, float time, const NoteCutInfo& noteCutInfo) : noteHash(noteHash), time(time), noteCutInfo(noteCutInfo) {}
        };

        struct NoteCutEvent {
            int noteHash;
            float time;
            SimpleNoteCutInfo noteCutInfo;
            SwingRating swingRating;

            constexpr NoteCutEvent() = default;

            constexpr NoteCutEvent(int noteHash, float time, const NoteCutInfo& cutInfo, bool goodCut = true) : noteHash(noteHash), time(time) {
                // I did not know a better way to make compiler happy, feel free to fix
                SimpleNoteCutInfo newNoteCutInfo(cutInfo);
                noteCutInfo = newNoteCutInfo;

                if(goodCut) {
                    SwingRating newSwingRating(cutInfo.swingRatingCounter);
                    swingRating = newSwingRating;
                } else {
                    SwingRating newSwingRating(0.0f, 0.0f);
                    swingRating = newSwingRating;
                }
            }

            constexpr NoteCutEvent(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&noteHash), sizeof(int));
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&noteCutInfo), sizeof(SimpleNoteCutInfo));
                reader.read(reinterpret_cast<char*>(&swingRating), sizeof(SwingRating));
            }

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&noteHash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&noteCutInfo), sizeof(SimpleNoteCutInfo));
                writer.write(reinterpret_cast<const char*>(&swingRating), sizeof(SwingRating));
            }
        };

        const inline static byte cutEventID = 0b00000001;

        struct NoteMissEvent {
            int noteHash;
            float time;

            // allows emplace to work
            NoteMissEvent(int noteHash, float time) : noteHash(noteHash), time(time) {}

            NoteMissEvent() = default;

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&noteHash), sizeof(int));
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
            }

            constexpr NoteMissEvent(std::ifstream& reader) {
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