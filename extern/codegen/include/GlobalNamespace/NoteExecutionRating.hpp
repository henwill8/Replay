// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NoteExecutionRating
  // [] Offset: FFFFFFFF
  class NoteExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::NoteExecutionRating::Rating
    struct Rating;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NoteExecutionRating/Rating
    // [] Offset: FFFFFFFF
    struct Rating/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Rating
      constexpr Rating(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NoteExecutionRating/Rating GoodCut
      static constexpr const int GoodCut = 0;
      // Get static field: static public NoteExecutionRating/Rating GoodCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_GoodCut();
      // Set static field: static public NoteExecutionRating/Rating GoodCut
      static void _set_GoodCut(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating Missed
      static constexpr const int Missed = 1;
      // Get static field: static public NoteExecutionRating/Rating Missed
      static GlobalNamespace::NoteExecutionRating::Rating _get_Missed();
      // Set static field: static public NoteExecutionRating/Rating Missed
      static void _set_Missed(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating BadCut
      static constexpr const int BadCut = 2;
      // Get static field: static public NoteExecutionRating/Rating BadCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_BadCut();
      // Set static field: static public NoteExecutionRating/Rating BadCut
      static void _set_BadCut(GlobalNamespace::NoteExecutionRating::Rating value);
    }; // NoteExecutionRating/Rating
    #pragma pack(pop)
    static check_size<sizeof(NoteExecutionRating::Rating), 0 + sizeof(int)> __GlobalNamespace_NoteExecutionRating_RatingSizeCheck;
    static_assert(sizeof(NoteExecutionRating::Rating) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD36740
    // private NoteExecutionRating/Rating <rating>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::NoteExecutionRating::Rating rating;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteExecutionRating::Rating) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD36750
    // private System.Int32 <cutScore>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int cutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD36760
    // private System.Single <cutTimeDeviation>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    float cutTimeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD36770
    // private System.Single <cutDirDeviation>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float cutDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NoteExecutionRating
    NoteExecutionRating(GlobalNamespace::NoteExecutionRating::Rating rating_ = {}, int cutScore_ = {}, float cutTimeDeviation_ = {}, float cutDirDeviation_ = {}) noexcept : rating{rating_}, cutScore{cutScore_}, cutTimeDeviation{cutTimeDeviation_}, cutDirDeviation{cutDirDeviation_} {}
    // public NoteExecutionRating/Rating get_rating()
    // Offset: 0x10EFAC4
    GlobalNamespace::NoteExecutionRating::Rating get_rating();
    // public System.Void set_rating(NoteExecutionRating/Rating value)
    // Offset: 0x10EFACC
    void set_rating(GlobalNamespace::NoteExecutionRating::Rating value);
    // public System.Int32 get_cutScore()
    // Offset: 0x10EFAD4
    int get_cutScore();
    // public System.Void set_cutScore(System.Int32 value)
    // Offset: 0x10EFADC
    void set_cutScore(int value);
    // public System.Single get_cutTimeDeviation()
    // Offset: 0x10EFAE4
    float get_cutTimeDeviation();
    // public System.Void set_cutTimeDeviation(System.Single value)
    // Offset: 0x10EFAEC
    void set_cutTimeDeviation(float value);
    // public System.Single get_cutDirDeviation()
    // Offset: 0x10EFAF4
    float get_cutDirDeviation();
    // public System.Void set_cutDirDeviation(System.Single value)
    // Offset: 0x10EFAFC
    void set_cutDirDeviation(float value);
    // public System.Void .ctor(System.Single time, NoteExecutionRating/Rating rating, System.Int32 cutScore, System.Single cutTimeDeviation, System.Single cutDirDeviation)
    // Offset: 0x10EFB04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteExecutionRating* New_ctor(float time, GlobalNamespace::NoteExecutionRating::Rating rating, int cutScore, float cutTimeDeviation, float cutDirDeviation) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteExecutionRating*, creationType>(time, rating, cutScore, cutTimeDeviation, cutDirDeviation)));
    }
  }; // NoteExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(NoteExecutionRating), 36 + sizeof(float)> __GlobalNamespace_NoteExecutionRatingSizeCheck;
  static_assert(sizeof(NoteExecutionRating) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating*, "", "NoteExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating::Rating, "", "NoteExecutionRating/Rating");
