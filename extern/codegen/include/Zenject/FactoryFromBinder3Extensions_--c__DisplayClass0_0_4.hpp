// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D0508C
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    System::Guid factoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass0_0_4
    $$c__DisplayClass0_0_4(System::Guid factoryId_ = {}) noexcept : factoryId{factoryId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4
  // Could not write size check! Type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4");
