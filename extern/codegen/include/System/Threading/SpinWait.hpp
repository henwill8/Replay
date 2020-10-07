// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SpinWait
  struct SpinWait : public System::ValueType {
    public:
    // private System.Int32 m_count
    // Offset: 0x0
    int m_count;
    // Creating value type constructor for type: SpinWait
    constexpr SpinWait(int m_count_ = {}) noexcept : m_count{m_count_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_count;
    }
    // public System.Boolean get_NextSpinWillYield()
    // Offset: 0xA2DD60
    bool get_NextSpinWillYield();
    // public System.Void SpinOnce()
    // Offset: 0xA2DD90
    void SpinOnce();
  }; // System.Threading.SpinWait
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SpinWait, "System.Threading", "SpinWait");
#pragma pack(pop)
