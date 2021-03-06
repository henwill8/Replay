// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: OculusDeeplinkManager
  // [] Offset: FFFFFFFF
  class OculusDeeplinkManager : public ::Il2CppObject/*, public GlobalNamespace::IDeeplinkManager*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD34970
    // private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::Deeplink*>*) == 0x8);
    // private Deeplink _currentDeeplink
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Deeplink* currentDeeplink;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Deeplink*) == 0x8);
    // private System.Boolean _oculusPlatformWasInitialized
    // Size: 0x1
    // Offset: 0x20
    bool oculusPlatformWasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OculusDeeplinkManager
    OculusDeeplinkManager(System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent_ = {}, GlobalNamespace::Deeplink* currentDeeplink_ = {}, bool oculusPlatformWasInitialized_ = {}) noexcept : didReceiveDeeplinkEvent{didReceiveDeeplinkEvent_}, currentDeeplink{currentDeeplink_}, oculusPlatformWasInitialized{oculusPlatformWasInitialized_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDeeplinkManager
    operator GlobalNamespace::IDeeplinkManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDeeplinkManager*>(this);
    }
    // public System.Void Init()
    // Offset: 0x10FC490
    void Init();
    // public System.Void OculusPlatformWasInitialized()
    // Offset: 0x10FC50C
    void OculusPlatformWasInitialized();
    // private System.Void SetLaunchIntentChangedNotificationCallback(Oculus.Platform.Message`1<System.String> message)
    // Offset: 0x10FC5A0
    void SetLaunchIntentChangedNotificationCallback(Oculus::Platform::Message_1<::Il2CppString*>* message);
    // private System.Void ProcessLaunchDetails(Oculus.Platform.Models.LaunchDetails launchDetails)
    // Offset: 0x10FC56C
    void ProcessLaunchDetails(Oculus::Platform::Models::LaunchDetails* launchDetails);
    // private System.Void UpdateDeeplinkMessage(System.String deeplinkMessage, System.UInt64 roomID)
    // Offset: 0x10FC5EC
    void UpdateDeeplinkMessage(::Il2CppString* deeplinkMessage, uint64_t roomID);
    // private System.Boolean IsAtLeastOneFieldPopulated(Deeplink deeplink)
    // Offset: 0x10FC808
    bool IsAtLeastOneFieldPopulated(GlobalNamespace::Deeplink* deeplink);
    // static public System.Void Log(System.String message)
    // Offset: 0x10FC7A0
    static void Log(::Il2CppString* message);
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x10FC340
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x10FC3E4
    // Implemented from: IDeeplinkManager
    // Base method: System.Void IDeeplinkManager::remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public Deeplink get_currentDeeplink()
    // Offset: 0x10FC488
    // Implemented from: IDeeplinkManager
    // Base method: Deeplink IDeeplinkManager::get_currentDeeplink()
    GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void .ctor()
    // Offset: 0x10FC888
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusDeeplinkManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusDeeplinkManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusDeeplinkManager*, creationType>()));
    }
  }; // OculusDeeplinkManager
  #pragma pack(pop)
  static check_size<sizeof(OculusDeeplinkManager), 32 + sizeof(bool)> __GlobalNamespace_OculusDeeplinkManagerSizeCheck;
  static_assert(sizeof(OculusDeeplinkManager) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusDeeplinkManager*, "", "OculusDeeplinkManager");
