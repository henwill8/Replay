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
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Pose
  // [] Offset: FFFFFFFF
  struct Pose/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Pose>*/ {
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: Pose
    constexpr Pose(UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Pose>
    operator System::IEquatable_1<UnityEngine::Pose>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Pose>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Pose k_Identity
    static UnityEngine::Pose _get_k_Identity();
    // Set static field: static private readonly UnityEngine.Pose k_Identity
    static void _set_k_Identity(UnityEngine::Pose value);
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xE18278
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Pose(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0xE18294
    UnityEngine::Vector3 get_forward();
    // static private System.Void .cctor()
    // Offset: 0x1B3C504
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xE1828C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE1829C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.Pose other)
    // Offset: 0xE182A4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Pose other)
    bool Equals(UnityEngine::Pose other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE182DC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Pose
  #pragma pack(pop)
  static check_size<sizeof(Pose), 12 + sizeof(UnityEngine::Quaternion)> __UnityEngine_PoseSizeCheck;
  static_assert(sizeof(Pose) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Pose, "UnityEngine", "Pose");
