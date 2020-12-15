// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Vector3
  struct Vector3 : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Vector3>*/ {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // Creating value type constructor for type: Vector3
    constexpr Vector3(float x_ = {}, float y_ = {}, float z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector3>
    operator System::IEquatable_1<UnityEngine::Vector3>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector3>*>(this);
    }
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static field const value: static public System.Single kEpsilonNormalSqrt
    static constexpr const float kEpsilonNormalSqrt = 1e-15;
    // Get static field: static public System.Single kEpsilonNormalSqrt
    static float _get_kEpsilonNormalSqrt();
    // Set static field: static public System.Single kEpsilonNormalSqrt
    static void _set_kEpsilonNormalSqrt(float value);
    // Get static field: static private readonly UnityEngine.Vector3 zeroVector
    static UnityEngine::Vector3 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector3 zeroVector
    static void _set_zeroVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 oneVector
    static UnityEngine::Vector3 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector3 oneVector
    static void _set_oneVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 upVector
    static UnityEngine::Vector3 _get_upVector();
    // Set static field: static private readonly UnityEngine.Vector3 upVector
    static void _set_upVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 downVector
    static UnityEngine::Vector3 _get_downVector();
    // Set static field: static private readonly UnityEngine.Vector3 downVector
    static void _set_downVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 leftVector
    static UnityEngine::Vector3 _get_leftVector();
    // Set static field: static private readonly UnityEngine.Vector3 leftVector
    static void _set_leftVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 rightVector
    static UnityEngine::Vector3 _get_rightVector();
    // Set static field: static private readonly UnityEngine.Vector3 rightVector
    static void _set_rightVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 forwardVector
    static UnityEngine::Vector3 _get_forwardVector();
    // Set static field: static private readonly UnityEngine.Vector3 forwardVector
    static void _set_forwardVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 backVector
    static UnityEngine::Vector3 _get_backVector();
    // Set static field: static private readonly UnityEngine.Vector3 backVector
    static void _set_backVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 positiveInfinityVector
    static UnityEngine::Vector3 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector3 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 negativeInfinityVector
    static UnityEngine::Vector3 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector3 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector3 value);
    // static public UnityEngine.Vector3 Slerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
    // Offset: 0x16CB478
    static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static private System.Void OrthoNormalize2(ref UnityEngine.Vector3 a, ref UnityEngine.Vector3 b)
    // Offset: 0x16CB5A4
    static void OrthoNormalize2(UnityEngine::Vector3& a, UnityEngine::Vector3& b);
    // static public System.Void OrthoNormalize(ref UnityEngine.Vector3 normal, ref UnityEngine.Vector3 tangent)
    // Offset: 0x16CB5F4
    static void OrthoNormalize(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent);
    // static public UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta)
    // Offset: 0x16CB688
    static UnityEngine::Vector3 RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta);
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
    // Offset: 0x16CB7C4
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static public UnityEngine.Vector3 LerpUnclamped(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
    // Offset: 0x16CB88C
    static UnityEngine::Vector3 LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static public UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, ref UnityEngine.Vector3 currentVelocity, System.Single smoothTime)
    // Offset: 0x16CB8B4
    static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime);
    // static public UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, ref UnityEngine.Vector3 currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
    // Offset: 0x16CB9AC
    static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xCA6638
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xCA6640
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0xCA6648
    // ABORTED: conflicts with another method.  Vector3(float x, float y, float z);
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xCA6654
    Vector3(float x, float y);
    // static public UnityEngine.Vector3 Scale(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x16CBDB0
    static UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // public System.Void Scale(UnityEngine.Vector3 scale)
    // Offset: 0xCA6660
    void Scale(UnityEngine::Vector3 scale);
    // static public UnityEngine.Vector3 Cross(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x16CBDE0
    static UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Normalize(UnityEngine.Vector3 value)
    // Offset: 0x16CBEB0
    static UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value);
    // public System.Void Normalize()
    // Offset: 0xCA66C0
    void Normalize();
    // public UnityEngine.Vector3 get_normalized()
    // Offset: 0xCA66C8
    UnityEngine::Vector3 get_normalized();
    // static public System.Single Dot(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x16CC228
    static float Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Project(UnityEngine.Vector3 vector, UnityEngine.Vector3 onNormal)
    // Offset: 0x16CC240
    static UnityEngine::Vector3 Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal);
    // static public UnityEngine.Vector3 ProjectOnPlane(UnityEngine.Vector3 vector, UnityEngine.Vector3 planeNormal)
    // Offset: 0x16CC378
    static UnityEngine::Vector3 ProjectOnPlane(UnityEngine::Vector3 vector, UnityEngine::Vector3 planeNormal);
    // static public System.Single Angle(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x16CC4B0
    static float Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // static public System.Single Distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x16CC654
    static float Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public UnityEngine.Vector3 ClampMagnitude(UnityEngine.Vector3 vector, System.Single maxLength)
    // Offset: 0x16CC728
    static UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float maxLength);
    // static public System.Single Magnitude(UnityEngine.Vector3 vector)
    // Offset: 0x16CBF88
    static float Magnitude(UnityEngine::Vector3 vector);
    // public System.Single get_magnitude()
    // Offset: 0xCA66D0
    float get_magnitude();
    // static public System.Single SqrMagnitude(UnityEngine.Vector3 vector)
    // Offset: 0x16CC8B4
    static float SqrMagnitude(UnityEngine::Vector3 vector);
    // public System.Single get_sqrMagnitude()
    // Offset: 0xCA66D8
    float get_sqrMagnitude();
    // static public UnityEngine.Vector3 Min(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x16CC8CC
    static UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Max(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x16CC99C
    static UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 get_zero()
    // Offset: 0x16CC048
    static UnityEngine::Vector3 get_zero();
    // static public UnityEngine.Vector3 get_one()
    // Offset: 0x16CCA6C
    static UnityEngine::Vector3 get_one();
    // static public UnityEngine.Vector3 get_forward()
    // Offset: 0x16C7450
    static UnityEngine::Vector3 get_forward();
    // static public UnityEngine.Vector3 get_back()
    // Offset: 0x16CCAD8
    static UnityEngine::Vector3 get_back();
    // static public UnityEngine.Vector3 get_up()
    // Offset: 0x16C72FC
    static UnityEngine::Vector3 get_up();
    // static public UnityEngine.Vector3 get_down()
    // Offset: 0x16CCB44
    static UnityEngine::Vector3 get_down();
    // static public UnityEngine.Vector3 get_left()
    // Offset: 0x16CCBB0
    static UnityEngine::Vector3 get_left();
    // static public UnityEngine.Vector3 get_right()
    // Offset: 0x16C71A8
    static UnityEngine::Vector3 get_right();
    // static public UnityEngine.Vector3 get_positiveInfinity()
    // Offset: 0x16CCC1C
    static UnityEngine::Vector3 get_positiveInfinity();
    // public System.String ToString(System.String format)
    // Offset: 0xCA6700
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Void .cctor()
    // Offset: 0x16CD13C
    static void _cctor();
    // static private System.Void Slerp_Injected(ref UnityEngine.Vector3 a, ref UnityEngine.Vector3 b, System.Single t, out UnityEngine.Vector3 ret)
    // Offset: 0x16CB53C
    static void Slerp_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, float t, UnityEngine::Vector3& ret);
    // static private System.Void RotateTowards_Injected(ref UnityEngine.Vector3 current, ref UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta, out UnityEngine.Vector3 ret)
    // Offset: 0x16CB754
    static void RotateTowards_Injected(UnityEngine::Vector3& current, UnityEngine::Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine::Vector3& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA6680
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xCA6688
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Vector3 other)
    // Offset: 0xCA6690
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Vector3 other)
    bool Equals(UnityEngine::Vector3 other);
    // public override System.String ToString()
    // Offset: 0xCA66F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector3
  // static public UnityEngine.Vector3 op_Addition(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
  // Offset: 0x16C7D34
  UnityEngine::Vector3 operator+(const UnityEngine::Vector3& a, const UnityEngine::Vector3& b);
  // static public UnityEngine.Vector3 op_Subtraction(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
  // Offset: 0x16CCC88
  UnityEngine::Vector3 operator-(const UnityEngine::Vector3& a, const UnityEngine::Vector3& b);
  // static public UnityEngine.Vector3 op_UnaryNegation(UnityEngine.Vector3 a)
  // Offset: 0x16CCC98
  UnityEngine::Vector3 operator-(const UnityEngine::Vector3& a);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Vector3 a, System.Single d)
  // Offset: 0x16CCCA8
  UnityEngine::Vector3 operator*(const UnityEngine::Vector3& a, const float& d);
  // static public UnityEngine.Vector3 op_Multiply(System.Single d, UnityEngine.Vector3 a)
  // Offset: 0x16CCCB8
  UnityEngine::Vector3 operator*(const float& d, const UnityEngine::Vector3& a);
  // static public UnityEngine.Vector3 op_Division(UnityEngine.Vector3 a, System.Single d)
  // Offset: 0x16CC038
  UnityEngine::Vector3 operator/(const UnityEngine::Vector3& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
  // Offset: 0x16CCCCC
  bool operator ==(const UnityEngine::Vector3& lhs, const UnityEngine::Vector3& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
  // Offset: 0x16CCD00
  bool operator !=(const UnityEngine::Vector3& lhs, const UnityEngine::Vector3& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector3, "UnityEngine", "Vector3");
#pragma pack(pop)