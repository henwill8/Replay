// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBladeMovementData
#include "GlobalNamespace/IBladeMovementData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: BladeMovementDataElement
#include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTrail
  class SaberTrail;
  // Forward declaring type: TestSaberModulationData
  class TestSaberModulationData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: TrailTester
  // [] Offset: FFFFFFFF
  class TrailTester : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IBladeMovementData*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xD32C4C
    // private UnityEngine.Color _trailColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color trailColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private SaberTrail _saberTrail
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberTrail* saberTrail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTrail*) == 0x8);
    // private UnityEngine.Transform _saberPos
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* saberPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _handPos
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* handPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _topPos
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* topPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _bottomPos
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* bottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TestSaberModulationData _speed
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::TestSaberModulationData* speed;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData*) == 0x8);
    // private TestSaberModulationData _handZPos
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::TestSaberModulationData* handZPos;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData*) == 0x8);
    // private TestSaberModulationData _handYPos
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::TestSaberModulationData* handYPos;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData*) == 0x8);
    // private TestSaberModulationData _handRotation
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::TestSaberModulationData* handRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData*) == 0x8);
    // private TestSaberModulationData _saberRotation
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::TestSaberModulationData* saberRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD32D38
    // private BladeMovementDataElement <lastAddedData>k__BackingField
    // Size: 0x2C
    // Offset: 0x78
    GlobalNamespace::BladeMovementDataElement lastAddedData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BladeMovementDataElement) == 0x2C);
    // [CompilerGeneratedAttribute] Offset: 0xD32D48
    // private BladeMovementDataElement <prevAddedData>k__BackingField
    // Size: 0x2C
    // Offset: 0xA4
    GlobalNamespace::BladeMovementDataElement prevAddedData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BladeMovementDataElement) == 0x2C);
    // Creating value type constructor for type: TrailTester
    TrailTester(UnityEngine::Color trailColor_ = {}, GlobalNamespace::SaberTrail* saberTrail_ = {}, UnityEngine::Transform* saberPos_ = {}, UnityEngine::Transform* handPos_ = {}, UnityEngine::Transform* topPos_ = {}, UnityEngine::Transform* bottomPos_ = {}, GlobalNamespace::TestSaberModulationData* speed_ = {}, GlobalNamespace::TestSaberModulationData* handZPos_ = {}, GlobalNamespace::TestSaberModulationData* handYPos_ = {}, GlobalNamespace::TestSaberModulationData* handRotation_ = {}, GlobalNamespace::TestSaberModulationData* saberRotation_ = {}, GlobalNamespace::BladeMovementDataElement lastAddedData_ = {}, GlobalNamespace::BladeMovementDataElement prevAddedData_ = {}) noexcept : trailColor{trailColor_}, saberTrail{saberTrail_}, saberPos{saberPos_}, handPos{handPos_}, topPos{topPos_}, bottomPos{bottomPos_}, speed{speed_}, handZPos{handZPos_}, handYPos{handYPos_}, handRotation{handRotation_}, saberRotation{saberRotation_}, lastAddedData{lastAddedData_}, prevAddedData{prevAddedData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBladeMovementData
    operator GlobalNamespace::IBladeMovementData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBladeMovementData*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void set_lastAddedData(BladeMovementDataElement value)
    // Offset: 0xF47D10
    void set_lastAddedData(GlobalNamespace::BladeMovementDataElement value);
    // private System.Void set_prevAddedData(BladeMovementDataElement value)
    // Offset: 0xF47D48
    void set_prevAddedData(GlobalNamespace::BladeMovementDataElement value);
    // protected System.Void Awake()
    // Offset: 0xF47D68
    void Awake();
    // protected System.Void Update()
    // Offset: 0xF47D90
    void Update();
    // public System.Single get_bladeSpeed()
    // Offset: 0xF47CF0
    // Implemented from: IBladeMovementData
    // Base method: System.Single IBladeMovementData::get_bladeSpeed()
    float get_bladeSpeed();
    // public BladeMovementDataElement get_lastAddedData()
    // Offset: 0xF47CF8
    // Implemented from: IBladeMovementData
    // Base method: BladeMovementDataElement IBladeMovementData::get_lastAddedData()
    GlobalNamespace::BladeMovementDataElement get_lastAddedData();
    // public BladeMovementDataElement get_prevAddedData()
    // Offset: 0xF47D30
    // Implemented from: IBladeMovementData
    // Base method: BladeMovementDataElement IBladeMovementData::get_prevAddedData()
    GlobalNamespace::BladeMovementDataElement get_prevAddedData();
    // public System.Void .ctor()
    // Offset: 0xF48080
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailTester* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrailTester::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailTester*, creationType>()));
    }
  }; // TrailTester
  #pragma pack(pop)
  static check_size<sizeof(TrailTester), 164 + sizeof(GlobalNamespace::BladeMovementDataElement)> __GlobalNamespace_TrailTesterSizeCheck;
  static_assert(sizeof(TrailTester) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailTester*, "", "TrailTester");
