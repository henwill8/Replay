// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberType
  struct SaberType;
  // Forward declaring type: ColorType
  struct ColorType;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberTypeExtensions
  class SaberTypeExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean MatchesColorType(SaberType saberType, ColorType colorType)
    // Offset: 0x19A5FCC
    static bool MatchesColorType(GlobalNamespace::SaberType saberType, GlobalNamespace::ColorType colorType);
    // static public UnityEngine.XR.XRNode Node(SaberType saberType)
    // Offset: 0x19A7908
    static UnityEngine::XR::XRNode Node(GlobalNamespace::SaberType saberType);
  }; // SaberTypeExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTypeExtensions*, "", "SaberTypeExtensions");
#pragma pack(pop)
