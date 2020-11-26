// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ReaderWriterLockSlim
#include "System/Threading/ReaderWriterLockSlim.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ReaderWriterLockSlim/TimeoutTracker
  struct ReaderWriterLockSlim::TimeoutTracker : public System::ValueType {
    public:
    // private System.Int32 m_total
    // Offset: 0x0
    int m_total;
    // private System.Int32 m_start
    // Offset: 0x4
    int m_start;
    // Creating value type constructor for type: TimeoutTracker
    constexpr TimeoutTracker(int m_total_ = {}, int m_start_ = {}) noexcept : m_total{m_total_}, m_start{m_start_} {}
    // public System.Void .ctor(System.Int32 millisecondsTimeout)
    // Offset: 0xCB6978
    TimeoutTracker(int millisecondsTimeout);
    // public System.Int32 get_RemainingMilliseconds()
    // Offset: 0xCB6980
    int get_RemainingMilliseconds();
    // public System.Boolean get_IsExpired()
    // Offset: 0xCB6988
    bool get_IsExpired();
  }; // System.Threading.ReaderWriterLockSlim/TimeoutTracker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterLockSlim::TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
#pragma pack(pop)
