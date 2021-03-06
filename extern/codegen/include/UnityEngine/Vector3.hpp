// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector3
  // [] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: CBE668
  // [RequiredByNativeCodeAttribute] Offset: CBE668
  // [NativeHeaderAttribute] Offset: CBE668
  // [NativeHeaderAttribute] Offset: CBE668
  // [NativeTypeAttribute] Offset: CBE668
  // [DefaultMemberAttribute] Offset: CBE668
  struct Vector3/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector3>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector3
    constexpr Vector3(float x_ = {}, float y_ = {}, float z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
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
    // Offset: 0x1ABD2F0
    static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static private System.Void OrthoNormalize2(ref UnityEngine.Vector3 a, ref UnityEngine.Vector3 b)
    // Offset: 0x1ABD41C
    static void OrthoNormalize2(UnityEngine::Vector3& a, UnityEngine::Vector3& b);
    // static public System.Void OrthoNormalize(ref UnityEngine.Vector3 normal, ref UnityEngine.Vector3 tangent)
    // Offset: 0x1ABD46C
    static void OrthoNormalize(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent);
    // static public UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta)
    // Offset: 0x1ABD500
    static UnityEngine::Vector3 RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta);
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
    // Offset: 0x1ABD63C
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static public UnityEngine.Vector3 LerpUnclamped(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
    // Offset: 0x1ABD704
    static UnityEngine::Vector3 LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t);
    // static public UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, ref UnityEngine.Vector3 currentVelocity, System.Single smoothTime)
    // Offset: 0x1ABD72C
    static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime);
    // static public UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, ref UnityEngine.Vector3 currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
    // Offset: 0x1ABD824
    static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xE15160
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xE15168
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0xE15170
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector3(float x, float y, float z)
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xE1517C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3(float x, float y) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Vector3::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, x, y);
    }
    // static public UnityEngine.Vector3 Scale(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x1ABDC28
    static UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // public System.Void Scale(UnityEngine.Vector3 scale)
    // Offset: 0xE15188
    void Scale(UnityEngine::Vector3 scale);
    // static public UnityEngine.Vector3 Cross(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x1ABDC58
    static UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Normalize(UnityEngine.Vector3 value)
    // Offset: 0x1ABDD28
    static UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value);
    // public System.Void Normalize()
    // Offset: 0xE151E8
    void Normalize();
    // public UnityEngine.Vector3 get_normalized()
    // Offset: 0xE151F0
    UnityEngine::Vector3 get_normalized();
    // static public System.Single Dot(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x1ABE0A0
    static float Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Project(UnityEngine.Vector3 vector, UnityEngine.Vector3 onNormal)
    // Offset: 0x1ABE0B8
    static UnityEngine::Vector3 Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal);
    // static public UnityEngine.Vector3 ProjectOnPlane(UnityEngine.Vector3 vector, UnityEngine.Vector3 planeNormal)
    // Offset: 0x1ABE1F0
    static UnityEngine::Vector3 ProjectOnPlane(UnityEngine::Vector3 vector, UnityEngine::Vector3 planeNormal);
    // static public System.Single Angle(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x1ABE328
    static float Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // static public System.Single Distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x1ABE4CC
    static float Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public UnityEngine.Vector3 ClampMagnitude(UnityEngine.Vector3 vector, System.Single maxLength)
    // Offset: 0x1ABE5A0
    static UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float maxLength);
    // static public System.Single Magnitude(UnityEngine.Vector3 vector)
    // Offset: 0x1ABDE00
    static float Magnitude(UnityEngine::Vector3 vector);
    // public System.Single get_magnitude()
    // Offset: 0xE151F8
    float get_magnitude();
    // static public System.Single SqrMagnitude(UnityEngine.Vector3 vector)
    // Offset: 0x1ABE72C
    static float SqrMagnitude(UnityEngine::Vector3 vector);
    // public System.Single get_sqrMagnitude()
    // Offset: 0xE15200
    float get_sqrMagnitude();
    // static public UnityEngine.Vector3 Min(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x1ABE744
    static UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 Max(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
    // Offset: 0x1ABE814
    static UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
    // static public UnityEngine.Vector3 get_zero()
    // Offset: 0x1ABDEC0
    static UnityEngine::Vector3 get_zero();
    // static public UnityEngine.Vector3 get_one()
    // Offset: 0x1ABE8E4
    static UnityEngine::Vector3 get_one();
    // static public UnityEngine.Vector3 get_forward()
    // Offset: 0x1AB92C8
    static UnityEngine::Vector3 get_forward();
    // static public UnityEngine.Vector3 get_back()
    // Offset: 0x1ABE950
    static UnityEngine::Vector3 get_back();
    // static public UnityEngine.Vector3 get_up()
    // Offset: 0x1AB9174
    static UnityEngine::Vector3 get_up();
    // static public UnityEngine.Vector3 get_down()
    // Offset: 0x1ABE9BC
    static UnityEngine::Vector3 get_down();
    // static public UnityEngine.Vector3 get_left()
    // Offset: 0x1ABEA28
    static UnityEngine::Vector3 get_left();
    // static public UnityEngine.Vector3 get_right()
    // Offset: 0x1AB9020
    static UnityEngine::Vector3 get_right();
    // static public UnityEngine.Vector3 get_positiveInfinity()
    // Offset: 0x1ABEA94
    static UnityEngine::Vector3 get_positiveInfinity();
    // public System.String ToString(System.String format)
    // Offset: 0xE15228
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Void .cctor()
    // Offset: 0x1ABEFB4
    static void _cctor();
    // static private System.Void Slerp_Injected(ref UnityEngine.Vector3 a, ref UnityEngine.Vector3 b, System.Single t, out UnityEngine.Vector3 ret)
    // Offset: 0x1ABD3B4
    static void Slerp_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, float t, UnityEngine::Vector3& ret);
    // static private System.Void RotateTowards_Injected(ref UnityEngine.Vector3 current, ref UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta, out UnityEngine.Vector3 ret)
    // Offset: 0x1ABD5CC
    static void RotateTowards_Injected(UnityEngine::Vector3& current, UnityEngine::Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine::Vector3& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE151A8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE151B0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Vector3 other)
    // Offset: 0xE151B8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Vector3 other)
    bool Equals(UnityEngine::Vector3 other);
    // public override System.String ToString()
    // Offset: 0xE15220
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector3
  #pragma pack(pop)
  static check_size<sizeof(Vector3), 8 + sizeof(float)> __UnityEngine_Vector3SizeCheck;
  static_assert(sizeof(Vector3) == 0xC);
  // static public UnityEngine.Vector3 op_Addition(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
  // Offset: 0x1AB9BAC
  UnityEngine::Vector3 operator+(const UnityEngine::Vector3& a, const UnityEngine::Vector3& b);
  // static public UnityEngine.Vector3 op_Subtraction(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
  // Offset: 0x1ABEB00
  UnityEngine::Vector3 operator-(const UnityEngine::Vector3& a, const UnityEngine::Vector3& b);
  // static public UnityEngine.Vector3 op_UnaryNegation(UnityEngine.Vector3 a)
  // Offset: 0x1ABEB10
  UnityEngine::Vector3 operator-(const UnityEngine::Vector3& a);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Vector3 a, System.Single d)
  // Offset: 0x1ABEB20
  UnityEngine::Vector3 operator*(const UnityEngine::Vector3& a, const float& d);
  // static public UnityEngine.Vector3 op_Multiply(System.Single d, UnityEngine.Vector3 a)
  // Offset: 0x1ABEB30
  UnityEngine::Vector3 operator*(const float& d, const UnityEngine::Vector3& a);
  // static public UnityEngine.Vector3 op_Division(UnityEngine.Vector3 a, System.Single d)
  // Offset: 0x1ABDEB0
  UnityEngine::Vector3 operator/(const UnityEngine::Vector3& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
  // Offset: 0x1ABEB44
  bool operator ==(const UnityEngine::Vector3& lhs, const UnityEngine::Vector3& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
  // Offset: 0x1ABEB78
  bool operator !=(const UnityEngine::Vector3& lhs, const UnityEngine::Vector3& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector3, "UnityEngine", "Vector3");
