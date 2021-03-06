// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.EntityType
#include "UnityEngine/ProBuilder/EntityType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Entity
  // [] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: D55118
  // [AddComponentMenu] Offset: D55118
  class Entity : public UnityEngine::MonoBehaviour {
    public:
    // [HideInInspector] Offset: 0xD55C20
    // [FormerlySerializedAsAttribute] Offset: 0xD55C20
    // private UnityEngine.ProBuilder.EntityType m_EntityType
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::ProBuilder::EntityType m_EntityType;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::EntityType) == 0x4);
    // Creating value type constructor for type: Entity
    Entity(UnityEngine::ProBuilder::EntityType m_EntityType_ = {}) noexcept : m_EntityType{m_EntityType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.ProBuilder.EntityType get_entityType()
    // Offset: 0x19B4608
    UnityEngine::ProBuilder::EntityType get_entityType();
    // public System.Void Awake()
    // Offset: 0x19B4610
    void Awake();
    // public System.Void SetEntity(UnityEngine.ProBuilder.EntityType t)
    // Offset: 0x19B46D0
    void SetEntity(UnityEngine::ProBuilder::EntityType t);
    // public System.Void .ctor()
    // Offset: 0x19B46D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Entity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Entity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Entity*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Entity
  #pragma pack(pop)
  static check_size<sizeof(Entity), 24 + sizeof(UnityEngine::ProBuilder::EntityType)> __UnityEngine_ProBuilder_EntitySizeCheck;
  static_assert(sizeof(Entity) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Entity*, "UnityEngine.ProBuilder", "Entity");
