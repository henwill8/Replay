// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
  // Skipping declaration: SkeletonType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeleton
  // [] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: CF59D8
  class OVRSkeleton : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    class IOVRSkeletonDataProvider;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonPoseData
    struct SkeletonPoseData;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonType
    struct SkeletonType;
    // Nested type: GlobalNamespace::OVRSkeleton::BoneId
    struct BoneId;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRSkeleton/SkeletonType
    // [] Offset: FFFFFFFF
    struct SkeletonType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SkeletonType
      constexpr SkeletonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeleton/SkeletonType None
      static constexpr const int None = -1;
      // Get static field: static public OVRSkeleton/SkeletonType None
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_None();
      // Set static field: static public OVRSkeleton/SkeletonType None
      static void _set_None(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRSkeleton/SkeletonType HandLeft
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandLeft();
      // Set static field: static public OVRSkeleton/SkeletonType HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRSkeleton/SkeletonType HandRight
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandRight();
      // Set static field: static public OVRSkeleton/SkeletonType HandRight
      static void _set_HandRight(GlobalNamespace::OVRSkeleton::SkeletonType value);
    }; // OVRSkeleton/SkeletonType
    #pragma pack(pop)
    static check_size<sizeof(OVRSkeleton::SkeletonType), 0 + sizeof(int)> __GlobalNamespace_OVRSkeleton_SkeletonTypeSizeCheck;
    static_assert(sizeof(OVRSkeleton::SkeletonType) == 0x4);
    // private OVRSkeleton/SkeletonType _skeletonType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRSkeleton::SkeletonType skeletonType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton::SkeletonType) == 0x4);
    // Padding between fields: skeletonType and: dataProvider
    char __padding0[0x4] = {};
    // private OVRSkeleton/IOVRSkeletonDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*) == 0x8);
    // private System.Boolean _updateRootPose
    // Size: 0x1
    // Offset: 0x28
    bool updateRootPose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _updateRootScale
    // Size: 0x1
    // Offset: 0x29
    bool updateRootScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enablePhysicsCapsules
    // Size: 0x1
    // Offset: 0x2A
    bool enablePhysicsCapsules;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enablePhysicsCapsules and: bonesGO
    char __padding4[0x5] = {};
    // private UnityEngine.GameObject _bonesGO
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* bonesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _bindPosesGO
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* bindPosesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _capsulesGO
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* capsulesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // protected System.Collections.Generic.List`1<OVRBone> _bones
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bones;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBone> _bindPoses
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bindPoses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBoneCapsule> _capsules
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>* capsules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // private readonly UnityEngine.Quaternion wristFixupRotation
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Quaternion wristFixupRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xCF8CD8
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x70
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF8CE8
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x71
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF8CF8
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x72
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: Bones
    char __padding14[0x5] = {};
    // [CompilerGeneratedAttribute] Offset: 0xCF8D08
    // private System.Collections.Generic.IList`1<OVRBone> <Bones>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* Bones;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF8D18
    // private System.Collections.Generic.IList`1<OVRBone> <BindPoses>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* BindPoses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF8D28
    // private System.Collections.Generic.IList`1<OVRBoneCapsule> <Capsules>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* Capsules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // Creating value type constructor for type: OVRSkeleton
    OVRSkeleton(GlobalNamespace::OVRSkeleton::SkeletonType skeletonType_ = {}, GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider_ = {}, bool updateRootPose_ = {}, bool updateRootScale_ = {}, bool enablePhysicsCapsules_ = {}, UnityEngine::GameObject* bonesGO_ = {}, UnityEngine::GameObject* bindPosesGO_ = {}, UnityEngine::GameObject* capsulesGO_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bones_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bindPoses_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>* capsules_ = {}, UnityEngine::Quaternion wristFixupRotation_ = {}, bool IsInitialized_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* Bones_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* BindPoses_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* Capsules_ = {}) noexcept : skeletonType{skeletonType_}, dataProvider{dataProvider_}, updateRootPose{updateRootPose_}, updateRootScale{updateRootScale_}, enablePhysicsCapsules{enablePhysicsCapsules_}, bonesGO{bonesGO_}, bindPosesGO{bindPosesGO_}, capsulesGO{capsulesGO_}, bones{bones_}, bindPoses{bindPoses_}, capsules{capsules_}, wristFixupRotation{wristFixupRotation_}, IsInitialized{IsInitialized_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, Bones{Bones_}, BindPoses{BindPoses_}, Capsules{Capsules_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0x153EC70
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x153EC78
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x153EC84
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x153EC8C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x153EC98
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x153ECA0
    void set_IsDataHighConfidence(bool value);
    // public System.Collections.Generic.IList`1<OVRBone> get_Bones()
    // Offset: 0x153ECAC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_Bones();
    // protected System.Void set_Bones(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x153ECB4
    void set_Bones(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBone> get_BindPoses()
    // Offset: 0x153ECBC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_BindPoses();
    // private System.Void set_BindPoses(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x153ECC4
    void set_BindPoses(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBoneCapsule> get_Capsules()
    // Offset: 0x153ECCC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* get_Capsules();
    // private System.Void set_Capsules(System.Collections.Generic.IList`1<OVRBoneCapsule> value)
    // Offset: 0x153ECD4
    void set_Capsules(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* value);
    // public OVRSkeleton/SkeletonType GetSkeletonType()
    // Offset: 0x153ECDC
    GlobalNamespace::OVRSkeleton::SkeletonType GetSkeletonType();
    // private System.Void Awake()
    // Offset: 0x153ECE4
    void Awake();
    // private System.Void Start()
    // Offset: 0x153EE6C
    void Start();
    // private System.Void Initialize()
    // Offset: 0x153EE80
    void Initialize();
    // protected System.Void InitializeBones(OVRPlugin/Skeleton skeleton)
    // Offset: 0x153FD38
    void InitializeBones(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void InitializeBindPose(OVRPlugin/Skeleton skeleton)
    // Offset: 0x153EF60
    void InitializeBindPose(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void InitializeCapsules(OVRPlugin/Skeleton skeleton)
    // Offset: 0x153F4AC
    void InitializeCapsules(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // private System.Void Update()
    // Offset: 0x154025C
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1540628
    void FixedUpdate();
    // public OVRSkeleton/BoneId GetCurrentStartBoneId()
    // Offset: 0x15408CC
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentStartBoneId();
    // public OVRSkeleton/BoneId GetCurrentEndBoneId()
    // Offset: 0x15408DC
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentEndBoneId();
    // private OVRSkeleton/BoneId GetCurrentMaxSkinnableBoneId()
    // Offset: 0x15408F0
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentMaxSkinnableBoneId();
    // public System.Int32 GetCurrentNumBones()
    // Offset: 0x1540904
    int GetCurrentNumBones();
    // public System.Int32 GetCurrentNumSkinnableBones()
    // Offset: 0x1540918
    int GetCurrentNumSkinnableBones();
    // public System.Void .ctor()
    // Offset: 0x154092C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeleton*, creationType>()));
    }
  }; // OVRSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton), 136 + sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>*)> __GlobalNamespace_OVRSkeletonSizeCheck;
  static_assert(sizeof(OVRSkeleton) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonType, "", "OVRSkeleton/SkeletonType");
