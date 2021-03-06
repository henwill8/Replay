// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/Queue
#include "System/Net/TimerThread_Queue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/TimerQueue
  // [] Offset: FFFFFFFF
  class TimerThread::TimerQueue : public System::Net::TimerThread::Queue {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private readonly System.Net.TimerThread/TimerNode m_Timers
    // Size: 0x8
    // Offset: 0x18
    System::Net::TimerThread::TimerNode* m_Timers;
    // Field size check
    static_assert(sizeof(System::Net::TimerThread::TimerNode*) == 0x8);
    // Creating value type constructor for type: TimerQueue
    TimerQueue(System::Net::TimerThread::TimerNode* m_Timers_ = {}) noexcept : m_Timers{m_Timers_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0x1432FE0
    // Implemented from: System.Net.TimerThread/Queue
    // Base method: System.Void Queue::.ctor(System.Int32 durationMilliseconds)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::TimerQueue* New_ctor(int durationMilliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::TimerThread::TimerQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::TimerQueue*, creationType>(durationMilliseconds)));
    }
  }; // System.Net.TimerThread/TimerQueue
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::TimerQueue), 24 + sizeof(System::Net::TimerThread::TimerNode*)> __System_Net_TimerThread_TimerQueueSizeCheck;
  static_assert(sizeof(TimerThread::TimerQueue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::TimerQueue*, "System.Net", "TimerThread/TimerQueue");
