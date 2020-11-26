// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Space
  struct Space;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Transform
  class Transform : public UnityEngine::Component/*, public System::Collections::IEnumerable*/ {
    public:
    // Nested type: UnityEngine::Transform::Enumerator
    class Enumerator;
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x16C6B20
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x16C6BD0
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_localPosition()
    // Offset: 0x16C6C78
    UnityEngine::Vector3 get_localPosition();
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x16C6D28
    void set_localPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0x16C6DD0
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0x16C6E5C
    void set_eulerAngles(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_localEulerAngles()
    // Offset: 0x16C6F48
    UnityEngine::Vector3 get_localEulerAngles();
    // public System.Void set_localEulerAngles(UnityEngine.Vector3 value)
    // Offset: 0x16C6FD4
    void set_localEulerAngles(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_right()
    // Offset: 0x16C70C0
    UnityEngine::Vector3 get_right();
    // public UnityEngine.Vector3 get_up()
    // Offset: 0x16C7214
    UnityEngine::Vector3 get_up();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x16C7368
    UnityEngine::Vector3 get_forward();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x16C6E00
    UnityEngine::Quaternion get_rotation();
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x16C6EF0
    void set_rotation(UnityEngine::Quaternion value);
    // public UnityEngine.Quaternion get_localRotation()
    // Offset: 0x16C6F78
    UnityEngine::Quaternion get_localRotation();
    // public System.Void set_localRotation(UnityEngine.Quaternion value)
    // Offset: 0x16C7068
    void set_localRotation(UnityEngine::Quaternion value);
    // public UnityEngine.Vector3 get_localScale()
    // Offset: 0x16C75FC
    UnityEngine::Vector3 get_localScale();
    // public System.Void set_localScale(UnityEngine.Vector3 value)
    // Offset: 0x16C76AC
    void set_localScale(UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_parent()
    // Offset: 0x16C7754
    UnityEngine::Transform* get_parent();
    // public System.Void set_parent(UnityEngine.Transform value)
    // Offset: 0x16C77D4
    void set_parent(UnityEngine::Transform* value);
    // UnityEngine.Transform get_parentInternal()
    // Offset: 0x16C7794
    UnityEngine::Transform* get_parentInternal();
    // System.Void set_parentInternal(UnityEngine.Transform value)
    // Offset: 0x16C78A0
    void set_parentInternal(UnityEngine::Transform* value);
    // private UnityEngine.Transform GetParent()
    // Offset: 0x16C78F4
    UnityEngine::Transform* GetParent();
    // public System.Void SetParent(UnityEngine.Transform p)
    // Offset: 0x16C7934
    void SetParent(UnityEngine::Transform* p);
    // public System.Void SetParent(UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0x16C7988
    void SetParent(UnityEngine::Transform* parent, bool worldPositionStays);
    // public UnityEngine.Matrix4x4 get_worldToLocalMatrix()
    // Offset: 0x16C79E0
    UnityEngine::Matrix4x4 get_worldToLocalMatrix();
    // public UnityEngine.Matrix4x4 get_localToWorldMatrix()
    // Offset: 0x16C7AA8
    UnityEngine::Matrix4x4 get_localToWorldMatrix();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x16C7B70
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Space relativeTo)
    // Offset: 0x16C7C2C
    void Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo);
    // public System.Void Translate(UnityEngine.Vector3 translation)
    // Offset: 0x16C7DB0
    void Translate(UnityEngine::Vector3 translation);
    // public System.Void Rotate(UnityEngine.Vector3 eulers, UnityEngine.Space relativeTo)
    // Offset: 0x16C7DB8
    void Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo);
    // public System.Void Rotate(UnityEngine.Vector3 eulers)
    // Offset: 0x16C7FD4
    void Rotate(UnityEngine::Vector3 eulers);
    // System.Void RotateAroundInternal(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x16C7FDC
    void RotateAroundInternal(UnityEngine::Vector3 axis, float angle);
    // public System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle, UnityEngine.Space relativeTo)
    // Offset: 0x16C80A4
    void Rotate(UnityEngine::Vector3 axis, float angle, UnityEngine::Space relativeTo);
    // public System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x16C813C
    void Rotate(UnityEngine::Vector3 axis, float angle);
    // public System.Void LookAt(UnityEngine.Transform target, UnityEngine.Vector3 worldUp)
    // Offset: 0x16C8144
    void LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp);
    // public System.Void LookAt(UnityEngine.Transform target)
    // Offset: 0x16C8218
    void LookAt(UnityEngine::Transform* target);
    // public System.Void LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
    // Offset: 0x16C8214
    void LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
    // public System.Void LookAt(UnityEngine.Vector3 worldPosition)
    // Offset: 0x16C837C
    void LookAt(UnityEngine::Vector3 worldPosition);
    // private System.Void Internal_LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
    // Offset: 0x16C8318
    void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
    // public UnityEngine.Vector3 TransformDirection(UnityEngine.Vector3 direction)
    // Offset: 0x16C7D44
    UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 InverseTransformDirection(UnityEngine.Vector3 direction)
    // Offset: 0x16C84C8
    UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 TransformVector(UnityEngine.Vector3 vector)
    // Offset: 0x16C858C
    UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector);
    // public UnityEngine.Vector3 InverseTransformVector(UnityEngine.Vector3 vector)
    // Offset: 0x16C8650
    UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector);
    // public UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 position)
    // Offset: 0x16C8714
    UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position);
    // public UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 position)
    // Offset: 0x16C87D8
    UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position);
    // public System.Int32 get_childCount()
    // Offset: 0x16C889C
    int get_childCount();
    // public System.Void SetAsFirstSibling()
    // Offset: 0x16C88DC
    void SetAsFirstSibling();
    // public System.Void SetAsLastSibling()
    // Offset: 0x16C891C
    void SetAsLastSibling();
    // public System.Void SetSiblingIndex(System.Int32 index)
    // Offset: 0x16C895C
    void SetSiblingIndex(int index);
    // public System.Int32 GetSiblingIndex()
    // Offset: 0x16C89AC
    int GetSiblingIndex();
    // static private UnityEngine.Transform FindRelativeTransformWithPath(UnityEngine.Transform transform, System.String path, System.Boolean isActiveOnly)
    // Offset: 0x16C89EC
    static UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, ::Il2CppString* path, bool isActiveOnly);
    // public UnityEngine.Transform Find(System.String n)
    // Offset: 0x16C8A44
    UnityEngine::Transform* Find(::Il2CppString* n);
    // public UnityEngine.Vector3 get_lossyScale()
    // Offset: 0x16C8AFC
    UnityEngine::Vector3 get_lossyScale();
    // public System.Boolean IsChildOf(UnityEngine.Transform parent)
    // Offset: 0x16C8BAC
    bool IsChildOf(UnityEngine::Transform* parent);
    // public System.Boolean get_hasChanged()
    // Offset: 0x16C8BFC
    bool get_hasChanged();
    // public System.Void set_hasChanged(System.Boolean value)
    // Offset: 0x16C8C3C
    void set_hasChanged(bool value);
    // public UnityEngine.Transform GetChild(System.Int32 index)
    // Offset: 0x16C8D40
    UnityEngine::Transform* GetChild(int index);
    // private System.Void get_position_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x16C6B80
    void get_position_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x16C6C28
    void set_position_Injected(UnityEngine::Vector3& value);
    // private System.Void get_localPosition_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x16C6CD8
    void get_localPosition_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_localPosition_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x16C6D80
    void set_localPosition_Injected(UnityEngine::Vector3& value);
    // private System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x16C74BC
    void get_rotation_Injected(UnityEngine::Quaternion& ret);
    // private System.Void set_rotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x16C750C
    void set_rotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void get_localRotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x16C755C
    void get_localRotation_Injected(UnityEngine::Quaternion& ret);
    // private System.Void set_localRotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x16C75AC
    void set_localRotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void get_localScale_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x16C765C
    void get_localScale_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_localScale_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x16C7704
    void set_localScale_Injected(UnityEngine::Vector3& value);
    // private System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x16C7A58
    void get_worldToLocalMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x16C7B20
    void get_localToWorldMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void SetPositionAndRotation_Injected(ref UnityEngine.Vector3 position, ref UnityEngine.Quaternion rotation)
    // Offset: 0x16C7BD4
    void SetPositionAndRotation_Injected(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation);
    // private System.Void RotateAroundInternal_Injected(ref UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x16C8044
    void RotateAroundInternal_Injected(UnityEngine::Vector3& axis, float angle);
    // private System.Void Internal_LookAt_Injected(ref UnityEngine.Vector3 worldPosition, ref UnityEngine.Vector3 worldUp)
    // Offset: 0x16C8418
    void Internal_LookAt_Injected(UnityEngine::Vector3& worldPosition, UnityEngine::Vector3& worldUp);
    // private System.Void TransformDirection_Injected(ref UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
    // Offset: 0x16C8470
    void TransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformDirection_Injected(ref UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
    // Offset: 0x16C8534
    void InverseTransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
    // private System.Void TransformVector_Injected(ref UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
    // Offset: 0x16C85F8
    void TransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformVector_Injected(ref UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
    // Offset: 0x16C86BC
    void InverseTransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
    // private System.Void TransformPoint_Injected(ref UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
    // Offset: 0x16C8780
    void TransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformPoint_Injected(ref UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
    // Offset: 0x16C8844
    void InverseTransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
    // private System.Void get_lossyScale_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x16C8B5C
    void get_lossyScale_Injected(UnityEngine::Vector3& ret);
    // protected System.Void .ctor()
    // Offset: 0x16C6B18
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Transform* New_ctor();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x16C8C8C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Transform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Transform*, "UnityEngine", "Transform");
#pragma pack(pop)
