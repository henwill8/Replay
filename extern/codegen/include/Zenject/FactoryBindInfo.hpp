// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryBindInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D03C94
  class FactoryBindInfo : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD05FEC
    // private System.Type <FactoryType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* FactoryType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD05FFC
    // private System.Func`2<Zenject.DiContainer,Zenject.IProvider> <ProviderFunc>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* ProviderFunc;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD0600C
    // private System.Collections.Generic.List`1<Zenject.TypeValuePair> <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* Arguments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // Creating value type constructor for type: FactoryBindInfo
    FactoryBindInfo(System::Type* FactoryType_ = {}, System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* ProviderFunc_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* Arguments_ = {}) noexcept : FactoryType{FactoryType_}, ProviderFunc{ProviderFunc_}, Arguments{Arguments_} {}
    // public System.Void .ctor(System.Type factoryType)
    // Offset: 0x14E4074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryBindInfo* New_ctor(System::Type* factoryType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryBindInfo*, creationType>(factoryType)));
    }
    // public System.Type get_FactoryType()
    // Offset: 0x14E410C
    System::Type* get_FactoryType();
    // private System.Void set_FactoryType(System.Type value)
    // Offset: 0x14E4114
    void set_FactoryType(System::Type* value);
    // public System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0x14E411C
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // public System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0x14E4124
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_Arguments()
    // Offset: 0x14E412C
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_Arguments();
    // public System.Void set_Arguments(System.Collections.Generic.List`1<Zenject.TypeValuePair> value)
    // Offset: 0x14E4134
    void set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
  }; // Zenject.FactoryBindInfo
  #pragma pack(pop)
  static check_size<sizeof(FactoryBindInfo), 32 + sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)> __Zenject_FactoryBindInfoSizeCheck;
  static_assert(sizeof(FactoryBindInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
