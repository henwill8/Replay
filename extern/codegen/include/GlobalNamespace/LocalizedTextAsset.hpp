// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalizedTextAsset
  class LocalizedTextAsset : public UnityEngine::ScriptableObject {
    public:
    // Nested type: GlobalNamespace::LocalizedTextAsset::TextInfo
    class TextInfo;
    // Nested type: GlobalNamespace::LocalizedTextAsset::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // private LocalizedTextAsset/TextInfo[] _textInfos
    // Offset: 0x18
    ::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>* textInfos;
    // private LocalizedTextAsset/TextInfo _lastTextInfo
    // Offset: 0x20
    GlobalNamespace::LocalizedTextAsset::TextInfo* lastTextInfo;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public LocalizedTextAsset/TextInfo[] get_textInfos()
    // Offset: 0x1A6BD24
    ::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>* get_textInfos();
    // public System.String get_localizedText()
    // Offset: 0x1A6BD2C
    ::Il2CppString* get_localizedText();
    // public System.Void .ctor()
    // Offset: 0x1A6BE60
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalizedTextAsset* New_ctor();
  }; // LocalizedTextAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset*, "", "LocalizedTextAsset");
#pragma pack(pop)