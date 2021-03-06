// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFDictionary
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CB5808
  class CFDictionary : public Mono::Net::CFObject {
    public:
    // Creating value type constructor for type: CFDictionary
    CFDictionary() noexcept {}
    // Get static field: static private readonly System.IntPtr KeyCallbacks
    static System::IntPtr _get_KeyCallbacks();
    // Set static field: static private readonly System.IntPtr KeyCallbacks
    static void _set_KeyCallbacks(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr ValueCallbacks
    static System::IntPtr _get_ValueCallbacks();
    // Set static field: static private readonly System.IntPtr ValueCallbacks
    static void _set_ValueCallbacks(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x149D15C
    static void _cctor();
    // static private System.IntPtr CFDictionaryGetValue(System.IntPtr handle, System.IntPtr key)
    // Offset: 0x149D29C
    static System::IntPtr CFDictionaryGetValue(System::IntPtr handle, System::IntPtr key);
    // public System.IntPtr GetValue(System.IntPtr key)
    // Offset: 0x149D32C
    System::IntPtr GetValue(System::IntPtr key);
    // public System.IntPtr get_Item(System.IntPtr key)
    // Offset: 0x149D3A4
    System::IntPtr get_Item(System::IntPtr key);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x149D24C
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFDictionary* New_ctor(System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFDictionary*, creationType>(handle, own)));
    }
  }; // Mono.Net.CFDictionary
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFDictionary*, "Mono.Net", "CFDictionary");
