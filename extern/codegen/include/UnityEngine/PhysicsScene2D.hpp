// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PhysicsScene2D
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CDC6E8
  struct PhysicsScene2D/*, public System::ValueType, public System::IEquatable_1<UnityEngine::PhysicsScene2D>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PhysicsScene2D
    constexpr PhysicsScene2D(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::PhysicsScene2D>
    operator System::IEquatable_1<UnityEngine::PhysicsScene2D>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::PhysicsScene2D>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0xE320B4
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask);
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0xE320BC
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // static private UnityEngine.RaycastHit2D Raycast_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0x22D4BF4
    static UnityEngine::RaycastHit2D Raycast_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0xE32134
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x22D4D14
    static int RaycastArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0xE32178
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x22D4E18
    static int RaycastList_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 GetRayIntersection(UnityEngine.Ray ray, System.Single distance, UnityEngine.RaycastHit2D[] results, System.Int32 layerMask)
    // Offset: 0xE321BC
    int GetRayIntersection(UnityEngine::Ray ray, float distance, ::Array<UnityEngine::RaycastHit2D>* results, int layerMask);
    // static private System.Int32 GetRayIntersectionArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x22D4F1C
    static int GetRayIntersectionArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Void Raycast_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, out UnityEngine.RaycastHit2D ret)
    // Offset: 0x22D4C94
    static void Raycast_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, UnityEngine::RaycastHit2D& ret);
    // static private System.Int32 RaycastArray_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x22D4D98
    static int RaycastArray_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector2 origin, ref UnityEngine.Vector2 direction, System.Single distance, ref UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x22D4E9C
    static int RaycastList_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 GetRayIntersectionArray_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x22D4FA8
    static int GetRayIntersectionArray_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector3& origin, UnityEngine::Vector3& direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // public override System.String ToString()
    // Offset: 0xE3208C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xE32094
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE3209C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.PhysicsScene2D other)
    // Offset: 0xE320A4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.PhysicsScene2D other)
    bool Equals(UnityEngine::PhysicsScene2D other);
  }; // UnityEngine.PhysicsScene2D
  #pragma pack(pop)
  static check_size<sizeof(PhysicsScene2D), 0 + sizeof(int)> __UnityEngine_PhysicsScene2DSizeCheck;
  static_assert(sizeof(PhysicsScene2D) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
