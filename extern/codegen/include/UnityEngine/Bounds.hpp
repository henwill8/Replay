// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Bounds
  struct Bounds : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Bounds>*/ {
    public:
    // private UnityEngine.Vector3 m_Center
    // Offset: 0x0
    UnityEngine::Vector3 m_Center;
    // private UnityEngine.Vector3 m_Extents
    // Offset: 0xC
    UnityEngine::Vector3 m_Extents;
    // Creating value type constructor for type: Bounds
    constexpr Bounds(UnityEngine::Vector3 m_Center_ = {}, UnityEngine::Vector3 m_Extents_ = {}) noexcept : m_Center{m_Center_}, m_Extents{m_Extents_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Bounds>
    operator System::IEquatable_1<UnityEngine::Bounds>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Bounds>*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xCA49D0
    // ABORTED: conflicts with another method.  Bounds(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // public UnityEngine.Vector3 get_center()
    // Offset: 0xCA4A20
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0xCA4A2C
    void set_center(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0xCA4A38
    UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0xCA4A40
    void set_size(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0xCA4A48
    UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0xCA4A54
    void set_extents(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_min()
    // Offset: 0xCA4A60
    UnityEngine::Vector3 get_min();
    // public UnityEngine.Vector3 get_max()
    // Offset: 0xCA4A68
    UnityEngine::Vector3 get_max();
    // public System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0xCA4A70
    void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max);
    // public System.Void Encapsulate(UnityEngine.Vector3 point)
    // Offset: 0xCA4A78
    void Encapsulate(UnityEngine::Vector3 point);
    // public System.Boolean IntersectRay(UnityEngine.Ray ray, out System.Single distance)
    // Offset: 0xCA4A80
    bool IntersectRay(UnityEngine::Ray ray, float& distance);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xCA4B00
    bool Contains(UnityEngine::Vector3 point);
    // static private System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x167EA74
    static bool IntersectRayAABB(UnityEngine::Ray ray, UnityEngine::Bounds bounds, float& dist);
    // static private System.Boolean Contains_Injected(ref UnityEngine.Bounds _unity_self, ref UnityEngine.Vector3 point)
    // Offset: 0x167EC74
    static bool Contains_Injected(UnityEngine::Bounds& _unity_self, UnityEngine::Vector3& point);
    // static private System.Boolean IntersectRayAABB_Injected(ref UnityEngine.Ray ray, ref UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x167ECC4
    static bool IntersectRayAABB_Injected(UnityEngine::Ray& ray, UnityEngine::Bounds& bounds, float& dist);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA49D8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xCA49E0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Bounds other)
    // Offset: 0xCA49E8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Bounds other)
    bool Equals(UnityEngine::Bounds other);
    // public override System.String ToString()
    // Offset: 0xCA4AF8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Bounds
  // static public System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x167E6AC
  bool operator ==(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x167E7C8
  bool operator !=(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bounds, "UnityEngine", "Bounds");
#pragma pack(pop)
