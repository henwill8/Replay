// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Runtime.CompilerServices.INotifyCompletion
#include "System/Runtime/CompilerServices/INotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
  // [] Offset: FFFFFFFF
  class ICriticalNotifyCompletion/*, public System::Runtime::CompilerServices::INotifyCompletion*/ {
    public:
    // Creating value type constructor for type: ICriticalNotifyCompletion
    ICriticalNotifyCompletion() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::INotifyCompletion
    operator System::Runtime::CompilerServices::INotifyCompletion() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::INotifyCompletion*>(this);
    }
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0xFFFFFFFF
    void UnsafeOnCompleted(System::Action* continuation);
  }; // System.Runtime.CompilerServices.ICriticalNotifyCompletion
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ICriticalNotifyCompletion*, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
