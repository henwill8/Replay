// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TimelinePauseMarker
  class TimelinePauseMarker : public UnityEngine::Timeline::Marker/*, public UnityEngine::Playables::INotification*/ {
    public:
    // private readonly UnityEngine.PropertyName <id>k__BackingField
    // Offset: 0x28
    UnityEngine::PropertyName id;
    // Creating interface conversion operator: operator UnityEngine::Playables::INotification
    operator UnityEngine::Playables::INotification() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotification*>(this);
    }
    // public UnityEngine.PropertyName get_id()
    // Offset: 0x19CEDA4
    // Implemented from: UnityEngine.Playables.INotification
    // Base method: UnityEngine.PropertyName INotification::get_id()
    UnityEngine::PropertyName get_id();
    // Creating proxy method: UnityEngine_Playables_INotification_get_id
    // Maps to method: get_id
    UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id();
    // public System.Void .ctor()
    // Offset: 0x19CEDAC
    // Implemented from: UnityEngine.Timeline.Marker
    // Base method: System.Void Marker::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TimelinePauseMarker* New_ctor();
  }; // TimelinePauseMarker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelinePauseMarker*, "", "TimelinePauseMarker");
#pragma pack(pop)
