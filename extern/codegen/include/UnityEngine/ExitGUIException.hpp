// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ExitGUIException
  class ExitGUIException : public System::Exception {
    public:
    // System.Void .ctor(System.String message)
    // Offset: 0x15FA3D0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    static ExitGUIException* New_ctor(::Il2CppString* message);
  }; // UnityEngine.ExitGUIException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExitGUIException*, "UnityEngine", "ExitGUIException");
#pragma pack(pop)