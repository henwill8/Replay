// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DiContainer/<>c
  class DiContainer::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.DiContainer/<>c <>9
    static Zenject::DiContainer::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.DiContainer/<>c <>9
    static void _set_$$9(Zenject::DiContainer::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>,System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/ProviderInfo>> <>9__33_0
    static System::Func_2<System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>*, System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>*>* _get_$$9__33_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>,System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/ProviderInfo>> <>9__33_0
    static void _set_$$9__33_0(System::Func_2<System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>*, System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>*>* value);
    // Get static field: static public System.Func`2<Zenject.DiContainer/ProviderInfo,Zenject.IProvider> <>9__33_1
    static System::Func_2<Zenject::DiContainer::ProviderInfo*, Zenject::IProvider*>* _get_$$9__33_1();
    // Set static field: static public System.Func`2<Zenject.DiContainer/ProviderInfo,Zenject.IProvider> <>9__33_1
    static void _set_$$9__33_1(System::Func_2<Zenject::DiContainer::ProviderInfo*, Zenject::IProvider*>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__86_1
    static System::Func_2<System::Type*, bool>* _get_$$9__86_1();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__86_1
    static void _set_$$9__86_1(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__97_0
    static System::Func_2<Zenject::TypeValuePair, ::Il2CppString*>* _get_$$9__97_0();
    // Set static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__97_0
    static void _set_$$9__97_0(System::Func_2<Zenject::TypeValuePair, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__102_0
    static System::Func_2<Zenject::TypeValuePair, ::Il2CppString*>* _get_$$9__102_0();
    // Set static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__102_0
    static void _set_$$9__102_0(System::Func_2<Zenject::TypeValuePair, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__197_0
    static System::Func_2<System::Type*, bool>* _get_$$9__197_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__197_0
    static void _set_$$9__197_0(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__198_0
    static System::Func_2<System::Type*, bool>* _get_$$9__198_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__198_0
    static void _set_$$9__198_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1292A70
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/ProviderInfo> <get_AllProviders>b__33_0(System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo> x)
    // Offset: 0x1292AE0
    System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>* $get_AllProviders$b__33_0(System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>* x);
    // Zenject.IProvider <get_AllProviders>b__33_1(Zenject.DiContainer/ProviderInfo x)
    // Offset: 0x1292AE8
    Zenject::IProvider* $get_AllProviders$b__33_1(Zenject::DiContainer::ProviderInfo* x);
    // System.Boolean <ResolveTypeAll>b__86_1(System.Type x)
    // Offset: 0x1292B00
    bool $ResolveTypeAll$b__86_1(System::Type* x);
    // System.String <InstantiateInternal>b__97_0(Zenject.TypeValuePair x)
    // Offset: 0x1292B6C
    ::Il2CppString* $InstantiateInternal$b__97_0(Zenject::TypeValuePair x);
    // System.String <InjectExplicitInternal>b__102_0(Zenject.TypeValuePair x)
    // Offset: 0x1292BD4
    ::Il2CppString* $InjectExplicitInternal$b__102_0(Zenject::TypeValuePair x);
    // System.Boolean <BindInternal>b__197_0(System.Type x)
    // Offset: 0x1292C3C
    bool $BindInternal$b__197_0(System::Type* x);
    // System.Boolean <Bind>b__198_0(System.Type x)
    // Offset: 0x1292CB8
    bool $Bind$b__198_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x1292AD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DiContainer::$$c* New_ctor();
  }; // Zenject.DiContainer/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::$$c*, "Zenject", "DiContainer/<>c");
#pragma pack(pop)
