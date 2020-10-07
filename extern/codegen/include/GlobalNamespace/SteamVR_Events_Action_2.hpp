// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Action`2
  template<typename T0, typename T1>
  class SteamVR_Events::Action_2 : public GlobalNamespace::SteamVR_Events::Action {
    public:
    // private SteamVR_Events/Event`2<T0,T1> _event
    // Offset: 0x0
    GlobalNamespace::SteamVR_Events::Event_2<T0, T1>* event;
    // private UnityEngine.Events.UnityAction`2<T0,T1> action
    // Offset: 0x0
    UnityEngine::Events::UnityAction_2<T0, T1>* action;
    // public System.Void .ctor(SteamVR_Events/Event`2<T0,T1> _event, UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0xFFFFFFFF
    static SteamVR_Events::Action_2<T0, T1>* New_ctor(GlobalNamespace::SteamVR_Events::Event_2<T0, T1>* _event, UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      return THROW_UNLESS((il2cpp_utils::New<SteamVR_Events::Action_2<T0, T1>*>(_event, action)));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enable", enabled));
    }
  }; // SteamVR_Events/Action`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Action_2, "", "SteamVR_Events/Action`2");
#pragma pack(pop)
