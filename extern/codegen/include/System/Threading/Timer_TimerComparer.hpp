// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Timer/TimerComparer
  class Timer::TimerComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x1D1F4A0
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object x, System.Object y)
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Void .ctor()
    // Offset: 0x1D1E75C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Timer::TimerComparer* New_ctor();
  }; // System.Threading.Timer/TimerComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer::TimerComparer*, "System.Threading", "Timer/TimerComparer");
#pragma pack(pop)