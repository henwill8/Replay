// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.DefaultExecutionOrder
  class DefaultExecutionOrder : public System::Attribute {
    public:
    // private System.Int32 m_Order
    // Offset: 0x10
    int m_Order;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Order;
    }
    // public System.Void .ctor(System.Int32 order)
    // Offset: 0x1685528
    static DefaultExecutionOrder* New_ctor(int order);
    // public System.Int32 get_order()
    // Offset: 0x167D804
    int get_order();
  }; // UnityEngine.DefaultExecutionOrder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DefaultExecutionOrder*, "UnityEngine", "DefaultExecutionOrder");
#pragma pack(pop)
