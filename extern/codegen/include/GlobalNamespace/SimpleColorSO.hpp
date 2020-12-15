// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorSO
#include "GlobalNamespace/ColorSO.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleColorSO
  class SimpleColorSO : public GlobalNamespace::ColorSO {
    public:
    // protected UnityEngine.Color _color
    // Offset: 0x18
    UnityEngine::Color color;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetColor(UnityEngine.Color c)
    // Offset: 0x1A0B0B8
    void SetColor(UnityEngine::Color c);
    // public override UnityEngine.Color get_color()
    // Offset: 0x1A0B0AC
    // Implemented from: ColorSO
    // Base method: UnityEngine.Color ColorSO::get_color()
    UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x1A0B0C4
    // Implemented from: ColorSO
    // Base method: System.Void ColorSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleColorSO* New_ctor();
  }; // SimpleColorSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleColorSO*, "", "SimpleColorSO");
#pragma pack(pop)