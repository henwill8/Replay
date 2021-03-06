// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogSO
  // [] Offset: FFFFFFFF
  class BloomFogSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Boolean _bloomFogEnabled
    // Size: 0x1
    // Offset: 0x18
    bool bloomFogEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bloomFogEnabled and: transition
    char __padding0[0x3] = {};
    // private System.Single _transition
    // Size: 0x4
    // Offset: 0x1C
    float transition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BloomFogEnvironmentParams _fog0Params
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fog0Params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // private BloomFogEnvironmentParams _fog1Params
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BloomFogEnvironmentParams* fog1Params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // Creating value type constructor for type: BloomFogSO
    BloomFogSO(bool bloomFogEnabled_ = {}, float transition_ = {}, GlobalNamespace::BloomFogEnvironmentParams* fog0Params_ = {}, GlobalNamespace::BloomFogEnvironmentParams* fog1Params_ = {}) noexcept : bloomFogEnabled{bloomFogEnabled_}, transition{transition_}, fog0Params{fog0Params_}, fog1Params{fog1Params_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kBloomFogEnabledKeyword
    static constexpr const char* kBloomFogEnabledKeyword = "ENABLE_BLOOM_FOG";
    // Get static field: static private System.String kBloomFogEnabledKeyword
    static ::Il2CppString* _get_kBloomFogEnabledKeyword();
    // Set static field: static private System.String kBloomFogEnabledKeyword
    static void _set_kBloomFogEnabledKeyword(::Il2CppString* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD160C8
    // Get static field: static private readonly System.Int32 _customFogAttenuationID
    static int _get__customFogAttenuationID();
    // Set static field: static private readonly System.Int32 _customFogAttenuationID
    static void _set__customFogAttenuationID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD160D8
    // Get static field: static private readonly System.Int32 _customFogOffsetID
    static int _get__customFogOffsetID();
    // Set static field: static private readonly System.Int32 _customFogOffsetID
    static void _set__customFogOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD160E8
    // Get static field: static private readonly System.Int32 _customFogHeightFogStartYID
    static int _get__customFogHeightFogStartYID();
    // Set static field: static private readonly System.Int32 _customFogHeightFogStartYID
    static void _set__customFogHeightFogStartYID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD160F8
    // Get static field: static private readonly System.Int32 _customFogHeightFogHeightID
    static int _get__customFogHeightFogHeightID();
    // Set static field: static private readonly System.Int32 _customFogHeightFogHeightID
    static void _set__customFogHeightFogHeightID(int value);
    // public System.Void set_transition(System.Single value)
    // Offset: 0x1D96DDC
    void set_transition(float value);
    // public System.Single get_transition()
    // Offset: 0x1D971BC
    float get_transition();
    // public System.Void set_bloomFogEnabled(System.Boolean value)
    // Offset: 0x1D96EAC
    void set_bloomFogEnabled(bool value);
    // public System.Boolean get_bloomFogEnabled()
    // Offset: 0x1D971C4
    bool get_bloomFogEnabled();
    // public System.Void Setup(BloomFogEnvironmentParams fog0Params, BloomFogEnvironmentParams fog1Params)
    // Offset: 0x1D96DF4
    void Setup(GlobalNamespace::BloomFogEnvironmentParams* fog0Params, GlobalNamespace::BloomFogEnvironmentParams* fog1Params);
    // public System.Void UpdateShaderParams()
    // Offset: 0x1D96F34
    void UpdateShaderParams();
    // static private System.Void SetParams(System.Single attenuation, System.Single offset, System.Single heightFogStartY, System.Single heightFogHeight)
    // Offset: 0x1D971F4
    static void SetParams(float attenuation, float offset, float heightFogStartY, float heightFogHeight);
    // protected override System.Void OnEnable()
    // Offset: 0x1D971CC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1D972CC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFogSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D972DC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomFogSO
  #pragma pack(pop)
  static check_size<sizeof(BloomFogSO), 40 + sizeof(GlobalNamespace::BloomFogEnvironmentParams*)> __GlobalNamespace_BloomFogSOSizeCheck;
  static_assert(sizeof(BloomFogSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogSO*, "", "BloomFogSO");
