// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Context/<>c
  class Context::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Context/<>c <>9
    static Zenject::Context::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Context/<>c <>9
    static void _set_$$9(Zenject::Context::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static System::Func_2<System::Type*, bool>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xD6EC3C
    static void _cctor();
    // System.Boolean <set_NormalInstallerTypes>b__16_0(System.Type x)
    // Offset: 0xD6ECAC
    bool $set_NormalInstallerTypes$b__16_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0xD6ECA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Context::$$c* New_ctor();
  }; // Zenject.Context/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Context::$$c*, "Zenject", "Context/<>c");
#pragma pack(pop)
