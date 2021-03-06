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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.IntVec4
  // [] Offset: FFFFFFFF
  struct IntVec4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>*/ {
    public:
    // public UnityEngine.Vector4 value
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Vector4 value;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // Creating value type constructor for type: IntVec4
    constexpr IntVec4(UnityEngine::Vector4 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>
    operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Vector4
    constexpr operator UnityEngine::Vector4() const noexcept {
      return value;
    }
    // public System.Single get_x()
    // Offset: 0xE11810
    float get_x();
    // public System.Single get_y()
    // Offset: 0xE11818
    float get_y();
    // public System.Single get_z()
    // Offset: 0xE11820
    float get_z();
    // public System.Single get_w()
    // Offset: 0xE11828
    float get_w();
    // public System.Void .ctor(UnityEngine.Vector4 vector)
    // Offset: 0xE11830
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  IntVec4(UnityEngine::Vector4 vector)
    // public System.Boolean Equals(UnityEngine.Vector4 p)
    // Offset: 0xE1184C
    bool Equals(UnityEngine::Vector4 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0x19BBA58
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0xE1183C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec4 p)
    // Offset: 0xE11844
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.IntVec4 p)
    bool Equals(UnityEngine::ProBuilder::IntVec4 p);
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0xE11854
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE1185C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec4
  #pragma pack(pop)
  static check_size<sizeof(IntVec4), 0 + sizeof(UnityEngine::Vector4)> __UnityEngine_ProBuilder_IntVec4SizeCheck;
  static_assert(sizeof(IntVec4) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0x19BB924
  bool operator ==(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0x19BBA18
  bool operator !=(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
