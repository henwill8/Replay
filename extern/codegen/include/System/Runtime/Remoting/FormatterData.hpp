// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ProviderData
#include "System/Runtime/Remoting/ProviderData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.FormatterData
  // [] Offset: FFFFFFFF
  class FormatterData : public System::Runtime::Remoting::ProviderData {
    public:
    // Creating value type constructor for type: FormatterData
    FormatterData() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13187FC
    // Implemented from: System.Runtime.Remoting.ProviderData
    // Base method: System.Void ProviderData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormatterData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::FormatterData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormatterData*, creationType>()));
    }
  }; // System.Runtime.Remoting.FormatterData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::FormatterData*, "System.Runtime.Remoting", "FormatterData");
