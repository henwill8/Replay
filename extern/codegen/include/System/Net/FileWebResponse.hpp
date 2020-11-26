// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.FileWebResponse
  class FileWebResponse : public System::Net::WebResponse/*, public System::Net::ICloseEx*/ {
    public:
    // private System.Boolean m_closed
    // Offset: 0x18
    bool m_closed;
    // private System.Int64 m_contentLength
    // Offset: 0x20
    int64_t m_contentLength;
    // private System.IO.FileAccess m_fileAccess
    // Offset: 0x28
    System::IO::FileAccess m_fileAccess;
    // private System.Net.WebHeaderCollection m_headers
    // Offset: 0x30
    System::Net::WebHeaderCollection* m_headers;
    // private System.IO.Stream m_stream
    // Offset: 0x38
    System::IO::Stream* m_stream;
    // private System.Uri m_uri
    // Offset: 0x40
    System::Uri* m_uri;
    // Creating interface conversion operator: operator System::Net::ICloseEx
    operator System::Net::ICloseEx() noexcept {
      return *reinterpret_cast<System::Net::ICloseEx*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Net.FileWebRequest request, System.Uri uri, System.IO.FileAccess access, System.Boolean asyncHint)
    // Offset: 0x131D29C
    static FileWebResponse* New_ctor(System::Net::FileWebRequest* request, System::Uri* uri, System::IO::FileAccess access, bool asyncHint);
    // private System.Void CheckDisposed()
    // Offset: 0x131DF80
    void CheckDisposed();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x131DC0C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    static FileWebResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x131DDE4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x131DDF0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x131DF5C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x131E02C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // public override System.Void Close()
    // Offset: 0x131E050
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0x131E0F8
    // Implemented from: System.Net.ICloseEx
    // Base method: System.Void ICloseEx::CloseEx(System.Net.CloseExState closeState)
    void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x131E280
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
  }; // System.Net.FileWebResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebResponse*, "System.Net", "FileWebResponse");
#pragma pack(pop)
