// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebConnectionGroup
  class WebConnectionGroup;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.IWebConnectionState
  class IWebConnectionState {
    public:
    // public System.Net.WebConnectionGroup get_Group()
    // Offset: 0xFFFFFFFF
    System::Net::WebConnectionGroup* get_Group();
    // public System.Boolean TrySetBusy()
    // Offset: 0xFFFFFFFF
    bool TrySetBusy();
    // public System.Void SetIdle()
    // Offset: 0xFFFFFFFF
    void SetIdle();
  }; // System.Net.IWebConnectionState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebConnectionState*, "System.Net", "IWebConnectionState");
#pragma pack(pop)