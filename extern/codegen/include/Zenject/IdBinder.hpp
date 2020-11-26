// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IdBinder
  class IdBinder : public ::Il2CppObject {
    public:
    // private Zenject.BindInfo _bindInfo
    // Offset: 0x10
    Zenject::BindInfo* bindInfo;
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept {
      return bindInfo;
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x129FB88
    static IdBinder* New_ctor(Zenject::BindInfo* bindInfo);
    // public System.Void WithId(System.Object identifier)
    // Offset: 0x129FBBC
    void WithId(::Il2CppObject* identifier);
  }; // Zenject.IdBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdBinder*, "Zenject", "IdBinder");
#pragma pack(pop)
