// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Snap
  // [] Offset: FFFFFFFF
  class Snap : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 snap
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 snap;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Snap
    Snap(UnityEngine::Vector3 snap_ = {}, UnityEngine::Vector3 offset_ = {}) noexcept : snap{snap_}, offset{offset_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SnapPosition()
    // Offset: 0x229C03C
    void SnapPosition();
    // public System.Void .ctor()
    // Offset: 0x229C31C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Snap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Snap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Snap*, creationType>()));
    }
  }; // Snap
  #pragma pack(pop)
  static check_size<sizeof(Snap), 36 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_SnapSizeCheck;
  static_assert(sizeof(Snap) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Snap*, "", "Snap");
