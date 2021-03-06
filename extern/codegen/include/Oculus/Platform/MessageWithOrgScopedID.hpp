// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithOrgScopedID
  // [] Offset: FFFFFFFF
  class MessageWithOrgScopedID : public Oculus::Platform::Message_1<Oculus::Platform::Models::OrgScopedID*> {
    public:
    // Creating value type constructor for type: MessageWithOrgScopedID
    MessageWithOrgScopedID() noexcept {}
    // protected Oculus.Platform.Models.OrgScopedID GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x13EE3B0
    Oculus::Platform::Models::OrgScopedID* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x13E7070
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithOrgScopedID* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithOrgScopedID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithOrgScopedID*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.OrgScopedID GetOrgScopedID()
    // Offset: 0x13EE36C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.OrgScopedID Message::GetOrgScopedID()
    Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();
  }; // Oculus.Platform.MessageWithOrgScopedID
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithOrgScopedID*, "Oculus.Platform", "MessageWithOrgScopedID");
