// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: Valve.VR.EVREventType
#include "Valve/VR/EVREventType.hpp"
// Including type: Valve.VR.VREvent_t
#include "Valve/VR/VREvent_t.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_RenderModel
  class SteamVR_RenderModel;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events
  class SteamVR_Events : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_Events::Action
    class Action;
    // Nested type: GlobalNamespace::SteamVR_Events::ActionNoArgs
    class ActionNoArgs;
    // Nested type: GlobalNamespace::SteamVR_Events::Action_1<T>
    template<typename T>
    class Action_1;
    // Nested type: GlobalNamespace::SteamVR_Events::Action_2<T0, T1>
    template<typename T0, typename T1>
    class Action_2;
    // Nested type: GlobalNamespace::SteamVR_Events::Action_3<T0, T1, T2>
    template<typename T0, typename T1, typename T2>
    class Action_3;
    // Nested type: GlobalNamespace::SteamVR_Events::Event
    class Event;
    // Nested type: GlobalNamespace::SteamVR_Events::Event_1<T>
    template<typename T>
    class Event_1;
    // Nested type: GlobalNamespace::SteamVR_Events::Event_2<T0, T1>
    template<typename T0, typename T1>
    class Event_2;
    // Nested type: GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>
    template<typename T0, typename T1, typename T2>
    class Event_3;
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> Calibrating
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_Calibrating();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> Calibrating
    static void _set_Calibrating(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`2<System.Int32,System.Boolean> DeviceConnected
    static GlobalNamespace::SteamVR_Events::Event_2<int, bool>* _get_DeviceConnected();
    // Set static field: static public SteamVR_Events/Event`2<System.Int32,System.Boolean> DeviceConnected
    static void _set_DeviceConnected(GlobalNamespace::SteamVR_Events::Event_2<int, bool>* value);
    // Get static field: static public SteamVR_Events/Event`3<UnityEngine.Color,System.Single,System.Boolean> Fade
    static GlobalNamespace::SteamVR_Events::Event_3<UnityEngine::Color, float, bool>* _get_Fade();
    // Set static field: static public SteamVR_Events/Event`3<UnityEngine.Color,System.Single,System.Boolean> Fade
    static void _set_Fade(GlobalNamespace::SteamVR_Events::Event_3<UnityEngine::Color, float, bool>* value);
    // Get static field: static public SteamVR_Events/Event FadeReady
    static GlobalNamespace::SteamVR_Events::Event* _get_FadeReady();
    // Set static field: static public SteamVR_Events/Event FadeReady
    static void _set_FadeReady(GlobalNamespace::SteamVR_Events::Event* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> HideRenderModels
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_HideRenderModels();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> HideRenderModels
    static void _set_HideRenderModels(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> Initializing
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_Initializing();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> Initializing
    static void _set_Initializing(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> InputFocus
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_InputFocus();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> InputFocus
    static void _set_InputFocus(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> Loading
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_Loading();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> Loading
    static void _set_Loading(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Single> LoadingFadeIn
    static GlobalNamespace::SteamVR_Events::Event_1<float>* _get_LoadingFadeIn();
    // Set static field: static public SteamVR_Events/Event`1<System.Single> LoadingFadeIn
    static void _set_LoadingFadeIn(GlobalNamespace::SteamVR_Events::Event_1<float>* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Single> LoadingFadeOut
    static GlobalNamespace::SteamVR_Events::Event_1<float>* _get_LoadingFadeOut();
    // Set static field: static public SteamVR_Events/Event`1<System.Single> LoadingFadeOut
    static void _set_LoadingFadeOut(GlobalNamespace::SteamVR_Events::Event_1<float>* value);
    // Get static field: static public SteamVR_Events/Event`1<Valve.VR.TrackedDevicePose_t[]> NewPoses
    static GlobalNamespace::SteamVR_Events::Event_1<::Array<Valve::VR::TrackedDevicePose_t>*>* _get_NewPoses();
    // Set static field: static public SteamVR_Events/Event`1<Valve.VR.TrackedDevicePose_t[]> NewPoses
    static void _set_NewPoses(GlobalNamespace::SteamVR_Events::Event_1<::Array<Valve::VR::TrackedDevicePose_t>*>* value);
    // Get static field: static public SteamVR_Events/Event NewPosesApplied
    static GlobalNamespace::SteamVR_Events::Event* _get_NewPosesApplied();
    // Set static field: static public SteamVR_Events/Event NewPosesApplied
    static void _set_NewPosesApplied(GlobalNamespace::SteamVR_Events::Event* value);
    // Get static field: static public SteamVR_Events/Event`1<System.Boolean> OutOfRange
    static GlobalNamespace::SteamVR_Events::Event_1<bool>* _get_OutOfRange();
    // Set static field: static public SteamVR_Events/Event`1<System.Boolean> OutOfRange
    static void _set_OutOfRange(GlobalNamespace::SteamVR_Events::Event_1<bool>* value);
    // Get static field: static public SteamVR_Events/Event`2<SteamVR_RenderModel,System.Boolean> RenderModelLoaded
    static GlobalNamespace::SteamVR_Events::Event_2<GlobalNamespace::SteamVR_RenderModel*, bool>* _get_RenderModelLoaded();
    // Set static field: static public SteamVR_Events/Event`2<SteamVR_RenderModel,System.Boolean> RenderModelLoaded
    static void _set_RenderModelLoaded(GlobalNamespace::SteamVR_Events::Event_2<GlobalNamespace::SteamVR_RenderModel*, bool>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<Valve.VR.EVREventType,SteamVR_Events/Event`1<Valve.VR.VREvent_t>> systemEvents
    static System::Collections::Generic::Dictionary_2<Valve::VR::EVREventType, GlobalNamespace::SteamVR_Events::Event_1<Valve::VR::VREvent_t>*>* _get_systemEvents();
    // Set static field: static private System.Collections.Generic.Dictionary`2<Valve.VR.EVREventType,SteamVR_Events/Event`1<Valve.VR.VREvent_t>> systemEvents
    static void _set_systemEvents(System::Collections::Generic::Dictionary_2<Valve::VR::EVREventType, GlobalNamespace::SteamVR_Events::Event_1<Valve::VR::VREvent_t>*>* value);
    // static public SteamVR_Events/Action CalibratingAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD836BC
    static GlobalNamespace::SteamVR_Events::Action* CalibratingAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action DeviceConnectedAction(UnityEngine.Events.UnityAction`2<System.Int32,System.Boolean> action)
    // Offset: 0xD822B4
    static GlobalNamespace::SteamVR_Events::Action* DeviceConnectedAction(UnityEngine::Events::UnityAction_2<int, bool>* action);
    // static public SteamVR_Events/Action FadeAction(UnityEngine.Events.UnityAction`3<UnityEngine.Color,System.Single,System.Boolean> action)
    // Offset: 0xD83760
    static GlobalNamespace::SteamVR_Events::Action* FadeAction(UnityEngine::Events::UnityAction_3<UnityEngine::Color, float, bool>* action);
    // static public SteamVR_Events/Action FadeReadyAction(UnityEngine.Events.UnityAction action)
    // Offset: 0xD83804
    static GlobalNamespace::SteamVR_Events::Action* FadeReadyAction(UnityEngine::Events::UnityAction* action);
    // static public SteamVR_Events/Action HideRenderModelsAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD838EC
    static GlobalNamespace::SteamVR_Events::Action* HideRenderModelsAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action InitializingAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD83990
    static GlobalNamespace::SteamVR_Events::Action* InitializingAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action InputFocusAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD82210
    static GlobalNamespace::SteamVR_Events::Action* InputFocusAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action LoadingAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD83A34
    static GlobalNamespace::SteamVR_Events::Action* LoadingAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action LoadingFadeInAction(UnityEngine.Events.UnityAction`1<System.Single> action)
    // Offset: 0xD83AD8
    static GlobalNamespace::SteamVR_Events::Action* LoadingFadeInAction(UnityEngine::Events::UnityAction_1<float>* action);
    // static public SteamVR_Events/Action LoadingFadeOutAction(UnityEngine.Events.UnityAction`1<System.Single> action)
    // Offset: 0xD83B7C
    static GlobalNamespace::SteamVR_Events::Action* LoadingFadeOutAction(UnityEngine::Events::UnityAction_1<float>* action);
    // static public SteamVR_Events/Action NewPosesAction(UnityEngine.Events.UnityAction`1<Valve.VR.TrackedDevicePose_t[]> action)
    // Offset: 0xD83C20
    static GlobalNamespace::SteamVR_Events::Action* NewPosesAction(UnityEngine::Events::UnityAction_1<::Array<Valve::VR::TrackedDevicePose_t>*>* action);
    // static public SteamVR_Events/Action NewPosesAppliedAction(UnityEngine.Events.UnityAction action)
    // Offset: 0xD83CC4
    static GlobalNamespace::SteamVR_Events::Action* NewPosesAppliedAction(UnityEngine::Events::UnityAction* action);
    // static public SteamVR_Events/Action OutOfRangeAction(UnityEngine.Events.UnityAction`1<System.Boolean> action)
    // Offset: 0xD83D5C
    static GlobalNamespace::SteamVR_Events::Action* OutOfRangeAction(UnityEngine::Events::UnityAction_1<bool>* action);
    // static public SteamVR_Events/Action RenderModelLoadedAction(UnityEngine.Events.UnityAction`2<SteamVR_RenderModel,System.Boolean> action)
    // Offset: 0xD83E00
    static GlobalNamespace::SteamVR_Events::Action* RenderModelLoadedAction(UnityEngine::Events::UnityAction_2<GlobalNamespace::SteamVR_RenderModel*, bool>* action);
    // static public SteamVR_Events/Event`1<Valve.VR.VREvent_t> System(Valve.VR.EVREventType eventType)
    // Offset: 0xD83EA4
    static GlobalNamespace::SteamVR_Events::Event_1<Valve::VR::VREvent_t>* System(Valve::VR::EVREventType eventType);
    // static public SteamVR_Events/Action SystemAction(Valve.VR.EVREventType eventType, UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t> action)
    // Offset: 0xD82358
    static GlobalNamespace::SteamVR_Events::Action* SystemAction(Valve::VR::EVREventType eventType, UnityEngine::Events::UnityAction_1<Valve::VR::VREvent_t>* action);
    // static private System.Void .cctor()
    // Offset: 0xD83FAC
    static void _cctor();
  }; // SteamVR_Events
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events*, "", "SteamVR_Events");
#pragma pack(pop)
