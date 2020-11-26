// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: UseEditMode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TimeFieldAttribute
  class TimeFieldAttribute : public UnityEngine::PropertyAttribute {
    public:
    // Nested type: UnityEngine::Timeline::TimeFieldAttribute::UseEditMode
    struct UseEditMode;
    // Autogenerated type: UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
    struct UseEditMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: UseEditMode
      constexpr UseEditMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static UnityEngine::Timeline::TimeFieldAttribute::UseEditMode _get_None();
      // Set static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static void _set_None(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode value);
      // static field const value: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static constexpr const int ApplyEditMode = 1;
      // Get static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static UnityEngine::Timeline::TimeFieldAttribute::UseEditMode _get_ApplyEditMode();
      // Set static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static void _set_ApplyEditMode(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode value);
    }; // UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
    // private readonly UnityEngine.Timeline.TimeFieldAttribute/UseEditMode <useEditMode>k__BackingField
    // Offset: 0x10
    UnityEngine::Timeline::TimeFieldAttribute::UseEditMode useEditMode;
    // Creating conversion operator: operator UnityEngine::Timeline::TimeFieldAttribute::UseEditMode
    constexpr operator UnityEngine::Timeline::TimeFieldAttribute::UseEditMode() const noexcept {
      return useEditMode;
    }
    // public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode get_useEditMode()
    // Offset: 0x1421878
    UnityEngine::Timeline::TimeFieldAttribute::UseEditMode get_useEditMode();
    // public System.Void .ctor(UnityEngine.Timeline.TimeFieldAttribute/UseEditMode useEditMode)
    // Offset: 0x1421880
    static TimeFieldAttribute* New_ctor(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode useEditMode);
  }; // UnityEngine.Timeline.TimeFieldAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
#pragma pack(pop)
