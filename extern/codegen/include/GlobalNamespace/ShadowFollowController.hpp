// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ShadowFollowController
  // [] Offset: FFFFFFFF
  class ShadowFollowController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _shadowTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* shadowTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [NullAllowed] Offset: 0xD343C0
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.SpriteRenderer _shadowSpriteRenderer
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::SpriteRenderer* shadowSpriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // [SpaceAttribute] Offset: 0xD34408
    // private UnityEngine.Vector2 _shadowHeightRange
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Vector2 shadowHeightRange;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _shadowSizeRange
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Vector2 shadowSizeRange;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _shadowAlphaRange
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Vector2 shadowAlphaRange;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: ShadowFollowController
    ShadowFollowController(UnityEngine::Transform* shadowTransform_ = {}, UnityEngine::Transform* targetTransform_ = {}, UnityEngine::SpriteRenderer* shadowSpriteRenderer_ = {}, UnityEngine::Vector2 shadowHeightRange_ = {}, UnityEngine::Vector2 shadowSizeRange_ = {}, UnityEngine::Vector2 shadowAlphaRange_ = {}) noexcept : shadowTransform{shadowTransform_}, targetTransform{targetTransform_}, shadowSpriteRenderer{shadowSpriteRenderer_}, shadowHeightRange{shadowHeightRange_}, shadowSizeRange{shadowSizeRange_}, shadowAlphaRange{shadowAlphaRange_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetTargetTransform(UnityEngine.Transform target)
    // Offset: 0xF6A950
    void SetTargetTransform(UnityEngine::Transform* target);
    // protected System.Void Update()
    // Offset: 0xF6A958
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF6AAF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShadowFollowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShadowFollowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShadowFollowController*, creationType>()));
    }
  }; // ShadowFollowController
  #pragma pack(pop)
  static check_size<sizeof(ShadowFollowController), 64 + sizeof(UnityEngine::Vector2)> __GlobalNamespace_ShadowFollowControllerSizeCheck;
  static_assert(sizeof(ShadowFollowController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShadowFollowController*, "", "ShadowFollowController");
