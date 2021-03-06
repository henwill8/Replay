// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSStarTextEventEffect
#include "GlobalNamespace/BTSStarTextEventEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEventEffect/StarTextSprite
  // [] Offset: FFFFFFFF
  class BTSStarTextEventEffect::StarTextSprite : public ::Il2CppObject {
    public:
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: starTextSprite
    char __padding0[0x4] = {};
    // private UnityEngine.Sprite _starTextSprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* starTextSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private System.Single _animationLength
    // Size: 0x4
    // Offset: 0x20
    float animationLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: StarTextSprite
    StarTextSprite(int id_ = {}, UnityEngine::Sprite* starTextSprite_ = {}, float animationLength_ = {}) noexcept : id{id_}, starTextSprite{starTextSprite_}, animationLength{animationLength_} {}
    // public System.Int32 get_id()
    // Offset: 0x103B51C
    int get_id();
    // public UnityEngine.Sprite get_starTextSprite()
    // Offset: 0x103B524
    UnityEngine::Sprite* get_starTextSprite();
    // public System.Single get_animationLength()
    // Offset: 0x103B52C
    float get_animationLength();
    // public System.Void .ctor()
    // Offset: 0x103B534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEventEffect::StarTextSprite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEventEffect::StarTextSprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventEffect::StarTextSprite*, creationType>()));
    }
  }; // BTSStarTextEventEffect/StarTextSprite
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEventEffect::StarTextSprite), 32 + sizeof(float)> __GlobalNamespace_BTSStarTextEventEffect_StarTextSpriteSizeCheck;
  static_assert(sizeof(BTSStarTextEventEffect::StarTextSprite) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*, "", "BTSStarTextEventEffect/StarTextSprite");
