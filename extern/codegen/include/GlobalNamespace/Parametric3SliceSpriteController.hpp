// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _widthMultiplier
    // Offset: 0x18
    float widthMultiplier;
    // public System.Single width
    // Offset: 0x1C
    float width;
    // public System.Single length
    // Offset: 0x20
    float length;
    // public System.Single center
    // Offset: 0x24
    float center;
    // public UnityEngine.Color color
    // Offset: 0x28
    UnityEngine::Color color;
    // public System.Single alphaMultiplier
    // Offset: 0x38
    float alphaMultiplier;
    // public System.Single minAlpha
    // Offset: 0x3C
    float minAlpha;
    // public System.Boolean useExponentAlpha
    // Offset: 0x40
    bool useExponentAlpha;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x48
    UnityEngine::MeshRenderer* meshRenderer;
    // private UnityEngine.MeshFilter _meshFilter
    // Offset: 0x50
    UnityEngine::MeshFilter* meshFilter;
    // private System.Boolean _isInitialized
    // Offset: 0x58
    bool isInitialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMaxWidth
    static constexpr const float kMaxWidth = 10;
    // Get static field: static private System.Single kMaxWidth
    static float _get_kMaxWidth();
    // Set static field: static private System.Single kMaxWidth
    static void _set_kMaxWidth(float value);
    // static field const value: static private System.Single kMaxLength
    static constexpr const float kMaxLength = 1000;
    // Get static field: static private System.Single kMaxLength
    static float _get_kMaxLength();
    // Set static field: static private System.Single kMaxLength
    static void _set_kMaxLength(float value);
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get static field: static private UnityEngine.Mesh _mesh
    static UnityEngine::Mesh* _get__mesh();
    // Set static field: static private UnityEngine.Mesh _mesh
    static void _set__mesh(UnityEngine::Mesh* value);
    // Get static field: static private System.Int32 _instanceCount
    static int _get__instanceCount();
    // Set static field: static private System.Int32 _instanceCount
    static void _set__instanceCount(int value);
    // static private System.Void RuntimeInit()
    // Offset: 0x182D858
    static void RuntimeInit();
    // protected System.Void Awake()
    // Offset: 0x182D8E0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x182E014
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x182E094
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x182E348
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x182E404
    void OnDestroy();
    // private System.Void Init()
    // Offset: 0x182DA6C
    void Init();
    // private UnityEngine.Mesh CreateMesh()
    // Offset: 0x182DB0C
    UnityEngine::Mesh* CreateMesh();
    // public System.Void Refresh()
    // Offset: 0x182E128
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x182E4A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Parametric3SliceSpriteController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x182E4C0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Parametric3SliceSpriteController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Parametric3SliceSpriteController*, "", "Parametric3SliceSpriteController");
#pragma pack(pop)
