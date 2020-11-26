// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingEnqueueResult
  class MatchmakingEnqueueResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshotOptional
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshotOptional;
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshot
    // Offset: 0x18
    Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshot;
    // public readonly System.UInt32 AverageWait
    // Offset: 0x20
    uint AverageWait;
    // public readonly System.UInt32 MatchesInLastHourCount
    // Offset: 0x24
    uint MatchesInLastHourCount;
    // public readonly System.UInt32 MaxExpectedWait
    // Offset: 0x28
    uint MaxExpectedWait;
    // public readonly System.String Pool
    // Offset: 0x30
    ::Il2CppString* Pool;
    // public readonly System.UInt32 RecentMatchPercentage
    // Offset: 0x38
    uint RecentMatchPercentage;
    // public readonly System.String RequestHash
    // Offset: 0x40
    ::Il2CppString* RequestHash;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DC1C4
    static MatchmakingEnqueueResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingEnqueueResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueueResult*, "Oculus.Platform.Models", "MatchmakingEnqueueResult");
#pragma pack(pop)
