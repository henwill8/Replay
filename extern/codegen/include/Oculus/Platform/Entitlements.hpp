// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Entitlements
  // [] Offset: FFFFFFFF
  class Entitlements : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Entitlements
    Entitlements() noexcept {}
    // static public Oculus.Platform.Request IsUserEntitledToApplication()
    // Offset: 0x13E1310
    static Oculus::Platform::Request* IsUserEntitledToApplication();
  }; // Oculus.Platform.Entitlements
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Entitlements*, "Oculus.Platform", "Entitlements");
