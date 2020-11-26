// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DiffieHellmanUtility/OperationTimer
  class DiffieHellmanUtility::OperationTimer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly System.Diagnostics.Stopwatch _stopwatch
    // Offset: 0x10
    System::Diagnostics::Stopwatch* stopwatch;
    // private readonly System.String _operationName
    // Offset: 0x18
    ::Il2CppString* operationName;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // private System.Void .ctor(System.String operationName)
    // Offset: 0x1B4B334
    static DiffieHellmanUtility::OperationTimer* New_ctor(::Il2CppString* operationName);
    // static public DiffieHellmanUtility/OperationTimer Time(System.String operation)
    // Offset: 0x1B4A998
    static GlobalNamespace::DiffieHellmanUtility::OperationTimer* Time(::Il2CppString* operation);
    // public System.Void Dispose()
    // Offset: 0x1B4B3D8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // DiffieHellmanUtility/OperationTimer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::OperationTimer*, "", "DiffieHellmanUtility/OperationTimer");
#pragma pack(pop)
