// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRTrackersRecorder
  class VRTrackersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::VRTrackersRecorder::RecordMode
    struct RecordMode;
    // Nested type: GlobalNamespace::VRTrackersRecorder::Keyframe
    class Keyframe;
    // Autogenerated type: VRTrackersRecorder/RecordMode
    struct RecordMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: RecordMode
      constexpr RecordMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VRTrackersRecorder/RecordMode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRTrackersRecorder/RecordMode Record
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Record();
      // Set static field: static public VRTrackersRecorder/RecordMode Record
      static void _set_Record(GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRTrackersRecorder/RecordMode Playback
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Playback();
      // Set static field: static public VRTrackersRecorder/RecordMode Playback
      static void _set_Playback(GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRTrackersRecorder/RecordMode Off
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Off();
      // Set static field: static public VRTrackersRecorder/RecordMode Off
      static void _set_Off(GlobalNamespace::VRTrackersRecorder::RecordMode value);
    }; // VRTrackersRecorder/RecordMode
    // private FloatSO _songTime
    // Offset: 0x18
    GlobalNamespace::FloatSO* songTime;
    // private System.String _saveFilename
    // Offset: 0x20
    ::Il2CppString* saveFilename;
    // private VRTrackersRecorder/RecordMode _mode
    // Offset: 0x28
    GlobalNamespace::VRTrackersRecorder::RecordMode mode;
    // private UnityEngine.Transform _originTransform
    // Offset: 0x30
    UnityEngine::Transform* originTransform;
    // private UnityEngine.Transform[] _playbackTransforms
    // Offset: 0x38
    ::Array<UnityEngine::Transform*>* playbackTransforms;
    // private System.Collections.Generic.List`1<VRTrackersRecorder/Keyframe> _keyframes
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::VRTrackersRecorder::Keyframe*>* keyframes;
    // private System.Int32 _keyframeIndex
    // Offset: 0x48
    int keyframeIndex;
    // private SteamVR_Events/Action _newPosesAction
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* newPosesAction;
    // private UnityEngine.Vector3 _loadedOriginPos
    // Offset: 0x58
    UnityEngine::Vector3 loadedOriginPos;
    // private UnityEngine.Quaternion _loadedOriginRot
    // Offset: 0x64
    UnityEngine::Quaternion loadedOriginRot;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x19757E8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1975F00
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x197626C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1976290
    void OnDisable();
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x19762B4
    void OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses);
    // protected System.Void Update()
    // Offset: 0x1976534
    void Update();
    // private System.Void Save()
    // Offset: 0x1975F10
    void Save();
    // private System.Void Load()
    // Offset: 0x19759B4
    void Load();
    // public System.Void .ctor()
    // Offset: 0x1976998
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRTrackersRecorder* New_ctor();
  }; // VRTrackersRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder*, "", "VRTrackersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::RecordMode, "", "VRTrackersRecorder/RecordMode");
#pragma pack(pop)
