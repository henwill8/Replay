// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableBehaviour
  class IPlayableBehaviour;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayState
  struct PlayState;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableTraversalMode
  struct PlayableTraversalMode;
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableHandle
  struct PlayableHandle : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Playables::PlayableHandle>*/ {
    public:
    // System.IntPtr m_Handle
    // Offset: 0x0
    System::IntPtr m_Handle;
    // System.UInt32 m_Version
    // Offset: 0x8
    uint m_Version;
    // Creating value type constructor for type: PlayableHandle
    constexpr PlayableHandle(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Playables::PlayableHandle>
    operator System::IEquatable_1<UnityEngine::Playables::PlayableHandle>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Playables::PlayableHandle>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Playables.PlayableHandle m_Null
    static UnityEngine::Playables::PlayableHandle _get_m_Null();
    // Set static field: static private readonly UnityEngine.Playables.PlayableHandle m_Null
    static void _set_m_Null(UnityEngine::Playables::PlayableHandle value);
    // T GetObject()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetObject() {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableBehaviour, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(*this, "GetObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // System.Boolean IsPlayableOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsPlayableOfType() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(*this, "IsPlayableOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // static public UnityEngine.Playables.PlayableHandle get_Null()
    // Offset: 0x1731334
    static UnityEngine::Playables::PlayableHandle get_Null();
    // UnityEngine.Playables.Playable GetInput(System.Int32 inputPort)
    // Offset: 0xCA71E8
    UnityEngine::Playables::Playable GetInput(int inputPort);
    // System.Boolean SetInputWeight(System.Int32 inputIndex, System.Single weight)
    // Offset: 0xCA71F0
    bool SetInputWeight(int inputIndex, float weight);
    // System.Single GetInputWeight(System.Int32 inputIndex)
    // Offset: 0xCA723C
    float GetInputWeight(int inputIndex);
    // static System.Boolean CompareVersion(UnityEngine.Playables.PlayableHandle lhs, UnityEngine.Playables.PlayableHandle rhs)
    // Offset: 0x1732300
    static bool CompareVersion(UnityEngine::Playables::PlayableHandle lhs, UnityEngine::Playables::PlayableHandle rhs);
    // System.Boolean CheckInputBounds(System.Int32 inputIndex)
    // Offset: 0xCA72BC
    bool CheckInputBounds(int inputIndex);
    // System.Boolean CheckInputBounds(System.Int32 inputIndex, System.Boolean acceptAny)
    // Offset: 0xCA72DC
    bool CheckInputBounds(int inputIndex, bool acceptAny);
    // System.Boolean IsValid()
    // Offset: 0xCA72FC
    bool IsValid();
    // System.Type GetPlayableType()
    // Offset: 0xCA7304
    System::Type* GetPlayableType();
    // System.Void SetScriptInstance(System.Object scriptInstance)
    // Offset: 0xCA730C
    void SetScriptInstance(::Il2CppObject* scriptInstance);
    // UnityEngine.Playables.PlayState GetPlayState()
    // Offset: 0xCA7314
    UnityEngine::Playables::PlayState GetPlayState();
    // System.Void Play()
    // Offset: 0xCA731C
    void Play();
    // System.Void Pause()
    // Offset: 0xCA7324
    void Pause();
    // System.Void SetSpeed(System.Double value)
    // Offset: 0xCA732C
    void SetSpeed(double value);
    // System.Double GetTime()
    // Offset: 0xCA7334
    double GetTime();
    // System.Void SetTime(System.Double value)
    // Offset: 0xCA733C
    void SetTime(double value);
    // System.Boolean IsDone()
    // Offset: 0xCA7344
    bool IsDone();
    // System.Double GetDuration()
    // Offset: 0xCA734C
    double GetDuration();
    // System.Void SetDuration(System.Double value)
    // Offset: 0xCA7354
    void SetDuration(double value);
    // System.Void SetPropagateSetTime(System.Boolean value)
    // Offset: 0xCA735C
    void SetPropagateSetTime(bool value);
    // UnityEngine.Playables.PlayableGraph GetGraph()
    // Offset: 0xCA7368
    UnityEngine::Playables::PlayableGraph GetGraph();
    // System.Int32 GetInputCount()
    // Offset: 0xCA7370
    int GetInputCount();
    // System.Void SetInputCount(System.Int32 value)
    // Offset: 0xCA7378
    void SetInputCount(int value);
    // System.Void SetInputWeight(UnityEngine.Playables.PlayableHandle input, System.Single weight)
    // Offset: 0xCA7380
    void SetInputWeight(UnityEngine::Playables::PlayableHandle input, float weight);
    // System.Double GetPreviousTime()
    // Offset: 0xCA7388
    double GetPreviousTime();
    // System.Void SetTraversalMode(UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0xCA7390
    void SetTraversalMode(UnityEngine::Playables::PlayableTraversalMode mode);
    // UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode()
    // Offset: 0xCA7398
    UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode();
    // System.Void SetTimeWrapMode(UnityEngine.Playables.DirectorWrapMode mode)
    // Offset: 0xCA73A0
    void SetTimeWrapMode(UnityEngine::Playables::DirectorWrapMode mode);
    // private System.Object GetScriptInstance()
    // Offset: 0xCA73A8
    ::Il2CppObject* GetScriptInstance();
    // private UnityEngine.Playables.PlayableHandle GetInputHandle(System.Int32 index)
    // Offset: 0xCA73B0
    UnityEngine::Playables::PlayableHandle GetInputHandle(int index);
    // private System.Void SetInputWeightFromIndex(System.Int32 index, System.Single weight)
    // Offset: 0xCA73B8
    void SetInputWeightFromIndex(int index, float weight);
    // private System.Single GetInputWeightFromIndex(System.Int32 index)
    // Offset: 0xCA73C0
    float GetInputWeightFromIndex(int index);
    // static private System.Void .cctor()
    // Offset: 0x1733974
    static void _cctor();
    // static private System.Boolean IsValid_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x17327B4
    static bool IsValid_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Type GetPlayableType_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x17327F4
    static System::Type* GetPlayableType_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetScriptInstance_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Object scriptInstance)
    // Offset: 0x17328C8
    static void SetScriptInstance_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, ::Il2CppObject* scriptInstance);
    // static private UnityEngine.Playables.PlayState GetPlayState_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x173299C
    static UnityEngine::Playables::PlayState GetPlayState_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void Play_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1732A60
    static void Play_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void Pause_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1732B24
    static void Pause_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetSpeed_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x1732BF8
    static void SetSpeed_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Double GetTime_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1732CCC
    static double GetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTime_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x1732DA0
    static void SetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Boolean IsDone_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1732E74
    static bool IsDone_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Double GetDuration_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1732F38
    static double GetDuration_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetDuration_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x173300C
    static void SetDuration_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Void SetPropagateSetTime_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Boolean value)
    // Offset: 0x17330F0
    static void SetPropagateSetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, bool value);
    // static private System.Void GetGraph_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, out UnityEngine.Playables.PlayableGraph ret)
    // Offset: 0x17331DC
    static void GetGraph_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableGraph& ret);
    // static private System.Int32 GetInputCount_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x173322C
    static int GetInputCount_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetInputCount_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 value)
    // Offset: 0x1733300
    static void SetInputCount_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int value);
    // static private System.Void SetInputWeight_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, ref UnityEngine.Playables.PlayableHandle input, System.Single weight)
    // Offset: 0x17333F8
    static void SetInputWeight_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableHandle& input, float weight);
    // static private System.Double GetPreviousTime_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x17334DC
    static double GetPreviousTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTraversalMode_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0x17335B0
    static void SetTraversalMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableTraversalMode mode);
    // static private UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1733684
    static UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTimeWrapMode_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.DirectorWrapMode mode)
    // Offset: 0x1733758
    static void SetTimeWrapMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::DirectorWrapMode mode);
    // static private System.Object GetScriptInstance_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x173382C
    static ::Il2CppObject* GetScriptInstance_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void GetInputHandle_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x173386C
    static void GetInputHandle_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Void SetInputWeightFromIndex_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index, System.Single weight)
    // Offset: 0x17338C4
    static void SetInputWeightFromIndex_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index, float weight);
    // static private System.Single GetInputWeightFromIndex_Injected(ref UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index)
    // Offset: 0x1733924
    static float GetInputWeightFromIndex_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index);
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0xCA7270
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public System.Boolean Equals(UnityEngine.Playables.PlayableHandle other)
    // Offset: 0xCA7278
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Playables.PlayableHandle other)
    bool Equals(UnityEngine::Playables::PlayableHandle other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA7280
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Playables.PlayableHandle
  // static public System.Boolean op_Equality(UnityEngine.Playables.PlayableHandle x, UnityEngine.Playables.PlayableHandle y)
  // Offset: 0x1731228
  bool operator ==(const UnityEngine::Playables::PlayableHandle& x, const UnityEngine::Playables::PlayableHandle& y);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
#pragma pack(pop)
