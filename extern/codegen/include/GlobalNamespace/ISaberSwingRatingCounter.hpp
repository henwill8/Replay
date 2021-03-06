// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SwingSaberRatingDidChangeDelegate
  class SwingSaberRatingDidChangeDelegate;
  // Forward declaring type: SwingSaberRatingDidFinishDelegate
  class SwingSaberRatingDidFinishDelegate;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ISaberSwingRatingCounter
  // [] Offset: FFFFFFFF
  class ISaberSwingRatingCounter {
    public:
    // Creating value type constructor for type: ISaberSwingRatingCounter
    ISaberSwingRatingCounter() noexcept {}
    // public System.Void add_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value);
    // public System.Void remove_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value);
    // public System.Void add_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    // Offset: 0xFFFFFFFF
    void add_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value);
    // public System.Void remove_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    // Offset: 0xFFFFFFFF
    void remove_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value);
    // public System.Boolean get_didFinish()
    // Offset: 0xFFFFFFFF
    bool get_didFinish();
    // public System.Single get_beforeCutRating()
    // Offset: 0xFFFFFFFF
    float get_beforeCutRating();
    // public System.Single get_afterCutRating()
    // Offset: 0xFFFFFFFF
    float get_afterCutRating();
  }; // ISaberSwingRatingCounter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberSwingRatingCounter*, "", "ISaberSwingRatingCounter");
