// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.MatchEvaluator
  class MatchEvaluator : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x146E604
    static MatchEvaluator* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.String Invoke(System.Text.RegularExpressions.Match match)
    // Offset: 0x146E618
    ::Il2CppString* Invoke(System::Text::RegularExpressions::Match* match);
    // public System.IAsyncResult BeginInvoke(System.Text.RegularExpressions.Match match, System.AsyncCallback callback, System.Object object)
    // Offset: 0x146E9D8
    System::IAsyncResult* BeginInvoke(System::Text::RegularExpressions::Match* match, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.String EndInvoke(System.IAsyncResult result)
    // Offset: 0x146E9FC
    ::Il2CppString* EndInvoke(System::IAsyncResult* result);
  }; // System.Text.RegularExpressions.MatchEvaluator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::MatchEvaluator*, "System.Text.RegularExpressions", "MatchEvaluator");
#pragma pack(pop)
