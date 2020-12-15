// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleFileLogger
#include "GlobalNamespace/SimpleFileLogger.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleFileLogger/MonoLogger
  class SimpleFileLogger::MonoLogger : public UnityEngine::MonoBehaviour {
    public:
    // private readonly System.Collections.Generic.List`1<System.String> _lines
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* lines;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x103E514
    void OnDestroy();
    // public System.Void Log(System.String text)
    // Offset: 0x103E14C
    void Log(::Il2CppString* text);
    // public System.Void Clear()
    // Offset: 0x103E4A0
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x103E568
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleFileLogger::MonoLogger* New_ctor();
  }; // SimpleFileLogger/MonoLogger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleFileLogger::MonoLogger*, "", "SimpleFileLogger/MonoLogger");
#pragma pack(pop)