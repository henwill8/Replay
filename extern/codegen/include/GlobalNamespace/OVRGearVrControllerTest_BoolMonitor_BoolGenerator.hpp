// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRGearVrControllerTest/BoolMonitor
#include "GlobalNamespace/OVRGearVrControllerTest_BoolMonitor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRGearVrControllerTest/BoolMonitor/BoolGenerator
  // [] Offset: FFFFFFFF
  class OVRGearVrControllerTest::BoolMonitor::BoolGenerator : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: BoolGenerator
    BoolGenerator() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x139EA10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGearVrControllerTest::BoolMonitor::BoolGenerator* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGearVrControllerTest::BoolMonitor::BoolGenerator*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x139E738
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x139EA24
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x139EA50
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVRGearVrControllerTest/BoolMonitor/BoolGenerator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator*, "", "OVRGearVrControllerTest/BoolMonitor/BoolGenerator");
