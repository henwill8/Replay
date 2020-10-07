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
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalizationProvider
  class LocalizationProvider : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.Localization _localization
    // Offset: 0x18
    Polyglot::Localization* localization;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private LocalizationProvider _instance
    static GlobalNamespace::LocalizationProvider* _get__instance();
    // Set static field: static private LocalizationProvider _instance
    static void _set__instance(GlobalNamespace::LocalizationProvider* value);
    // public Polyglot.Localization get_localization()
    // Offset: 0x1916F40
    Polyglot::Localization* get_localization();
    // static public LocalizationProvider get_Instance()
    // Offset: 0x1916F48
    static GlobalNamespace::LocalizationProvider* get_Instance();
    // static public System.Void set_Instance(LocalizationProvider value)
    // Offset: 0x19170C4
    static void set_Instance(GlobalNamespace::LocalizationProvider* value);
    // static public System.Boolean get_HasInstance()
    // Offset: 0x1916FD4
    static bool get_HasInstance();
    // public System.Void .ctor()
    // Offset: 0x191711C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalizationProvider* New_ctor();
  }; // LocalizationProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
#pragma pack(pop)
