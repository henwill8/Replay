#pragma once

#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/Quaternion.hpp"

#include <cmath>

// Just Fern experimenting, don't mind me
float ExpoEaseInOut(float t, float b, float c, float d)
{
    if (t == 0.0f) return b;
    if (t == d) return b + c;
    if ((t /= d / 2.0f) < 1.0f) return c / 2.0f * (float)std::pow(2.0f, 10.0f * (t - 1.0f)) + b;
    return c / 2.0f * (-(float)std::pow(2.0f, -10.0f * --t) + 2.0f) + b;
}

float EasedLerp(float from, float to, float t)
{
    return ExpoEaseInOut(t, from, to - from, 1.0f);
}

UnityEngine::Vector3 Lerp(UnityEngine::Vector3 value1, UnityEngine::Vector3 value2, float amount)
{
    return UnityEngine::Vector3(value1.x + (value2.x - value1.x) * amount, value1.y + (value2.y - value1.y) * amount, value1.z + (value2.z - value1.z) * amount);
}

UnityEngine::Vector3 EaseLerp(UnityEngine::Vector3 value1, UnityEngine::Vector3 value2, float amount)
{
    return UnityEngine::Vector3(EasedLerp(value1.x, value2.x, amount), EasedLerp(value1.y, value2.y, amount), EasedLerp(value1.z, value2.z, amount));
}

// TODO: How to make quaternion EaseLerp

UnityEngine::Quaternion Lerp(UnityEngine::Quaternion quaternion1, UnityEngine::Quaternion quaternion2, float amount)
{
    float num = 1.0f - amount;
    UnityEngine::Quaternion quaternion3 = UnityEngine::Quaternion{0.0f, 0.0f, 0.0f, 0.0f};
    if (quaternion1.x * quaternion2.x + quaternion1.y * quaternion2.y + quaternion1.z * quaternion2.z + quaternion1.w * quaternion2.w >= 0.0f)
    {
        quaternion3.x = num * quaternion1.x + amount * quaternion2.x;
        quaternion3.x = num * quaternion1.y + amount * quaternion2.y;
        quaternion3.z = num * quaternion1.z + amount * quaternion2.z;
        quaternion3.w = num * quaternion1.w + amount * quaternion2.w;
    }
    else
    {
        quaternion3.x = num * quaternion1.x - amount * quaternion2.x;
        quaternion3.y = num * quaternion1.y - amount * quaternion2.y;
        quaternion3.z = num * quaternion1.z - amount * quaternion2.z;
        quaternion3.w = num * quaternion1.w - amount * quaternion2.w;
    }
    float x = quaternion3.x * quaternion3.x + quaternion3.y * quaternion3.y + quaternion3.z * quaternion3.z + quaternion3.w * quaternion3.w;
    float num2 = 1.0f / std::sqrt(x);
    quaternion3.x *= num2;
    quaternion3.y *= num2;
    quaternion3.z *= num2;
    quaternion3.w *= num2;
    return quaternion3;
}


UnityEngine::Quaternion Slerp(UnityEngine::Quaternion quaternion1, UnityEngine::Quaternion quaternion2, float amount)
{
    float num = quaternion1.x * quaternion2.x + quaternion1.y * quaternion2.y + quaternion1.z * quaternion2.z + quaternion1.w * quaternion2.w;
    bool flag = false;
    if (num < 0.0f)
    {
        flag = true;
        num = -num;
    }
    float num2;
    float num3;
    if (num > 0.999999f)
    {
        num2 = 1.0f - amount;
        num3 = (flag ? (-amount) : amount);
    }
    else
    {
        float num4 = std::acos(num);
        float num5 = 1.0f / std::sin(num4);
        num2 = std::sin((1.0f - amount) * num4) * num5;
        num3 = (flag ? (-std::sin(amount * num4) * num5) : (std::sin(amount * num4) * num5));
    }
    UnityEngine::Quaternion result;
    result.x = num2 * quaternion1.x + num3 * quaternion2.x;
    result.y = num2 * quaternion1.y + num3 * quaternion2.y;
    result.z = num2 * quaternion1.z + num3 * quaternion2.z;
    result.w = num2 * quaternion1.w + num3 * quaternion2.w;
    return result;
}