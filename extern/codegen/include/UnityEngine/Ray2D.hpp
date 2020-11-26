// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Ray2D
  struct Ray2D : public System::ValueType {
    public:
    // private UnityEngine.Vector2 m_Origin
    // Offset: 0x0
    UnityEngine::Vector2 m_Origin;
    // private UnityEngine.Vector2 m_Direction
    // Offset: 0x8
    UnityEngine::Vector2 m_Direction;
    // Creating value type constructor for type: Ray2D
    constexpr Ray2D(UnityEngine::Vector2 m_Origin_ = {}, UnityEngine::Vector2 m_Direction_ = {}) noexcept : m_Origin{m_Origin_}, m_Direction{m_Direction_} {}
    // public System.Void .ctor(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction)
    // Offset: 0xCA76CC
    // ABORTED: conflicts with another method.  Ray2D(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction);
    // public UnityEngine.Vector2 get_origin()
    // Offset: 0xCA7700
    UnityEngine::Vector2 get_origin();
    // public UnityEngine.Vector2 get_direction()
    // Offset: 0xCA7708
    UnityEngine::Vector2 get_direction();
    // public UnityEngine.Vector2 GetPoint(System.Single distance)
    // Offset: 0xCA7710
    UnityEngine::Vector2 GetPoint(float distance);
    // public override System.String ToString()
    // Offset: 0xCA7718
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Ray2D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ray2D, "UnityEngine", "Ray2D");
#pragma pack(pop)
