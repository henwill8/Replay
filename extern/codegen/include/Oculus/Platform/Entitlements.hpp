// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Entitlements
  class Entitlements : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request IsUserEntitledToApplication()
    // Offset: 0xE99A10
    static Oculus::Platform::Request* IsUserEntitledToApplication();
  }; // Oculus.Platform.Entitlements
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Entitlements*, "Oculus.Platform", "Entitlements");
#pragma pack(pop)
