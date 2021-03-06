// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
  // Forward declaring type: CloudStorageMetadataList
  class CloudStorageMetadataList;
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorage
  // [] Offset: FFFFFFFF
  class CloudStorage : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CloudStorage
    CloudStorage() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Delete(System.String bucket, System.String key)
    // Offset: 0x13DFC08
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Delete(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> Load(System.String bucket, System.String key)
    // Offset: 0x13DFD2C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* Load(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> LoadBucketMetadata(System.String bucket)
    // Offset: 0x13DFE50
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* LoadBucketMetadata(::Il2CppString* bucket);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageConflictMetadata> LoadConflictMetadata(System.String bucket, System.String key)
    // Offset: 0x13DFF6C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>* LoadConflictMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> LoadHandle(System.String handle)
    // Offset: 0x13E0090
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* LoadHandle(::Il2CppString* handle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadata> LoadMetadata(System.String bucket, System.String key)
    // Offset: 0x13E01AC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>* LoadMetadata(::Il2CppString* bucket, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepLocal(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x13E02D0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepLocal(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepRemote(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x13E0404
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepRemote(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Save(System.String bucket, System.String key, System.Byte[] data, System.Int64 counter, System.String extraData)
    // Offset: 0x13E0538
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Save(::Il2CppString* bucket, ::Il2CppString* key, ::Array<uint8_t>* data, int64_t counter, ::Il2CppString* extraData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> GetNextCloudStorageMetadataListPage(Oculus.Platform.Models.CloudStorageMetadataList list)
    // Offset: 0x13E0698
    static Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* GetNextCloudStorageMetadataListPage(Oculus::Platform::Models::CloudStorageMetadataList* list);
  }; // Oculus.Platform.CloudStorage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage*, "Oculus.Platform", "CloudStorage");
