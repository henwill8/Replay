// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
  struct TexturePacker::SpriteFrame : public System::ValueType {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single w
    // Offset: 0x8
    float w;
    // public System.Single h
    // Offset: 0xC
    float h;
    // Creating value type constructor for type: SpriteFrame
    constexpr SpriteFrame(float x_ = {}, float y_ = {}, float w_ = {}, float h_ = {}) noexcept : x{x_}, y{y_}, w{w_}, h{h_} {}
    // public override System.String ToString()
    // Offset: 0xC92B7C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteFrame");
#pragma pack(pop)
