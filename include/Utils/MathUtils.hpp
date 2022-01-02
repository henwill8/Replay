#pragma once

#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Vector3.hpp"

namespace Replay {
    class MathUtils {
    public:
        // TODO: Use sombrero!
        static UnityEngine::Quaternion LerpEulerAngles(UnityEngine::Vector3 angleA, UnityEngine::Vector3 angleB, float amount) {
            UnityEngine::Quaternion quaternionA = UnityEngine::Quaternion::Euler(angleA);
            UnityEngine::Quaternion quaternionB = UnityEngine::Quaternion::Euler(angleB);

            return UnityEngine::Quaternion::Lerp(quaternionA, quaternionB, amount);
        }

        // TODO: Sombrero!
        static constexpr UnityEngine::Vector3 Lerp(UnityEngine::Vector3 const& value1, UnityEngine::Vector3 const& value2, float amount) {
            return {value1.x + (value2.x - value1.x) * amount, value1.y + (value2.y - value1.y) * amount, value1.z + (value2.z - value1.z) * amount};
        }

        static float RotationValuesDifference(float valueA, float valueB) {
            // So hard coded that I want to stab my eyes
            float difference1 = -(valueA - valueB);
            float distance1 = std::abs(difference1);

            float difference2 = -((valueA + 360) - valueB);
            float distance2 = std::abs(difference2);
            
            float difference3 = -((valueA - 360) - valueB);
            float distance3 = std::abs(difference3);

            if(distance1 <= distance2 && distance1 <= distance3) {
                return difference1;
            } else if(distance2 <= distance1 && distance2 <= distance3) {
                return difference2;
            }
            return difference3;
        }

        static UnityEngine::Vector3 EulerAnglesDifference(UnityEngine::Vector3 const& angleA, UnityEngine::Vector3 const& angleB) {
            return UnityEngine::Vector3(RotationValuesDifference(angleA.x, angleB.x), RotationValuesDifference(angleA.y, angleB.y), RotationValuesDifference(angleA.z, angleB.z));
        }
    };
}