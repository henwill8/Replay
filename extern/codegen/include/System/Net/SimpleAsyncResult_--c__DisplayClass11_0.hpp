// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
  class SimpleAsyncResult::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func
    // Offset: 0x10
    System::Func_2<System::Net::SimpleAsyncResult*, bool>* func;
    // public System.Object locker
    // Offset: 0x18
    ::Il2CppObject* locker;
    // public System.Net.SimpleAsyncCallback callback
    // Offset: 0x20
    System::Net::SimpleAsyncCallback* callback;
    // System.Boolean <RunWithLock>b__0(System.Net.SimpleAsyncResult inner)
    // Offset: 0x11A63FC
    bool $RunWithLock$b__0(System::Net::SimpleAsyncResult* inner);
    // System.Void <RunWithLock>b__1(System.Net.SimpleAsyncResult inner)
    // Offset: 0x11A6484
    void $RunWithLock$b__1(System::Net::SimpleAsyncResult* inner);
    // public System.Void .ctor()
    // Offset: 0x11A5EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SimpleAsyncResult::$$c__DisplayClass11_0* New_ctor();
  }; // System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncResult::$$c__DisplayClass11_0*, "System.Net", "SimpleAsyncResult/<>c__DisplayClass11_0");
#pragma pack(pop)
