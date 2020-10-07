// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: ServiceProvider
  struct ServiceProvider;
  // Forward declaring type: TimeWindow
  struct TimeWindow;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.UserOptions
  class UserOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Offset: 0x10
    System::IntPtr Handle;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetMaxUsers(System.UInt32 value)
    // Offset: 0xEB06C8
    void SetMaxUsers(uint value);
    // public System.Void AddServiceProvider(Oculus.Platform.ServiceProvider value)
    // Offset: 0xEAD23C
    void AddServiceProvider(Oculus::Platform::ServiceProvider value);
    // public System.Void ClearServiceProviders()
    // Offset: 0xEB0744
    void ClearServiceProviders();
    // public System.Void SetTimeWindow(Oculus.Platform.TimeWindow value)
    // Offset: 0xEB07B0
    void SetTimeWindow(Oculus::Platform::TimeWindow value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.UserOptions options)
    // Offset: 0xEAD2B8
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0xEAD1C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UserOptions* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0xEB082C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.UserOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserOptions*, "Oculus.Platform", "UserOptions");
#pragma pack(pop)
