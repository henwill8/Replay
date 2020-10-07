// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSchemeSO
  class ColorSchemeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private ColorScheme _colorScheme
    // Offset: 0x18
    GlobalNamespace::ColorScheme* colorScheme;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorScheme get_colorScheme()
    // Offset: 0x1980DB0
    GlobalNamespace::ColorScheme* get_colorScheme();
    // public System.Void .ctor()
    // Offset: 0x1980DB8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorSchemeSO* New_ctor();
  }; // ColorSchemeSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
#pragma pack(pop)
