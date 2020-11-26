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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Sprite _icon
    // Offset: 0x18
    UnityEngine::Sprite* icon;
    // private System.String _descriptionLocalizationKey
    // Offset: 0x20
    ::Il2CppString* descriptionLocalizationKey;
    // private System.String _characteristicNameLocalizationKey
    // Offset: 0x28
    ::Il2CppString* characteristicNameLocalizationKey;
    // private System.String _serializedName
    // Offset: 0x30
    ::Il2CppString* serializedName;
    // private System.String _compoundIdPartName
    // Offset: 0x38
    ::Il2CppString* compoundIdPartName;
    // private System.Int32 _sortingOrder
    // Offset: 0x40
    int sortingOrder;
    // private System.Boolean _containsRotationEvents
    // Offset: 0x44
    bool containsRotationEvents;
    // private System.Boolean _requires360Movement
    // Offset: 0x45
    bool requires360Movement;
    // private System.Int32 _numberOfColors
    // Offset: 0x48
    int numberOfColors;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1A7BBB4
    UnityEngine::Sprite* get_icon();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x1A7BBBC
    ::Il2CppString* get_descriptionLocalizationKey();
    // public System.String get_characteristicNameLocalizationKey()
    // Offset: 0x1A7BBC4
    ::Il2CppString* get_characteristicNameLocalizationKey();
    // public System.String get_serializedName()
    // Offset: 0x1A7BBCC
    ::Il2CppString* get_serializedName();
    // public System.String get_compoundIdPartName()
    // Offset: 0x1A7BBD4
    ::Il2CppString* get_compoundIdPartName();
    // public System.Int32 get_sortingOrder()
    // Offset: 0x1A7BBDC
    int get_sortingOrder();
    // public System.Boolean get_containsRotationEvents()
    // Offset: 0x1A7BBE4
    bool get_containsRotationEvents();
    // public System.Boolean get_requires360Movement()
    // Offset: 0x1A7BBEC
    bool get_requires360Movement();
    // public System.Int32 get_numberOfColors()
    // Offset: 0x1A7BBF4
    int get_numberOfColors();
    // public System.Void .ctor()
    // Offset: 0x1A7BBFC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicSO* New_ctor();
  }; // BeatmapCharacteristicSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSO*, "", "BeatmapCharacteristicSO");
#pragma pack(pop)
