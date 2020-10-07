// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/ControllerState4
  struct OVRPlugin::ControllerState4 : public System::ValueType {
    public:
    // public System.UInt32 ConnectedControllers
    // Offset: 0x0
    uint ConnectedControllers;
    // public System.UInt32 Buttons
    // Offset: 0x4
    uint Buttons;
    // public System.UInt32 Touches
    // Offset: 0x8
    uint Touches;
    // public System.UInt32 NearTouches
    // Offset: 0xC
    uint NearTouches;
    // public System.Single LIndexTrigger
    // Offset: 0x10
    float LIndexTrigger;
    // public System.Single RIndexTrigger
    // Offset: 0x14
    float RIndexTrigger;
    // public System.Single LHandTrigger
    // Offset: 0x18
    float LHandTrigger;
    // public System.Single RHandTrigger
    // Offset: 0x1C
    float RHandTrigger;
    // public OVRPlugin/Vector2f LThumbstick
    // Offset: 0x20
    GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // public OVRPlugin/Vector2f RThumbstick
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // public OVRPlugin/Vector2f LTouchpad
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::Vector2f LTouchpad;
    // public OVRPlugin/Vector2f RTouchpad
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::Vector2f RTouchpad;
    // public System.Byte LBatteryPercentRemaining
    // Offset: 0x40
    uint8_t LBatteryPercentRemaining;
    // public System.Byte RBatteryPercentRemaining
    // Offset: 0x41
    uint8_t RBatteryPercentRemaining;
    // public System.Byte LRecenterCount
    // Offset: 0x42
    uint8_t LRecenterCount;
    // public System.Byte RRecenterCount
    // Offset: 0x43
    uint8_t RRecenterCount;
    // public System.Byte Reserved_27
    // Offset: 0x44
    uint8_t Reserved_27;
    // public System.Byte Reserved_26
    // Offset: 0x45
    uint8_t Reserved_26;
    // public System.Byte Reserved_25
    // Offset: 0x46
    uint8_t Reserved_25;
    // public System.Byte Reserved_24
    // Offset: 0x47
    uint8_t Reserved_24;
    // public System.Byte Reserved_23
    // Offset: 0x48
    uint8_t Reserved_23;
    // public System.Byte Reserved_22
    // Offset: 0x49
    uint8_t Reserved_22;
    // public System.Byte Reserved_21
    // Offset: 0x4A
    uint8_t Reserved_21;
    // public System.Byte Reserved_20
    // Offset: 0x4B
    uint8_t Reserved_20;
    // public System.Byte Reserved_19
    // Offset: 0x4C
    uint8_t Reserved_19;
    // public System.Byte Reserved_18
    // Offset: 0x4D
    uint8_t Reserved_18;
    // public System.Byte Reserved_17
    // Offset: 0x4E
    uint8_t Reserved_17;
    // public System.Byte Reserved_16
    // Offset: 0x4F
    uint8_t Reserved_16;
    // public System.Byte Reserved_15
    // Offset: 0x50
    uint8_t Reserved_15;
    // public System.Byte Reserved_14
    // Offset: 0x51
    uint8_t Reserved_14;
    // public System.Byte Reserved_13
    // Offset: 0x52
    uint8_t Reserved_13;
    // public System.Byte Reserved_12
    // Offset: 0x53
    uint8_t Reserved_12;
    // public System.Byte Reserved_11
    // Offset: 0x54
    uint8_t Reserved_11;
    // public System.Byte Reserved_10
    // Offset: 0x55
    uint8_t Reserved_10;
    // public System.Byte Reserved_09
    // Offset: 0x56
    uint8_t Reserved_09;
    // public System.Byte Reserved_08
    // Offset: 0x57
    uint8_t Reserved_08;
    // public System.Byte Reserved_07
    // Offset: 0x58
    uint8_t Reserved_07;
    // public System.Byte Reserved_06
    // Offset: 0x59
    uint8_t Reserved_06;
    // public System.Byte Reserved_05
    // Offset: 0x5A
    uint8_t Reserved_05;
    // public System.Byte Reserved_04
    // Offset: 0x5B
    uint8_t Reserved_04;
    // public System.Byte Reserved_03
    // Offset: 0x5C
    uint8_t Reserved_03;
    // public System.Byte Reserved_02
    // Offset: 0x5D
    uint8_t Reserved_02;
    // public System.Byte Reserved_01
    // Offset: 0x5E
    uint8_t Reserved_01;
    // public System.Byte Reserved_00
    // Offset: 0x5F
    uint8_t Reserved_00;
    // Creating value type constructor for type: ControllerState4
    constexpr ControllerState4(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}, uint8_t LBatteryPercentRemaining_ = {}, uint8_t RBatteryPercentRemaining_ = {}, uint8_t LRecenterCount_ = {}, uint8_t RRecenterCount_ = {}, uint8_t Reserved_27_ = {}, uint8_t Reserved_26_ = {}, uint8_t Reserved_25_ = {}, uint8_t Reserved_24_ = {}, uint8_t Reserved_23_ = {}, uint8_t Reserved_22_ = {}, uint8_t Reserved_21_ = {}, uint8_t Reserved_20_ = {}, uint8_t Reserved_19_ = {}, uint8_t Reserved_18_ = {}, uint8_t Reserved_17_ = {}, uint8_t Reserved_16_ = {}, uint8_t Reserved_15_ = {}, uint8_t Reserved_14_ = {}, uint8_t Reserved_13_ = {}, uint8_t Reserved_12_ = {}, uint8_t Reserved_11_ = {}, uint8_t Reserved_10_ = {}, uint8_t Reserved_09_ = {}, uint8_t Reserved_08_ = {}, uint8_t Reserved_07_ = {}, uint8_t Reserved_06_ = {}, uint8_t Reserved_05_ = {}, uint8_t Reserved_04_ = {}, uint8_t Reserved_03_ = {}, uint8_t Reserved_02_ = {}, uint8_t Reserved_01_ = {}, uint8_t Reserved_00_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_}, LBatteryPercentRemaining{LBatteryPercentRemaining_}, RBatteryPercentRemaining{RBatteryPercentRemaining_}, LRecenterCount{LRecenterCount_}, RRecenterCount{RRecenterCount_}, Reserved_27{Reserved_27_}, Reserved_26{Reserved_26_}, Reserved_25{Reserved_25_}, Reserved_24{Reserved_24_}, Reserved_23{Reserved_23_}, Reserved_22{Reserved_22_}, Reserved_21{Reserved_21_}, Reserved_20{Reserved_20_}, Reserved_19{Reserved_19_}, Reserved_18{Reserved_18_}, Reserved_17{Reserved_17_}, Reserved_16{Reserved_16_}, Reserved_15{Reserved_15_}, Reserved_14{Reserved_14_}, Reserved_13{Reserved_13_}, Reserved_12{Reserved_12_}, Reserved_11{Reserved_11_}, Reserved_10{Reserved_10_}, Reserved_09{Reserved_09_}, Reserved_08{Reserved_08_}, Reserved_07{Reserved_07_}, Reserved_06{Reserved_06_}, Reserved_05{Reserved_05_}, Reserved_04{Reserved_04_}, Reserved_03{Reserved_03_}, Reserved_02{Reserved_02_}, Reserved_01{Reserved_01_}, Reserved_00{Reserved_00_} {}
    // public System.Void .ctor(OVRPlugin/ControllerState2 cs)
    // Offset: 0xA39E54
    ControllerState4(GlobalNamespace::OVRPlugin::ControllerState2 cs);
  }; // OVRPlugin/ControllerState4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::ControllerState4, "", "OVRPlugin/ControllerState4");
#pragma pack(pop)
