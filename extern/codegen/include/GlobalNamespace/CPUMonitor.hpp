// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RollingAverage
  class RollingAverage;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Process
  class Process;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CPUMonitor
  // [] Offset: FFFFFFFF
  class CPUMonitor : public ::Il2CppObject {
    public:
    // private readonly RollingAverage _utilization
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::RollingAverage* utilization;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RollingAverage*) == 0x8);
    // private readonly System.Diagnostics.Process _currentProcess
    // Size: 0x8
    // Offset: 0x18
    System::Diagnostics::Process* currentProcess;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Process*) == 0x8);
    // private readonly System.Int32 _processorCount
    // Size: 0x4
    // Offset: 0x20
    int processorCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: processorCount and: lastSampleTime
    char __padding2[0x4] = {};
    // private System.Int64 _lastSampleTime
    // Size: 0x8
    // Offset: 0x28
    int64_t lastSampleTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _lastSampleValue
    // Size: 0x8
    // Offset: 0x30
    int64_t lastSampleValue;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: CPUMonitor
    CPUMonitor(GlobalNamespace::RollingAverage* utilization_ = {}, System::Diagnostics::Process* currentProcess_ = {}, int processorCount_ = {}, int64_t lastSampleTime_ = {}, int64_t lastSampleValue_ = {}) noexcept : utilization{utilization_}, currentProcess{currentProcess_}, processorCount{processorCount_}, lastSampleTime{lastSampleTime_}, lastSampleValue{lastSampleValue_} {}
    // public System.Void PollUpdate()
    // Offset: 0x11CB0A4
    void PollUpdate();
    // public System.Single get_utilization()
    // Offset: 0x11CB1AC
    float get_utilization();
    // public System.Void .ctor()
    // Offset: 0x11CB1D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CPUMonitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CPUMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CPUMonitor*, creationType>()));
    }
  }; // CPUMonitor
  #pragma pack(pop)
  static check_size<sizeof(CPUMonitor), 48 + sizeof(int64_t)> __GlobalNamespace_CPUMonitorSizeCheck;
  static_assert(sizeof(CPUMonitor) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CPUMonitor*, "", "CPUMonitor");
