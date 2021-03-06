// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpContent
  class HttpContent;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: MediaTypeHeaderValue
  class MediaTypeHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpContentHeaders
  // [] Offset: FFFFFFFF
  class HttpContentHeaders : public System::Net::Http::Headers::HttpHeaders {
    public:
    // private readonly System.Net.Http.HttpContent content
    // Size: 0x8
    // Offset: 0x20
    System::Net::Http::HttpContent* content;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpContent*) == 0x8);
    // Creating value type constructor for type: HttpContentHeaders
    HttpContentHeaders(System::Net::Http::HttpContent* content_ = {}) noexcept : content{content_} {}
    // Creating conversion operator: operator System::Net::Http::HttpContent*
    constexpr operator System::Net::Http::HttpContent*() const noexcept {
      return content;
    }
    // System.Void .ctor(System.Net.Http.HttpContent content)
    // Offset: 0x1408250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContentHeaders* New_ctor(System::Net::Http::HttpContent* content) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpContentHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContentHeaders*, creationType>(content)));
    }
    // public System.Nullable`1<System.Int64> get_ContentLength()
    // Offset: 0x1408300
    System::Nullable_1<int64_t> get_ContentLength();
    // public System.Net.Http.Headers.MediaTypeHeaderValue get_ContentType()
    // Offset: 0x140847C
    System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType();
  }; // System.Net.Http.Headers.HttpContentHeaders
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpContentHeaders*, "System.Net.Http.Headers", "HttpContentHeaders");
