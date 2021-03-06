// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.NumberStyles
#include "System/Globalization/NumberStyles.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureData
  class CultureData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0xD5
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.NumberFormatInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAA308
  class NumberFormatInfo : public ::Il2CppObject/*, public System::ICloneable, public System::IFormatProvider*/ {
    public:
    // System.Int32[] numberGroupSizes
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* numberGroupSizes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] currencyGroupSizes
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* currencyGroupSizes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] percentGroupSizes
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* percentGroupSizes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.String positiveSign
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* positiveSign;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String negativeSign
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* negativeSign;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String numberDecimalSeparator
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* numberDecimalSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String numberGroupSeparator
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* numberGroupSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String currencyGroupSeparator
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* currencyGroupSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String currencyDecimalSeparator
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* currencyDecimalSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String currencySymbol
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* currencySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String ansiCurrencySymbol
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* ansiCurrencySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String nanSymbol
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* nanSymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String positiveInfinitySymbol
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* positiveInfinitySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String negativeInfinitySymbol
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* negativeInfinitySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String percentDecimalSeparator
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* percentDecimalSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String percentGroupSeparator
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* percentGroupSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String percentSymbol
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* percentSymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String perMilleSymbol
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* perMilleSymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAF5D0
    // System.String[] nativeDigits
    // Size: 0x8
    // Offset: 0xA0
    ::Array<::Il2CppString*>* nativeDigits;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAF608
    // System.Int32 m_dataItem
    // Size: 0x4
    // Offset: 0xA8
    int m_dataItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 numberDecimalDigits
    // Size: 0x4
    // Offset: 0xAC
    int numberDecimalDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 currencyDecimalDigits
    // Size: 0x4
    // Offset: 0xB0
    int currencyDecimalDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 currencyPositivePattern
    // Size: 0x4
    // Offset: 0xB4
    int currencyPositivePattern;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 currencyNegativePattern
    // Size: 0x4
    // Offset: 0xB8
    int currencyNegativePattern;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 numberNegativePattern
    // Size: 0x4
    // Offset: 0xBC
    int numberNegativePattern;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 percentPositivePattern
    // Size: 0x4
    // Offset: 0xC0
    int percentPositivePattern;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 percentNegativePattern
    // Size: 0x4
    // Offset: 0xC4
    int percentNegativePattern;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 percentDecimalDigits
    // Size: 0x4
    // Offset: 0xC8
    int percentDecimalDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xCAF640
    // System.Int32 digitSubstitution
    // Size: 0x4
    // Offset: 0xCC
    int digitSubstitution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean isReadOnly
    // Size: 0x1
    // Offset: 0xD0
    bool isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCAF678
    // System.Boolean m_useUserOverride
    // Size: 0x1
    // Offset: 0xD1
    bool m_useUserOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCAF6B0
    // System.Boolean m_isInvariant
    // Size: 0x1
    // Offset: 0xD2
    bool m_isInvariant;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCAF6E8
    // System.Boolean validForParseAsNumber
    // Size: 0x1
    // Offset: 0xD3
    bool validForParseAsNumber;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCAF720
    // System.Boolean validForParseAsCurrency
    // Size: 0x1
    // Offset: 0xD4
    bool validForParseAsCurrency;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NumberFormatInfo
    NumberFormatInfo(::Array<int>* numberGroupSizes_ = {}, ::Array<int>* currencyGroupSizes_ = {}, ::Array<int>* percentGroupSizes_ = {}, ::Il2CppString* positiveSign_ = {}, ::Il2CppString* negativeSign_ = {}, ::Il2CppString* numberDecimalSeparator_ = {}, ::Il2CppString* numberGroupSeparator_ = {}, ::Il2CppString* currencyGroupSeparator_ = {}, ::Il2CppString* currencyDecimalSeparator_ = {}, ::Il2CppString* currencySymbol_ = {}, ::Il2CppString* ansiCurrencySymbol_ = {}, ::Il2CppString* nanSymbol_ = {}, ::Il2CppString* positiveInfinitySymbol_ = {}, ::Il2CppString* negativeInfinitySymbol_ = {}, ::Il2CppString* percentDecimalSeparator_ = {}, ::Il2CppString* percentGroupSeparator_ = {}, ::Il2CppString* percentSymbol_ = {}, ::Il2CppString* perMilleSymbol_ = {}, ::Array<::Il2CppString*>* nativeDigits_ = {}, int m_dataItem_ = {}, int numberDecimalDigits_ = {}, int currencyDecimalDigits_ = {}, int currencyPositivePattern_ = {}, int currencyNegativePattern_ = {}, int numberNegativePattern_ = {}, int percentPositivePattern_ = {}, int percentNegativePattern_ = {}, int percentDecimalDigits_ = {}, int digitSubstitution_ = {}, bool isReadOnly_ = {}, bool m_useUserOverride_ = {}, bool m_isInvariant_ = {}, bool validForParseAsNumber_ = {}, bool validForParseAsCurrency_ = {}) noexcept : numberGroupSizes{numberGroupSizes_}, currencyGroupSizes{currencyGroupSizes_}, percentGroupSizes{percentGroupSizes_}, positiveSign{positiveSign_}, negativeSign{negativeSign_}, numberDecimalSeparator{numberDecimalSeparator_}, numberGroupSeparator{numberGroupSeparator_}, currencyGroupSeparator{currencyGroupSeparator_}, currencyDecimalSeparator{currencyDecimalSeparator_}, currencySymbol{currencySymbol_}, ansiCurrencySymbol{ansiCurrencySymbol_}, nanSymbol{nanSymbol_}, positiveInfinitySymbol{positiveInfinitySymbol_}, negativeInfinitySymbol{negativeInfinitySymbol_}, percentDecimalSeparator{percentDecimalSeparator_}, percentGroupSeparator{percentGroupSeparator_}, percentSymbol{percentSymbol_}, perMilleSymbol{perMilleSymbol_}, nativeDigits{nativeDigits_}, m_dataItem{m_dataItem_}, numberDecimalDigits{numberDecimalDigits_}, currencyDecimalDigits{currencyDecimalDigits_}, currencyPositivePattern{currencyPositivePattern_}, currencyNegativePattern{currencyNegativePattern_}, numberNegativePattern{numberNegativePattern_}, percentPositivePattern{percentPositivePattern_}, percentNegativePattern{percentNegativePattern_}, percentDecimalDigits{percentDecimalDigits_}, digitSubstitution{digitSubstitution_}, isReadOnly{isReadOnly_}, m_useUserOverride{m_useUserOverride_}, m_isInvariant{m_isInvariant_}, validForParseAsNumber{validForParseAsNumber_}, validForParseAsCurrency{validForParseAsCurrency_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormatProvider
    operator System::IFormatProvider() noexcept {
      return *reinterpret_cast<System::IFormatProvider*>(this);
    }
    // Get static field: static private System.Globalization.NumberFormatInfo invariantInfo
    static System::Globalization::NumberFormatInfo* _get_invariantInfo();
    // Set static field: static private System.Globalization.NumberFormatInfo invariantInfo
    static void _set_invariantInfo(System::Globalization::NumberFormatInfo* value);
    // static field const value: static private System.Globalization.NumberStyles InvalidNumberStyles
    static constexpr const int InvalidNumberStyles = -1024;
    // Get static field: static private System.Globalization.NumberStyles InvalidNumberStyles
    static System::Globalization::NumberStyles _get_InvalidNumberStyles();
    // Set static field: static private System.Globalization.NumberStyles InvalidNumberStyles
    static void _set_InvalidNumberStyles(System::Globalization::NumberStyles value);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x19B17D8
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x19B1868
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x19B186C
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // static private System.Void VerifyGroupSeparator(System.String groupSep, System.String propertyName)
    // Offset: 0x19B1870
    static void VerifyGroupSeparator(::Il2CppString* groupSep, ::Il2CppString* propertyName);
    // System.Void .ctor(System.Globalization.CultureData cultureData)
    // Offset: 0x1997548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberFormatInfo* New_ctor(System::Globalization::CultureData* cultureData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::NumberFormatInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberFormatInfo*, creationType>(cultureData)));
    }
    // private System.Void VerifyWritable()
    // Offset: 0x19B1914
    void VerifyWritable();
    // static public System.Globalization.NumberFormatInfo get_InvariantInfo()
    // Offset: 0x19980B0
    static System::Globalization::NumberFormatInfo* get_InvariantInfo();
    // static public System.Globalization.NumberFormatInfo GetInstance(System.IFormatProvider formatProvider)
    // Offset: 0x19B1A78
    static System::Globalization::NumberFormatInfo* GetInstance(System::IFormatProvider* formatProvider);
    // public System.Int32 get_CurrencyDecimalDigits()
    // Offset: 0x19B1D08
    int get_CurrencyDecimalDigits();
    // public System.String get_CurrencyDecimalSeparator()
    // Offset: 0x19B1D10
    ::Il2CppString* get_CurrencyDecimalSeparator();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x19B1D18
    bool get_IsReadOnly();
    // public System.Int32[] get_CurrencyGroupSizes()
    // Offset: 0x19B1D20
    ::Array<int>* get_CurrencyGroupSizes();
    // public System.Int32[] get_NumberGroupSizes()
    // Offset: 0x19B1DA0
    ::Array<int>* get_NumberGroupSizes();
    // public System.Int32[] get_PercentGroupSizes()
    // Offset: 0x19B1E20
    ::Array<int>* get_PercentGroupSizes();
    // public System.String get_CurrencyGroupSeparator()
    // Offset: 0x19B1EA0
    ::Il2CppString* get_CurrencyGroupSeparator();
    // public System.Void set_CurrencyGroupSeparator(System.String value)
    // Offset: 0x19B1EA8
    void set_CurrencyGroupSeparator(::Il2CppString* value);
    // public System.String get_CurrencySymbol()
    // Offset: 0x19B1F1C
    ::Il2CppString* get_CurrencySymbol();
    // static public System.Globalization.NumberFormatInfo get_CurrentInfo()
    // Offset: 0x19B1C1C
    static System::Globalization::NumberFormatInfo* get_CurrentInfo();
    // public System.String get_NaNSymbol()
    // Offset: 0x19B1F24
    ::Il2CppString* get_NaNSymbol();
    // public System.Int32 get_CurrencyNegativePattern()
    // Offset: 0x19B1F2C
    int get_CurrencyNegativePattern();
    // public System.Int32 get_NumberNegativePattern()
    // Offset: 0x19B1F34
    int get_NumberNegativePattern();
    // public System.Int32 get_PercentPositivePattern()
    // Offset: 0x19B1F3C
    int get_PercentPositivePattern();
    // public System.Int32 get_PercentNegativePattern()
    // Offset: 0x19B1F44
    int get_PercentNegativePattern();
    // public System.String get_NegativeInfinitySymbol()
    // Offset: 0x19B1F4C
    ::Il2CppString* get_NegativeInfinitySymbol();
    // public System.String get_NegativeSign()
    // Offset: 0x19B1F54
    ::Il2CppString* get_NegativeSign();
    // public System.Int32 get_NumberDecimalDigits()
    // Offset: 0x19B1F5C
    int get_NumberDecimalDigits();
    // public System.String get_NumberDecimalSeparator()
    // Offset: 0x19B1F64
    ::Il2CppString* get_NumberDecimalSeparator();
    // public System.String get_NumberGroupSeparator()
    // Offset: 0x19B1F6C
    ::Il2CppString* get_NumberGroupSeparator();
    // public System.Void set_NumberGroupSeparator(System.String value)
    // Offset: 0x19B1F74
    void set_NumberGroupSeparator(::Il2CppString* value);
    // public System.Int32 get_CurrencyPositivePattern()
    // Offset: 0x19B1FE8
    int get_CurrencyPositivePattern();
    // public System.String get_PositiveInfinitySymbol()
    // Offset: 0x19B1FF0
    ::Il2CppString* get_PositiveInfinitySymbol();
    // public System.String get_PositiveSign()
    // Offset: 0x19B1FF8
    ::Il2CppString* get_PositiveSign();
    // public System.Int32 get_PercentDecimalDigits()
    // Offset: 0x19B2000
    int get_PercentDecimalDigits();
    // public System.String get_PercentDecimalSeparator()
    // Offset: 0x19B2008
    ::Il2CppString* get_PercentDecimalSeparator();
    // public System.String get_PercentGroupSeparator()
    // Offset: 0x19B2010
    ::Il2CppString* get_PercentGroupSeparator();
    // public System.Void set_PercentGroupSeparator(System.String value)
    // Offset: 0x19B2018
    void set_PercentGroupSeparator(::Il2CppString* value);
    // public System.String get_PercentSymbol()
    // Offset: 0x19B208C
    ::Il2CppString* get_PercentSymbol();
    // public System.String get_PerMilleSymbol()
    // Offset: 0x19B2094
    ::Il2CppString* get_PerMilleSymbol();
    // static public System.Globalization.NumberFormatInfo ReadOnly(System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x19B19AC
    static System::Globalization::NumberFormatInfo* ReadOnly(System::Globalization::NumberFormatInfo* nfi);
    // static System.Void ValidateParseStyleInteger(System.Globalization.NumberStyles style)
    // Offset: 0x19B2138
    static void ValidateParseStyleInteger(System::Globalization::NumberStyles style);
    // static System.Void ValidateParseStyleFloatingPoint(System.Globalization.NumberStyles style)
    // Offset: 0x19B222C
    static void ValidateParseStyleFloatingPoint(System::Globalization::NumberStyles style);
    // public System.Void .ctor()
    // Offset: 0x19B17D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberFormatInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::NumberFormatInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberFormatInfo*, creationType>()));
    }
    // public System.Object Clone()
    // Offset: 0x1996DA0
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Object GetFormat(System.Type formatType)
    // Offset: 0x19B209C
    // Implemented from: System.IFormatProvider
    // Base method: System.Object IFormatProvider::GetFormat(System.Type formatType)
    ::Il2CppObject* GetFormat(System::Type* formatType);
  }; // System.Globalization.NumberFormatInfo
  #pragma pack(pop)
  static check_size<sizeof(NumberFormatInfo), 212 + sizeof(bool)> __System_Globalization_NumberFormatInfoSizeCheck;
  static_assert(sizeof(NumberFormatInfo) == 0xD5);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::NumberFormatInfo*, "System.Globalization", "NumberFormatInfo");
