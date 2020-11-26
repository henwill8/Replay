// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexNode
  class RegexNode : public ::Il2CppObject {
    public:
    // System.Int32 _type
    // Offset: 0x10
    int type;
    // System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode> _children
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode*>* children;
    // System.String _str
    // Offset: 0x20
    ::Il2CppString* str;
    // System.Char _ch
    // Offset: 0x28
    ::Il2CppChar ch;
    // System.Int32 _m
    // Offset: 0x2C
    int m;
    // System.Int32 _n
    // Offset: 0x30
    int n;
    // System.Text.RegularExpressions.RegexOptions _options
    // Offset: 0x34
    System::Text::RegularExpressions::RegexOptions options;
    // System.Text.RegularExpressions.RegexNode _next
    // Offset: 0x38
    System::Text::RegularExpressions::RegexNode* next;
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x1548C60
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options);
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Char ch)
    // Offset: 0x1548C9C
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, ::Il2CppChar ch);
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.String str)
    // Offset: 0x1548CE0
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, ::Il2CppString* str);
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Int32 m)
    // Offset: 0x1548D2C
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, int m);
    // System.Void .ctor(System.Int32 type, System.Text.RegularExpressions.RegexOptions options, System.Int32 m, System.Int32 n)
    // Offset: 0x1548D70
    static RegexNode* New_ctor(int type, System::Text::RegularExpressions::RegexOptions options, int m, int n);
    // System.Boolean UseOptionR()
    // Offset: 0x1548DC0
    bool UseOptionR();
    // System.Text.RegularExpressions.RegexNode ReverseLeft()
    // Offset: 0x1548DCC
    System::Text::RegularExpressions::RegexNode* ReverseLeft();
    // System.Void MakeRep(System.Int32 type, System.Int32 min, System.Int32 max)
    // Offset: 0x1548E44
    void MakeRep(int type, int min, int max);
    // System.Text.RegularExpressions.RegexNode Reduce()
    // Offset: 0x1548E5C
    System::Text::RegularExpressions::RegexNode* Reduce();
    // System.Text.RegularExpressions.RegexNode StripEnation(System.Int32 emptyType)
    // Offset: 0x154992C
    System::Text::RegularExpressions::RegexNode* StripEnation(int emptyType);
    // System.Text.RegularExpressions.RegexNode ReduceGroup()
    // Offset: 0x1549778
    System::Text::RegularExpressions::RegexNode* ReduceGroup();
    // System.Text.RegularExpressions.RegexNode ReduceRep()
    // Offset: 0x15495E4
    System::Text::RegularExpressions::RegexNode* ReduceRep();
    // System.Text.RegularExpressions.RegexNode ReduceSet()
    // Offset: 0x15497A8
    System::Text::RegularExpressions::RegexNode* ReduceSet();
    // System.Text.RegularExpressions.RegexNode ReduceAlternation()
    // Offset: 0x1548EA8
    System::Text::RegularExpressions::RegexNode* ReduceAlternation();
    // System.Text.RegularExpressions.RegexNode ReduceConcatenation()
    // Offset: 0x1549270
    System::Text::RegularExpressions::RegexNode* ReduceConcatenation();
    // System.Text.RegularExpressions.RegexNode MakeQuantifier(System.Boolean lazy, System.Int32 min, System.Int32 max)
    // Offset: 0x15499F8
    System::Text::RegularExpressions::RegexNode* MakeQuantifier(bool lazy, int min, int max);
    // System.Void AddChild(System.Text.RegularExpressions.RegexNode newChild)
    // Offset: 0x1549B20
    void AddChild(System::Text::RegularExpressions::RegexNode* newChild);
    // System.Text.RegularExpressions.RegexNode Child(System.Int32 i)
    // Offset: 0x15456C0
    System::Text::RegularExpressions::RegexNode* Child(int i);
    // System.Int32 ChildCount()
    // Offset: 0x154566C
    int ChildCount();
    // System.Int32 Type()
    // Offset: 0x1549BF4
    int Type();
  }; // System.Text.RegularExpressions.RegexNode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexNode*, "System.Text.RegularExpressions", "RegexNode");
#pragma pack(pop)
