// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Random
  class Random : public ::Il2CppObject {
    public:
    // private System.Int32 inext
    // Offset: 0x10
    int inext;
    // private System.Int32 inextp
    // Offset: 0x14
    int inextp;
    // private System.Int32[] SeedArray
    // Offset: 0x18
    ::Array<int>* SeedArray;
    // static field const value: static private System.Int32 MBIG
    static constexpr const int MBIG = 2147483647;
    // Get static field: static private System.Int32 MBIG
    static int _get_MBIG();
    // Set static field: static private System.Int32 MBIG
    static void _set_MBIG(int value);
    // static field const value: static private System.Int32 MSEED
    static constexpr const int MSEED = 161803398;
    // Get static field: static private System.Int32 MSEED
    static int _get_MSEED();
    // Set static field: static private System.Int32 MSEED
    static void _set_MSEED(int value);
    // static field const value: static private System.Int32 MZ
    static constexpr const int MZ = 0;
    // Get static field: static private System.Int32 MZ
    static int _get_MZ();
    // Set static field: static private System.Int32 MZ
    static void _set_MZ(int value);
    // public System.Void .ctor(System.Int32 Seed)
    // Offset: 0x171E380
    static Random* New_ctor(int Seed);
    // protected System.Double Sample()
    // Offset: 0x171E5E4
    double Sample();
    // private System.Int32 InternalSample()
    // Offset: 0x171E608
    int InternalSample();
    // public System.Int32 Next()
    // Offset: 0x171E6A4
    int Next();
    // private System.Double GetSampleForLargeRange()
    // Offset: 0x171E6A8
    double GetSampleForLargeRange();
    // public System.Int32 Next(System.Int32 minValue, System.Int32 maxValue)
    // Offset: 0x171E6F8
    int Next(int minValue, int maxValue);
    // public System.Int32 Next(System.Int32 maxValue)
    // Offset: 0x171E860
    int Next(int maxValue);
    // public System.Void NextBytes(System.Byte[] buffer)
    // Offset: 0x171E964
    void NextBytes(::Array<uint8_t>* buffer);
    // public System.Void .ctor()
    // Offset: 0x171A6CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Random* New_ctor();
  }; // System.Random
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Random*, "System", "Random");
#pragma pack(pop)