// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo
  class ReflectionTypeInfo::InjectFieldInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.FieldInfo FieldInfo
    // Offset: 0x10
    System::Reflection::FieldInfo* FieldInfo;
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Offset: 0x18
    Zenject::InjectableInfo* InjectableInfo;
    // public System.Void .ctor(System.Reflection.FieldInfo fieldInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x12A54D4
    static ReflectionTypeInfo::InjectFieldInfo* New_ctor(System::Reflection::FieldInfo* fieldInfo, Zenject::InjectableInfo* injectableInfo);
  }; // Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo");
#pragma pack(pop)