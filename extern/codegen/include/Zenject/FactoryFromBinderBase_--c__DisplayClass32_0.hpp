// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass32_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D0555C
  class FactoryFromBinderBase::$$c__DisplayClass32_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass32_0
    $$c__DisplayClass32_0(::Il2CppString* resourcePath_ = {}, Zenject::FactoryFromBinderBase* $$4__this_ = {}) noexcept : resourcePath{resourcePath_}, $$4__this{$$4__this_} {}
    // Zenject.IProvider <FromNewScriptableObjectResource>b__0(Zenject.DiContainer container)
    // Offset: 0x14E5FDC
    Zenject::IProvider* $FromNewScriptableObjectResource$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x14E508C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$$c__DisplayClass32_0*, creationType>()));
    }
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass32_0
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase::$$c__DisplayClass32_0), 24 + sizeof(Zenject::FactoryFromBinderBase*)> __Zenject_FactoryFromBinderBase_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(FactoryFromBinderBase::$$c__DisplayClass32_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass32_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass32_0");
