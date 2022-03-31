#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "GlobalNamespace/ColorType.hpp"
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "GlobalNamespace/CutScoreBuffer.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Quaternion.hpp"
#include <fstream>

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

        struct EulerTransformEvent {
            float time;
            EulerTransform transform;

            constexpr EulerTransformEvent() = default;

            constexpr EulerTransformEvent(const float time, const EulerTransform& transform) : time(time), transform(transform) {}
            
            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&transform), sizeof(EulerTransform));
            }

            constexpr EulerTransformEvent(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&transform), sizeof(EulerTransform));
            }
        };
        
        const inline static byte headEventID = 0b00000000;

        const inline static byte leftSaberEventID = 0b00000001;

        const inline static byte rightSaberEventID = 0b00000010;

        struct PlayerTransforms {
            EulerTransform head;
            EulerTransform leftSaber;
            EulerTransform rightSaber;

            constexpr PlayerTransforms() = default;

            constexpr PlayerTransforms(const EulerTransform &head, const EulerTransform &leftSaber,
                             const EulerTransform &rightSaber) : head(head), leftSaber(leftSaber),
                                                                 rightSaber(rightSaber) {}

            constexpr PlayerTransforms(UnityEngine::Transform* headTransform, UnityEngine::Transform* leftTransform, UnityEngine::Transform* rightTransform) {
                head = {headTransform->get_position(), headTransform->get_eulerAngles()};
                leftSaber = {leftTransform->get_position(), leftTransform->get_eulerAngles()};
                rightSaber = {rightTransform->get_position(), rightTransform->get_eulerAngles()};
            }

            constexpr PlayerTransforms(UnityEngine::Vector3 headPos, UnityEngine::Quaternion headRot, UnityEngine::Vector3 leftPos, UnityEngine::Quaternion leftRot, UnityEngine::Vector3 rightPos, UnityEngine::Quaternion rightRot) {
                head = {headPos, headRot.get_eulerAngles()};
                leftSaber = {leftPos, leftRot.get_eulerAngles()};
                rightSaber = {rightPos, rightRot.get_eulerAngles()};
            }
        };

        struct PlayerEvent {
            float time;
            PlayerTransforms playerTransforms;
            UnityEngine::Vector3 leftSaberTopPos;
            UnityEngine::Vector3 rightSaberTopPos;

            constexpr PlayerEvent() = default;

            constexpr PlayerEvent(const float time, const PlayerTransforms& playerTransforms, const UnityEngine::Vector3& leftSaberTopPos, const UnityEngine::Vector3& rightSaberTopPos) : 
                                    time(time), playerTransforms(playerTransforms), leftSaberTopPos(leftSaberTopPos), rightSaberTopPos(rightSaberTopPos) {}
        };
    }

    namespace NoteEventTypes {
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
            UnityEngine::Vector3 worldRotation;
            UnityEngine::Vector3 noteRotation;
            UnityEngine::Vector3 notePosition;

            constexpr SimpleNoteCutInfo() = default;

            SimpleNoteCutInfo(NoteCutInfo& noteCutInfo) {
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
                worldRotation = noteCutInfo.worldRotation.get_eulerAngles();
                noteRotation = noteCutInfo.noteRotation.get_eulerAngles();
                notePosition = noteCutInfo.notePosition;
            }

            bool AllIsOkay() {
                return speedOK && directionOK && saberTypeOK && !wasCutTooSoon;
            }
        };

        struct SwingRating {
            int beforeCutRating;
            int afterCutRating;

            constexpr SwingRating() = default;

            constexpr SwingRating(CutScoreBuffer* cutScoreBuffer) {
                beforeCutRating = cutScoreBuffer->get_beforeCutScore();
                afterCutRating = cutScoreBuffer->get_afterCutScore();
            }

            constexpr SwingRating(int beforeCutRating, int afterCutRating) : beforeCutRating(beforeCutRating), afterCutRating(afterCutRating) {}
        };

        struct NoteCutEvent {
            int noteHash;
            float time;
            SimpleNoteCutInfo noteCutInfo;
            SwingRating swingRating;

            constexpr NoteCutEvent() = default;

            NoteCutEvent(int noteHash, float time, CutScoreBuffer* cutScoreBuffer) : noteHash(noteHash), time(time) {
                // I did not know a better way to make compiler happy, feel free to fix
                SimpleNoteCutInfo newNoteCutInfo(cutScoreBuffer->noteCutInfo);
                noteCutInfo = newNoteCutInfo;

                SwingRating newSwingRating(cutScoreBuffer);
                swingRating = newSwingRating;
            }

            NoteCutEvent(int noteHash, float time, NoteCutInfo badNoteCutInfo) : noteHash(noteHash), time(time) {
                // I did not know a better way to make compiler happy, feel free to fix
                SimpleNoteCutInfo newNoteCutInfo(badNoteCutInfo);
                noteCutInfo = newNoteCutInfo;

                SwingRating newSwingRating(0.0f, 0.0f);
                swingRating = newSwingRating;
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

        const inline static byte cutEventID = 0b00000011;

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

        const inline static byte missEventID = 0b00000100;
    }

    namespace ObstacleEventTypes {
        struct ObstacleEvent {
            float time;
            float energy;

            constexpr ObstacleEvent() = default;

            constexpr ObstacleEvent(float time, float energy) : time(time), energy(energy) {}

            constexpr ObstacleEvent(std::ifstream& reader) {
                reader.read(reinterpret_cast<char*>(&time), sizeof(float));
                reader.read(reinterpret_cast<char*>(&energy), sizeof(float));
            }

            void Write(std::ofstream& writer) const {
                writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
                writer.write(reinterpret_cast<const char*>(&energy), sizeof(float));
            }
        };

        const inline static byte eventID = 0b00000101;
    }
}

template<>
struct std::hash<NoteData*>
{
    std::size_t operator()(NoteData* s) const noexcept
    {
        std::size_t h1 = std::hash<float>{}(s->time);
        std::size_t h2 = std::hash<int>{}(s->lineIndex);
        std::size_t h3 = std::hash<int>{}(s->noteLineLayer);
        std::size_t h4 = std::hash<int>{}(s->beforeJumpNoteLineLayer);
        std::size_t h5 = std::hash<int>{}(s->gameplayType);
        std::size_t h6 = std::hash<int>{}(s->scoringType);
        std::size_t h7 = std::hash<int>{}(s->colorType);
        std::size_t h8 = std::hash<int>{}(s->cutDirection);
        std::size_t h9 = std::hash<float>{}(s->timeToNextColorNote);
        std::size_t h10 = std::hash<float>{}(s->timeToPrevColorNote);
        std::size_t h11 = std::hash<float>{}(s->flipLineIndex);
        std::size_t h12 = std::hash<float>{}(s->flipYSide);
        std::size_t h13 = std::hash<float>{}(s->cutDirectionAngleOffset);
        std::size_t h14 = std::hash<float>{}(s->cutSfxVolumeMultiplier);

        return h1 ^ h2 ^ h3 ^ h4 ^ h5 ^ h6 ^ h7 ^ h8 ^ h9 ^ h10 ^ h11 ^ h12 ^ h13 ^ h14;
    }
};