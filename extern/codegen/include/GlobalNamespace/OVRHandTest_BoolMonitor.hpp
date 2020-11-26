// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHandTest
#include "GlobalNamespace/OVRHandTest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHandTest/BoolMonitor
  class OVRHandTest::BoolMonitor : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator
    class BoolGenerator;
    // private System.String m_name
    // Offset: 0x10
    ::Il2CppString* m_name;
    // private OVRHandTest/BoolMonitor/BoolGenerator m_generator
    // Offset: 0x18
    GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* m_generator;
    // private System.Boolean m_prevValue
    // Offset: 0x20
    bool m_prevValue;
    // private System.Boolean m_currentValue
    // Offset: 0x21
    bool m_currentValue;
    // private System.Boolean m_currentValueRecentlyChanged
    // Offset: 0x22
    bool m_currentValueRecentlyChanged;
    // private System.Single m_displayTimeout
    // Offset: 0x24
    float m_displayTimeout;
    // private System.Single m_displayTimer
    // Offset: 0x28
    float m_displayTimer;
    // public System.Void .ctor(System.String name, OVRHandTest/BoolMonitor/BoolGenerator generator, System.Single displayTimeout)
    // Offset: 0x11B6A48
    static OVRHandTest::BoolMonitor* New_ctor(::Il2CppString* name, GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* generator, float displayTimeout);
    // public System.Void Update()
    // Offset: 0x11B75CC
    void Update();
    // public System.Void AppendToStringBuilder(ref System.Text.StringBuilder sb)
    // Offset: 0x11B7670
    void AppendToStringBuilder(System::Text::StringBuilder*& sb);
  }; // OVRHandTest/BoolMonitor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHandTest::BoolMonitor*, "", "OVRHandTest/BoolMonitor");
#pragma pack(pop)
