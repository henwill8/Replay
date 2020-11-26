// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArgumentException
  class ArgumentException;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexWriter
  class RegexWriter : public ::Il2CppObject {
    public:
    // System.Int32[] _intStack
    // Offset: 0x10
    ::Array<int>* intStack;
    // System.Int32 _depth
    // Offset: 0x18
    int depth;
    // System.Int32[] _emitted
    // Offset: 0x20
    ::Array<int>* emitted;
    // System.Int32 _curpos
    // Offset: 0x28
    int curpos;
    // System.Collections.Generic.Dictionary`2<System.String,System.Int32> _stringhash
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* stringhash;
    // System.Collections.Generic.List`1<System.String> _stringtable
    // Offset: 0x38
    System::Collections::Generic::List_1<::Il2CppString*>* stringtable;
    // System.Boolean _counting
    // Offset: 0x40
    bool counting;
    // System.Int32 _count
    // Offset: 0x44
    int count;
    // System.Int32 _trackcount
    // Offset: 0x48
    int trackcount;
    // System.Collections.Hashtable _caps
    // Offset: 0x50
    System::Collections::Hashtable* caps;
    // static System.Text.RegularExpressions.RegexCode Write(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x1550018
    static System::Text::RegularExpressions::RegexCode* Write(System::Text::RegularExpressions::RegexTree* t);
    // System.Void PushInt(System.Int32 I)
    // Offset: 0x155052C
    void PushInt(int I);
    // System.Boolean EmptyStack()
    // Offset: 0x1550620
    bool EmptyStack();
    // System.Int32 PopInt()
    // Offset: 0x1550630
    int PopInt();
    // System.Int32 CurPos()
    // Offset: 0x1550678
    int CurPos();
    // System.Void PatchJump(System.Int32 Offset, System.Int32 jumpDest)
    // Offset: 0x1550680
    void PatchJump(int Offset, int jumpDest);
    // System.Void Emit(System.Int32 op)
    // Offset: 0x15506C0
    void Emit(int op);
    // System.Void Emit(System.Int32 op, System.Int32 opd1)
    // Offset: 0x1550758
    void Emit(int op, int opd1);
    // System.Void Emit(System.Int32 op, System.Int32 opd1, System.Int32 opd2)
    // Offset: 0x1550818
    void Emit(int op, int opd1, int opd2);
    // System.Int32 StringCode(System.String str)
    // Offset: 0x1550900
    int StringCode(::Il2CppString* str);
    // System.ArgumentException MakeException(System.String message)
    // Offset: 0x1550A0C
    System::ArgumentException* MakeException(::Il2CppString* message);
    // System.Int32 MapCapnum(System.Int32 capnum)
    // Offset: 0x1550A70
    int MapCapnum(int capnum);
    // System.Text.RegularExpressions.RegexCode RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1550170
    System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
    // System.Void EmitFragment(System.Int32 nodetype, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x1550B2C
    void EmitFragment(int nodetype, System::Text::RegularExpressions::RegexNode* node, int CurIndex);
    // private System.Void .ctor()
    // Offset: 0x1550080
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RegexWriter* New_ctor();
  }; // System.Text.RegularExpressions.RegexWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexWriter*, "System.Text.RegularExpressions", "RegexWriter");
#pragma pack(pop)
