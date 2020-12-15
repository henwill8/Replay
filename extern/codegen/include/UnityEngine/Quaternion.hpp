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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Quaternion
  struct Quaternion : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Quaternion>*/ {
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
    // public System.Single w
    // Offset: 0xC
    float w;
    // Creating value type constructor for type: Quaternion
    constexpr Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Quaternion>
    operator System::IEquatable_1<UnityEngine::Quaternion>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Quaternion>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static UnityEngine::Quaternion _get_identityQuaternion();
    // Set static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static void _set_identityQuaternion(UnityEngine::Quaternion value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-06;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0x1736444
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0x173654C
    static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1736640
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1736768
    static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1736890
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0x17369B8
    static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0x1736AAC
    static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
    // static private System.Void Internal_ToAxisAngleRad(UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1736BA4
    static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0x1736CA8
    static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0x1736DBC
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0x1736EC4
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xCA75E0
    // ABORTED: conflicts with another method.  Quaternion(float x, float y, float z, float w);
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0x1735B94
    static UnityEngine::Quaternion get_identity();
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0x1737010
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1737024
    static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xCA75EC
    void SetLookRotation(UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xCA75F4
    void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1737260
    static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0x173736C
    static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xCA75FC
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xCA7604
    void set_eulerAngles(UnityEngine::Vector3 value);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0x17375B8
    static UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0x17376AC
    static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler);
    // public System.Void ToAngleAxis(out System.Single angle, out UnityEngine.Vector3 axis)
    // Offset: 0xCA760C
    void ToAngleAxis(float& angle, UnityEngine::Vector3& axis);
    // static public UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
    // Offset: 0x1737830
    static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x1737998
    static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
    // public System.Void Normalize()
    // Offset: 0xCA7614
    void Normalize();
    // static private System.Void .cctor()
    // Offset: 0x1737C68
    static void _cctor();
    // static private System.Void FromToRotation_Injected(ref UnityEngine.Vector3 fromDirection, ref UnityEngine.Vector3 toDirection, out UnityEngine.Quaternion ret)
    // Offset: 0x17364F4
    static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Quaternion ret)
    // Offset: 0x17365F0
    static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
    // static private System.Void Slerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1736700
    static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void SlerpUnclamped_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1736828
    static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Lerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1736950
    static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_FromEulerRad_Injected(ref UnityEngine.Vector3 euler, out UnityEngine.Quaternion ret)
    // Offset: 0x1736A5C
    static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_ToEulerRad_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Vector3 ret)
    // Offset: 0x1736B54
    static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
    // static private System.Void Internal_ToAxisAngleRad_Injected(ref UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1736C50
    static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle);
    // static private System.Void AngleAxis_Injected(System.Single angle, ref UnityEngine.Vector3 axis, out UnityEngine.Quaternion ret)
    // Offset: 0x1736D5C
    static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
    // static private System.Void LookRotation_Injected(ref UnityEngine.Vector3 forward, ref UnityEngine.Vector3 upwards, out UnityEngine.Quaternion ret)
    // Offset: 0x1736E6C
    static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA761C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xCA7624
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xCA762C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Quaternion other)
    bool Equals(UnityEngine::Quaternion other);
    // public override System.String ToString()
    // Offset: 0xCA7634
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Quaternion
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1736F9C
  UnityEngine::Quaternion operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0x17356F4
  UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point);
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x173596C
  bool operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1737044
  bool operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
#pragma pack(pop)