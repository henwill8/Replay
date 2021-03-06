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
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Matrix4x4
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CBE598
  // [DefaultMemberAttribute] Offset: CBE598
  // [NativeTypeAttribute] Offset: CBE598
  // [NativeHeaderAttribute] Offset: CBE598
  // [NativeClassAttribute] Offset: CBE598
  struct Matrix4x4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Matrix4x4>*/ {
    public:
    // [NativeNameAttribute] Offset: 0xCC2468
    // public System.Single m00
    // Size: 0x4
    // Offset: 0x0
    float m00;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC24A0
    // public System.Single m10
    // Size: 0x4
    // Offset: 0x4
    float m10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC24D8
    // public System.Single m20
    // Size: 0x4
    // Offset: 0x8
    float m20;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2510
    // public System.Single m30
    // Size: 0x4
    // Offset: 0xC
    float m30;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2548
    // public System.Single m01
    // Size: 0x4
    // Offset: 0x10
    float m01;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2580
    // public System.Single m11
    // Size: 0x4
    // Offset: 0x14
    float m11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC25B8
    // public System.Single m21
    // Size: 0x4
    // Offset: 0x18
    float m21;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC25F0
    // public System.Single m31
    // Size: 0x4
    // Offset: 0x1C
    float m31;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2628
    // public System.Single m02
    // Size: 0x4
    // Offset: 0x20
    float m02;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2660
    // public System.Single m12
    // Size: 0x4
    // Offset: 0x24
    float m12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2698
    // public System.Single m22
    // Size: 0x4
    // Offset: 0x28
    float m22;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC26D0
    // public System.Single m32
    // Size: 0x4
    // Offset: 0x2C
    float m32;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2708
    // public System.Single m03
    // Size: 0x4
    // Offset: 0x30
    float m03;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2740
    // public System.Single m13
    // Size: 0x4
    // Offset: 0x34
    float m13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC2778
    // public System.Single m23
    // Size: 0x4
    // Offset: 0x38
    float m23;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCC27B0
    // public System.Single m33
    // Size: 0x4
    // Offset: 0x3C
    float m33;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Matrix4x4
    constexpr Matrix4x4(float m00_ = {}, float m10_ = {}, float m20_ = {}, float m30_ = {}, float m01_ = {}, float m11_ = {}, float m21_ = {}, float m31_ = {}, float m02_ = {}, float m12_ = {}, float m22_ = {}, float m32_ = {}, float m03_ = {}, float m13_ = {}, float m23_ = {}, float m33_ = {}) noexcept : m00{m00_}, m10{m10_}, m20{m20_}, m30{m30_}, m01{m01_}, m11{m11_}, m21{m21_}, m31{m31_}, m02{m02_}, m12{m12_}, m22{m22_}, m32{m32_}, m03{m03_}, m13{m13_}, m23{m23_}, m33{m33_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Matrix4x4>
    operator System::IEquatable_1<UnityEngine::Matrix4x4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Matrix4x4>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static UnityEngine::Matrix4x4 _get_zeroMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static void _set_zeroMatrix(UnityEngine::Matrix4x4 value);
    // Get static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static UnityEngine::Matrix4x4 _get_identityMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static void _set_identityMatrix(UnityEngine::Matrix4x4 value);
    // private UnityEngine.Vector3 GetLossyScale()
    // Offset: 0xE17B2C
    UnityEngine::Vector3 GetLossyScale();
    // public UnityEngine.Vector3 get_lossyScale()
    // Offset: 0xE17B34
    UnityEngine::Vector3 get_lossyScale();
    // static public UnityEngine.Matrix4x4 TRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
    // Offset: 0x1B2F034
    static UnityEngine::Matrix4x4 TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s);
    // static public UnityEngine.Matrix4x4 Inverse(UnityEngine.Matrix4x4 m)
    // Offset: 0x1B2F174
    static UnityEngine::Matrix4x4 Inverse(UnityEngine::Matrix4x4 m);
    // public UnityEngine.Matrix4x4 get_inverse()
    // Offset: 0xE17B3C
    UnityEngine::Matrix4x4 get_inverse();
    // static public UnityEngine.Matrix4x4 Ortho(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
    // Offset: 0x1B2F33C
    static UnityEngine::Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar);
    // public System.Void .ctor(UnityEngine.Vector4 column0, UnityEngine.Vector4 column1, UnityEngine.Vector4 column2, UnityEngine.Vector4 column3)
    // Offset: 0xE17B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Matrix4x4(UnityEngine::Vector4 column0, UnityEngine::Vector4 column1, UnityEngine::Vector4 column2, UnityEngine::Vector4 column3) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Matrix4x4::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(column0, column1, column2, column3)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, column0, column1, column2, column3);
    }
    // public System.Single get_Item(System.Int32 row, System.Int32 column)
    // Offset: 0xE17B54
    float get_Item(int row, int column);
    // public System.Void set_Item(System.Int32 row, System.Int32 column, System.Single value)
    // Offset: 0xE17B60
    void set_Item(int row, int column, float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xE17B6C
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xE17B74
    void set_Item(int index, float value);
    // public UnityEngine.Vector4 GetColumn(System.Int32 index)
    // Offset: 0xE17BC4
    UnityEngine::Vector4 GetColumn(int index);
    // public System.Void SetColumn(System.Int32 index, UnityEngine.Vector4 column)
    // Offset: 0xE17BCC
    void SetColumn(int index, UnityEngine::Vector4 column);
    // public UnityEngine.Vector3 MultiplyPoint(UnityEngine.Vector3 point)
    // Offset: 0xE17BD4
    UnityEngine::Vector3 MultiplyPoint(UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyPoint3x4(UnityEngine.Vector3 point)
    // Offset: 0xE17BDC
    UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyVector(UnityEngine.Vector3 vector)
    // Offset: 0xE17BE4
    UnityEngine::Vector3 MultiplyVector(UnityEngine::Vector3 vector);
    // static public UnityEngine.Matrix4x4 Rotate(UnityEngine.Quaternion q)
    // Offset: 0x1B2FCF8
    static UnityEngine::Matrix4x4 Rotate(UnityEngine::Quaternion q);
    // static public UnityEngine.Matrix4x4 get_identity()
    // Offset: 0x1B2FD90
    static UnityEngine::Matrix4x4 get_identity();
    // static private System.Void .cctor()
    // Offset: 0x1B3036C
    static void _cctor();
    // static private System.Void GetLossyScale_Injected(ref UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Vector3 ret)
    // Offset: 0x1B2EFE0
    static void GetLossyScale_Injected(UnityEngine::Matrix4x4& _unity_self, UnityEngine::Vector3& ret);
    // static private System.Void TRS_Injected(ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion q, ref UnityEngine.Vector3 s, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B2F10C
    static void TRS_Injected(UnityEngine::Vector3& pos, UnityEngine::Quaternion& q, UnityEngine::Vector3& s, UnityEngine::Matrix4x4& ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B2F230
    static void Inverse_Injected(UnityEngine::Matrix4x4& m, UnityEngine::Matrix4x4& ret);
    // static private System.Void Ortho_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B2F430
    static void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, UnityEngine::Matrix4x4& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE17B7C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE17B84
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Matrix4x4 other)
    // Offset: 0xE17B8C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Matrix4x4 other)
    bool Equals(UnityEngine::Matrix4x4 other);
    // public override System.String ToString()
    // Offset: 0xE17BEC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Matrix4x4
  #pragma pack(pop)
  static check_size<sizeof(Matrix4x4), 60 + sizeof(float)> __UnityEngine_Matrix4x4SizeCheck;
  static_assert(sizeof(Matrix4x4) == 0x40);
  // static public UnityEngine.Matrix4x4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
  // Offset: 0x1B2FA7C
  UnityEngine::Matrix4x4 operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Matrix4x4& rhs);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Vector4 vector)
  // Offset: 0x1B2FB28
  UnityEngine::Vector4 operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Vector4& vector);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
