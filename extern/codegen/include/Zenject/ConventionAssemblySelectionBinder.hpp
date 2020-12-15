// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder
  class ConventionAssemblySelectionBinder : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c
    class $$c;
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // private Zenject.ConventionBindInfo <BindInfo>k__BackingField
    // Offset: 0x10
    Zenject::ConventionBindInfo* BindInfo;
    // Creating conversion operator: operator Zenject::ConventionBindInfo*
    constexpr operator Zenject::ConventionBindInfo*() const noexcept {
      return BindInfo;
    }
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x10F157C
    static ConventionAssemblySelectionBinder* New_ctor(Zenject::ConventionBindInfo* bindInfo);
    // protected Zenject.ConventionBindInfo get_BindInfo()
    // Offset: 0x10F15B0
    Zenject::ConventionBindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.ConventionBindInfo value)
    // Offset: 0x10F15B8
    void set_BindInfo(Zenject::ConventionBindInfo* value);
    // public System.Void FromAllAssemblies()
    // Offset: 0x10F15C0
    void FromAllAssemblies();
    // public System.Void FromAssemblyContaining()
    // Offset: 0xFFFFFFFF
    template<class T>
    void FromAssemblyContaining() {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "FromAssemblyContaining", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // public System.Void FromAssembliesContaining(params System.Type[] types)
    // Offset: 0x10F15C4
    void FromAssembliesContaining(::Array<System::Type*>* types);
    // Creating initializer_list -> params proxy for: System.Void FromAssembliesContaining(params System.Type[] types)
    void FromAssembliesContaining(std::initializer_list<System::Type*> types);
    // Creating TArgs -> initializer_list proxy for: System.Void FromAssembliesContaining(params System.Type[] types)
    template<class ...TParams>
    void FromAssembliesContaining(TParams&&... types) {
      FromAssembliesContaining({types...});
    }
    // public System.Void FromAssembliesContaining(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x10F15C8
    void FromAssembliesContaining(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // public System.Void FromThisAssembly()
    // Offset: 0x10F17B0
    void FromThisAssembly();
    // public System.Void FromAssembly(System.Reflection.Assembly assembly)
    // Offset: 0x10F1878
    void FromAssembly(System::Reflection::Assembly* assembly);
    // public System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    // Offset: 0x10F1874
    void FromAssemblies(::Array<System::Reflection::Assembly*>* assemblies);
    // Creating initializer_list -> params proxy for: System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    void FromAssemblies(std::initializer_list<System::Reflection::Assembly*> assemblies);
    // Creating TArgs -> initializer_list proxy for: System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    template<class ...TParams>
    void FromAssemblies(TParams&&... assemblies) {
      FromAssemblies({assemblies...});
    }
    // public System.Void FromAssemblies(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies)
    // Offset: 0x10F16EC
    void FromAssemblies(System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* assemblies);
    // public System.Void FromAssembliesWhere(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x10F19A4
    void FromAssembliesWhere(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
  }; // Zenject.ConventionAssemblySelectionBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
#pragma pack(pop)