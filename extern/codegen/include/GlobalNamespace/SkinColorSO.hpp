// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SkinColorSO
  class SkinColorSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _id
    // Offset: 0x18
    ::Il2CppString* id;
    // private UnityEngine.Color _color
    // Offset: 0x20
    UnityEngine::Color color;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_id()
    // Offset: 0xF38AC4
    ::Il2CppString* get_id();
    // public UnityEngine.Color get_Color()
    // Offset: 0xF38ACC
    UnityEngine::Color get_Color();
    // public System.Void .ctor()
    // Offset: 0xF38AD8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SkinColorSO* New_ctor();
  }; // SkinColorSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSO*, "", "SkinColorSO");
#pragma pack(pop)