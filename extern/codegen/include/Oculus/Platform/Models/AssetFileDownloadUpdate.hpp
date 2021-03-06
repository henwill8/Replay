// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDownloadUpdate
  // [] Offset: FFFFFFFF
  class AssetFileDownloadUpdate : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 AssetFileId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetFileId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x18
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt32 BytesTotal
    // Size: 0x4
    // Offset: 0x20
    uint BytesTotal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.Int32 BytesTransferred
    // Size: 0x4
    // Offset: 0x24
    int BytesTransferred;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean Completed
    // Size: 0x1
    // Offset: 0x28
    bool Completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AssetFileDownloadUpdate
    AssetFileDownloadUpdate(uint64_t AssetFileId_ = {}, uint64_t AssetId_ = {}, uint BytesTotal_ = {}, int BytesTransferred_ = {}, bool Completed_ = {}) noexcept : AssetFileId{AssetFileId_}, AssetId{AssetId_}, BytesTotal{BytesTotal_}, BytesTransferred{BytesTransferred_}, Completed{Completed_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13E9C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDownloadUpdate* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AssetFileDownloadUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDownloadUpdate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDownloadUpdate
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDownloadUpdate), 40 + sizeof(bool)> __Oculus_Platform_Models_AssetFileDownloadUpdateSizeCheck;
  static_assert(sizeof(AssetFileDownloadUpdate) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetFileDownloadUpdate*, "Oculus.Platform.Models", "AssetFileDownloadUpdate");
