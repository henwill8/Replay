// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ProviderUtil
  class ProviderUtil : public ::Il2CppObject {
    public:
    // static public System.Type GetTypeToInstantiate(System.Type contractType, System.Type concreteType)
    // Offset: 0x134ED3C
    static System::Type* GetTypeToInstantiate(System::Type* contractType, System::Type* concreteType);
  }; // Zenject.ProviderUtil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderUtil*, "Zenject", "ProviderUtil");
#pragma pack(pop)