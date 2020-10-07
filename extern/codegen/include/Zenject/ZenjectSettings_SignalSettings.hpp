// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
// Including type: Zenject.SignalDefaultSyncModes
#include "Zenject/SignalDefaultSyncModes.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectSettings/SignalSettings
  class ZenjectSettings::SignalSettings : public ::Il2CppObject {
    public:
    // private Zenject.SignalDefaultSyncModes _defaultSyncMode
    // Offset: 0x10
    Zenject::SignalDefaultSyncModes defaultSyncMode;
    // private Zenject.SignalMissingHandlerResponses _missingHandlerDefaultResponse
    // Offset: 0x14
    Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse;
    // private System.Boolean _requireStrictUnsubscribe
    // Offset: 0x18
    bool requireStrictUnsubscribe;
    // private System.Int32 _defaultAsyncTickPriority
    // Offset: 0x1C
    int defaultAsyncTickPriority;
    // Get static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static Zenject::ZenjectSettings::SignalSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static void _set_Default(Zenject::ZenjectSettings::SignalSettings* value);
    // public System.Void .ctor(Zenject.SignalDefaultSyncModes defaultSyncMode, Zenject.SignalMissingHandlerResponses missingHandlerDefaultResponse, System.Boolean requireStrictUnsubscribe, System.Int32 defaultAsyncTickPriority)
    // Offset: 0x1944610
    static ZenjectSettings::SignalSettings* New_ctor(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int defaultAsyncTickPriority);
    // public System.Int32 get_DefaultAsyncTickPriority()
    // Offset: 0x19446A0
    int get_DefaultAsyncTickPriority();
    // public Zenject.SignalDefaultSyncModes get_DefaultSyncMode()
    // Offset: 0x19446A8
    Zenject::SignalDefaultSyncModes get_DefaultSyncMode();
    // public Zenject.SignalMissingHandlerResponses get_MissingHandlerDefaultResponse()
    // Offset: 0x19446B0
    Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse();
    // public System.Boolean get_RequireStrictUnsubscribe()
    // Offset: 0x19446B8
    bool get_RequireStrictUnsubscribe();
    // static private System.Void .cctor()
    // Offset: 0x19446C0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1944664
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ZenjectSettings::SignalSettings* New_ctor();
  }; // Zenject.ZenjectSettings/SignalSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings::SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
#pragma pack(pop)
