// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRRaycaster
#include "GlobalNamespace/OVRRaycaster.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRRaycaster/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CF5D48
  class OVRRaycaster::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly OVRRaycaster/<>c <>9
    static GlobalNamespace::OVRRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly OVRRaycaster/<>c <>9
    static void _set_$$9(GlobalNamespace::OVRRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_$$9__16_0();
    // Set static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static void _set_$$9__16_0(System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // static private System.Void .cctor()
    // Offset: 0x1533260
    static void _cctor();
    // System.Int32 <GraphicRaycast>b__16_0(OVRRaycaster/RaycastHit g1, OVRRaycaster/RaycastHit g2)
    // Offset: 0x15332D0
    int $GraphicRaycast$b__16_0(GlobalNamespace::OVRRaycaster::RaycastHit g1, GlobalNamespace::OVRRaycaster::RaycastHit g2);
    // public System.Void .ctor()
    // Offset: 0x15332C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRRaycaster::$$c*, creationType>()));
    }
  }; // OVRRaycaster/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::$$c*, "", "OVRRaycaster/<>c");
