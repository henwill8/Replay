// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationUtil
  class ValidationUtil : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ValidationUtil::$$c
    class $$c;
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(params System.Type[] argTypes)
    // Offset: 0x19D27F8
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateDefaultArgs(::Array<System::Type*>* argTypes);
    // Creating initializer_list -> params proxy for: System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(params System.Type[] argTypes)
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateDefaultArgs(std::initializer_list<System::Type*> argTypes);
    // Creating TArgs -> initializer_list proxy for: System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(params System.Type[] argTypes)
    template<class ...TParams>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateDefaultArgs(TParams&&... argTypes) {
      return CreateDefaultArgs({argTypes...});
    }
  }; // Zenject.ValidationUtil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationUtil*, "Zenject", "ValidationUtil");
#pragma pack(pop)
