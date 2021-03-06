// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.MarkerTrack
  // [] Offset: FFFFFFFF
  // [TrackBindingTypeAttribute] Offset: CFECC4
  // [HideInMenuAttribute] Offset: CFECC4
  // [ExcludeFromPresetAttribute] Offset: CFECC4
  class MarkerTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Creating value type constructor for type: MarkerTrack
    MarkerTrack() noexcept {}
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x1733860
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> TrackAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x17339CC
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarkerTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::MarkerTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarkerTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.MarkerTrack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MarkerTrack*, "UnityEngine.Timeline", "MarkerTrack");
