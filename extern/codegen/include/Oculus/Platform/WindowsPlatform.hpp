// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.WindowsPlatform
  // [] Offset: FFFFFFFF
  class WindowsPlatform : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::WindowsPlatform::UnityLogDelegate
    class UnityLogDelegate;
    // Creating value type constructor for type: WindowsPlatform
    WindowsPlatform() noexcept {}
    // private System.Void CPPLogCallback(System.IntPtr tag, System.IntPtr message)
    // Offset: 0x22CEF00
    void CPPLogCallback(System::IntPtr tag, System::IntPtr message);
    // private System.IntPtr getCallbackPointer()
    // Offset: 0x22CEFD8
    System::IntPtr getCallbackPointer();
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x22CF018
    bool Initialize(::Il2CppString* appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x22CF0FC
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // public System.Void .ctor()
    // Offset: 0x22CF210
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::WindowsPlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsPlatform*, creationType>()));
    }
  }; // Oculus.Platform.WindowsPlatform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::WindowsPlatform*, "Oculus.Platform", "WindowsPlatform");
