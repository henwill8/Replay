// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ContactFilter2D
  struct ContactFilter2D : public System::ValueType {
    public:
    // public System.Boolean useTriggers
    // Offset: 0x0
    bool useTriggers;
    // public System.Boolean useLayerMask
    // Offset: 0x1
    bool useLayerMask;
    // public System.Boolean useDepth
    // Offset: 0x2
    bool useDepth;
    // public System.Boolean useOutsideDepth
    // Offset: 0x3
    bool useOutsideDepth;
    // public System.Boolean useNormalAngle
    // Offset: 0x4
    bool useNormalAngle;
    // public System.Boolean useOutsideNormalAngle
    // Offset: 0x5
    bool useOutsideNormalAngle;
    // public UnityEngine.LayerMask layerMask
    // Offset: 0x8
    UnityEngine::LayerMask layerMask;
    // public System.Single minDepth
    // Offset: 0xC
    float minDepth;
    // public System.Single maxDepth
    // Offset: 0x10
    float maxDepth;
    // public System.Single minNormalAngle
    // Offset: 0x14
    float minNormalAngle;
    // public System.Single maxNormalAngle
    // Offset: 0x18
    float maxNormalAngle;
    // Creating value type constructor for type: ContactFilter2D
    constexpr ContactFilter2D(bool useTriggers_ = {}, bool useLayerMask_ = {}, bool useDepth_ = {}, bool useOutsideDepth_ = {}, bool useNormalAngle_ = {}, bool useOutsideNormalAngle_ = {}, UnityEngine::LayerMask layerMask_ = {}, float minDepth_ = {}, float maxDepth_ = {}, float minNormalAngle_ = {}, float maxNormalAngle_ = {}) noexcept : useTriggers{useTriggers_}, useLayerMask{useLayerMask_}, useDepth{useDepth_}, useOutsideDepth{useOutsideDepth_}, useNormalAngle{useNormalAngle_}, useOutsideNormalAngle{useOutsideNormalAngle_}, layerMask{layerMask_}, minDepth{minDepth_}, maxDepth{maxDepth_}, minNormalAngle{minNormalAngle_}, maxNormalAngle{maxNormalAngle_} {}
    // private System.Void CheckConsistency()
    // Offset: 0xCB9840
    void CheckConsistency();
    // public System.Void SetLayerMask(UnityEngine.LayerMask layerMask)
    // Offset: 0xCB9880
    void SetLayerMask(UnityEngine::LayerMask layerMask);
    // public System.Void SetDepth(System.Single minDepth, System.Single maxDepth)
    // Offset: 0xCB9890
    void SetDepth(float minDepth, float maxDepth);
    // static UnityEngine.ContactFilter2D CreateLegacyFilter(System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x1A00848
    static UnityEngine::ContactFilter2D CreateLegacyFilter(int layerMask, float minDepth, float maxDepth);
    // static private System.Void CheckConsistency_Injected(ref UnityEngine.ContactFilter2D _unity_self)
    // Offset: 0x1A007AC
    static void CheckConsistency_Injected(UnityEngine::ContactFilter2D& _unity_self);
  }; // UnityEngine.ContactFilter2D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
#pragma pack(pop)
