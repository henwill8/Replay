// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Motion
  class Motion : public UnityEngine::Object {
    public:
    // private readonly System.Boolean <isAnimatorMotion>k__BackingField
    // Offset: 0x18
    bool isAnimatorMotion;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isLooping()
    // Offset: 0x19CC528
    bool get_isLooping();
    // protected System.Void .ctor()
    // Offset: 0x19C715C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Motion* New_ctor();
  }; // UnityEngine.Motion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Motion*, "UnityEngine", "Motion");
#pragma pack(pop)
