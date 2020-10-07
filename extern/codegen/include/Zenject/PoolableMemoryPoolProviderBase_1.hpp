// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
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
  // Autogenerated type: Zenject.PoolableMemoryPoolProviderBase`1
  template<typename TContract>
  class PoolableMemoryPoolProviderBase_1 : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // private System.Guid <PoolId>k__BackingField
    // Offset: 0x0
    System::Guid PoolId;
    // private Zenject.DiContainer <Container>k__BackingField
    // Offset: 0x0
    Zenject::DiContainer* Container;
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    static PoolableMemoryPoolProviderBase_1<TContract>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      return THROW_UNLESS(il2cpp_utils::New<PoolableMemoryPoolProviderBase_1<TContract>*>(container, poolId));
    }
    // protected System.Guid get_PoolId()
    // Offset: 0xFFFFFFFF
    System::Guid get_PoolId() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>(this, "get_PoolId"));
    }
    // private System.Void set_PoolId(System.Guid value)
    // Offset: 0xFFFFFFFF
    void set_PoolId(System::Guid value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_PoolId", value));
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // private System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0xFFFFFFFF
    void set_Container(Zenject::DiContainer* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Container", value));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.PoolableMemoryPoolProviderBase`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProviderBase_1, "Zenject", "PoolableMemoryPoolProviderBase`1");
#pragma pack(pop)
