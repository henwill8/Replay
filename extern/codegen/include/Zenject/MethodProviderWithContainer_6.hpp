// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`7<T1, T2, T3, T4, T5, T6, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TResult>
  class Func_7;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Autogenerated type: Zenject.MethodProviderWithContainer`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MethodProviderWithContainer_6 : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly System.Func`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> _method
    // Offset: 0x0
    System::Func_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* method;
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Creating conversion operator: operator System::Func_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*
    constexpr operator System::Func_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*() const noexcept {
      return method;
    }
    // public System.Void .ctor(System.Func`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> method)
    // Offset: 0xFFFFFFFF
    static MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor(System::Func_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* method) {
      return THROW_UNLESS((il2cpp_utils::New<MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(method)));
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
  }; // Zenject.MethodProviderWithContainer`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderWithContainer_6, "Zenject", "MethodProviderWithContainer`6");
#pragma pack(pop)
