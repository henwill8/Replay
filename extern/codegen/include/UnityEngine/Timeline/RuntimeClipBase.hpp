// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeElement
#include "UnityEngine/Timeline/RuntimeElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.RuntimeClipBase
  // [] Offset: FFFFFFFF
  class RuntimeClipBase : public UnityEngine::Timeline::RuntimeElement {
    public:
    // Creating value type constructor for type: RuntimeClipBase
    RuntimeClipBase() noexcept {}
    // public System.Double get_start()
    // Offset: 0xFFFFFFFF
    double get_start();
    // public System.Double get_duration()
    // Offset: 0xFFFFFFFF
    double get_duration();
    // public override System.Int64 get_intervalStart()
    // Offset: 0x17358E0
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalStart()
    int64_t get_intervalStart();
    // public override System.Int64 get_intervalEnd()
    // Offset: 0x1735960
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalEnd()
    int64_t get_intervalEnd();
    // protected System.Void .ctor()
    // Offset: 0x1735464
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeClipBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::RuntimeClipBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeClipBase*, creationType>()));
    }
  }; // UnityEngine.Timeline.RuntimeClipBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClipBase*, "UnityEngine.Timeline", "RuntimeClipBase");
