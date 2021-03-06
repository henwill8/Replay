// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Profiling.Experimental.DebugScreenCapture
#include "UnityEngine/Profiling/Experimental/DebugScreenCapture.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine::Profiling::Memory::Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Forward declaring type: MetaData
  class MetaData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: TextureFormat because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Profiling.Memory.Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBFDE4
  class MemoryProfiler : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MemoryProfiler
    MemoryProfiler() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xCC2D0C
    // [CompilerGeneratedAttribute] Offset: 0xCC2D0C
    // Get static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static System::Action_2<::Il2CppString*, bool>* _get_m_SnapshotFinished();
    // Set static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
    static void _set_m_SnapshotFinished(System::Action_2<::Il2CppString*, bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xCC2D48
    // [CompilerGeneratedAttribute] Offset: 0xCC2D48
    // Get static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static System::Action_3<::Il2CppString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* _get_m_SaveScreenshotToDisk();
    // Set static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
    static void _set_m_SaveScreenshotToDisk(System::Action_3<::Il2CppString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xCC2D84
    // [CompilerGeneratedAttribute] Offset: 0xCC2D84
    // Get static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* _get_createMetaData();
    // Set static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
    static void _set_createMetaData(System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* value);
    // static private System.Byte[] PrepareMetadata()
    // Offset: 0x1B3C658
    static ::Array<uint8_t>* PrepareMetadata();
    // static System.Int32 WriteIntToByteArray(System.Byte[] array, System.Int32 offset, System.Int32 value)
    // Offset: 0x1B3C834
    static int WriteIntToByteArray(::Array<uint8_t>* array, int offset, int value);
    // static System.Int32 WriteStringToByteArray(System.Byte[] array, System.Int32 offset, System.String value)
    // Offset: 0x1B3C8D4
    static int WriteStringToByteArray(::Array<uint8_t>* array, int offset, ::Il2CppString* value);
    // static private System.Void FinalizeSnapshot(System.String path, System.Boolean result)
    // Offset: 0x1B3C97C
    static void FinalizeSnapshot(::Il2CppString* path, bool result);
    // static private System.Void SaveScreenshotToDisk(System.String path, System.Boolean result, System.IntPtr pixelsPtr, System.Int32 pixelsCount, UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)
    // Offset: 0x1B3CA14
    static void SaveScreenshotToDisk(::Il2CppString* path, bool result, System::IntPtr pixelsPtr, int pixelsCount, UnityEngine::TextureFormat format, int width, int height);
  }; // UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
