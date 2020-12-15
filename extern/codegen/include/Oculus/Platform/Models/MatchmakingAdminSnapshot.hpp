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
  // Forward declaring type: MatchmakingAdminSnapshotCandidateList
  class MatchmakingAdminSnapshotCandidateList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshotCandidateList Candidates
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* Candidates;
    // public readonly System.Double MyCurrentThreshold
    // Offset: 0x18
    double MyCurrentThreshold;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DBDEC
    static MatchmakingAdminSnapshot* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingAdminSnapshot
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshot*, "Oculus.Platform.Models", "MatchmakingAdminSnapshot");
#pragma pack(pop)