// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CaptureAudioToWav
  class CaptureAudioToWav : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _fileName
    // Offset: 0x18
    ::Il2CppString* fileName;
    // private System.Int32 _sampleRate
    // Offset: 0x20
    int sampleRate;
    // private System.Int32 _headerSize
    // Offset: 0x24
    int headerSize;
    // private System.Boolean _recording
    // Offset: 0x28
    bool recording;
    // private System.IO.FileStream _fileStream
    // Offset: 0x30
    System::IO::FileStream* fileStream;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x102AC10
    void Awake();
    // protected System.Void Update()
    // Offset: 0x102AC48
    void Update();
    // private System.Void StartWriting(System.String name)
    // Offset: 0x102ACF8
    void StartWriting(::Il2CppString* name);
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x102B1A0
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // private System.Void ConvertAndWrite(System.Single[] dataSource)
    // Offset: 0x102B1B0
    void ConvertAndWrite(::Array<float>* dataSource);
    // private System.Void WriteHeader()
    // Offset: 0x102ADBC
    void WriteHeader();
    // public System.Void .ctor()
    // Offset: 0x102B34C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CaptureAudioToWav* New_ctor();
  }; // CaptureAudioToWav
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CaptureAudioToWav*, "", "CaptureAudioToWav");
#pragma pack(pop)
