// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.Vector3Tween
  // [] Offset: FFFFFFFF
  class Vector3Tween : public Tweening::Tween_1<UnityEngine::Vector3> {
    public:
    // Creating value type constructor for type: Vector3Tween
    Vector3Tween() noexcept {}
    // public System.Void .ctor(UnityEngine.Vector3 fromValue, UnityEngine.Vector3 toValue, System.Action`1<UnityEngine.Vector3> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0xF4DD40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3Tween* New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector3Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3Tween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(UnityEngine.Vector3 fromValue, UnityEngine.Vector3 toValue, System.Action`1<UnityEngine.Vector3> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0xF4DE08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3Tween* New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector3Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3Tween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // public UnityEngine.Vector3 GetValue(System.Single t)
    // Offset: 0xF4DED0
    UnityEngine::Vector3 GetValue(float t);
  }; // Tweening.Vector3Tween
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector3Tween*, "Tweening", "Vector3Tween");
