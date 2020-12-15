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
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.IntVec2
  struct IntVec2 : public System::ValueType/*, public System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>*/ {
    public:
    // public UnityEngine.Vector2 value
    // Offset: 0x0
    UnityEngine::Vector2 value;
    // Creating value type constructor for type: IntVec2
    constexpr IntVec2(UnityEngine::Vector2 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>
    operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Vector2
    constexpr operator UnityEngine::Vector2() const noexcept {
      return value;
    }
    // public System.Single get_x()
    // Offset: 0xCA3564
    float get_x();
    // public System.Single get_y()
    // Offset: 0xCA356C
    float get_y();
    // public System.Void .ctor(UnityEngine.Vector2 vector)
    // Offset: 0xCA3574
    // ABORTED: conflicts with another method.  IntVec2(UnityEngine::Vector2 vector);
    // public System.Boolean Equals(UnityEngine.Vector2 p)
    // Offset: 0xCA358C
    bool Equals(UnityEngine::Vector2 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0x163A5FC
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0xCA357C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec2 p)
    // Offset: 0xCA3584
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.IntVec2 p)
    bool Equals(UnityEngine::ProBuilder::IntVec2 p);
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0xCA3594
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA359C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec2
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec2 a, UnityEngine.ProBuilder.IntVec2 b)
  // Offset: 0x163A528
  bool operator ==(const UnityEngine::ProBuilder::IntVec2& a, const UnityEngine::ProBuilder::IntVec2& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec2 a, UnityEngine.ProBuilder.IntVec2 b)
  // Offset: 0x163A5C8
  bool operator !=(const UnityEngine::ProBuilder::IntVec2& a, const UnityEngine::ProBuilder::IntVec2& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec2, "UnityEngine.ProBuilder", "IntVec2");
#pragma pack(pop)