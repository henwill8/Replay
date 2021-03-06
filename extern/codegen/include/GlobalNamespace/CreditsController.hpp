// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CreditsScenesTransitionSetupDataSO
  class CreditsScenesTransitionSetupDataSO;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: CreditsController
  // [] Offset: FFFFFFFF
  class CreditsController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CreditsController::$ScrollCoroutine$d__12
    class $ScrollCoroutine$d__12;
    // private CreditsScenesTransitionSetupDataSO _creditsSceneSetupDataSO
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneSetupDataSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*) == 0x8);
    // private SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // private UnityEngine.AudioClip _creditsAudioClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioClip* creditsAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.RectTransform _contentRectTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::RectTransform* contentRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Single _overflowHeight
    // Size: 0x4
    // Offset: 0x40
    float overflowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: overflowHeight and: contentWrapper
    char __padding5[0x4] = {};
    // private UnityEngine.RectTransform _contentWrapper
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::RectTransform* contentWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Boolean _didFinish
    // Size: 0x1
    // Offset: 0x58
    bool didFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CreditsController
    CreditsController(GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneSetupDataSO_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, UnityEngine::AudioClip* creditsAudioClip_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::RectTransform* contentRectTransform_ = {}, float overflowHeight_ = {}, UnityEngine::RectTransform* contentWrapper_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, bool didFinish_ = {}) noexcept : creditsSceneSetupDataSO{creditsSceneSetupDataSO_}, songPreviewPlayer{songPreviewPlayer_}, creditsAudioClip{creditsAudioClip_}, continueButton{continueButton_}, contentRectTransform{contentRectTransform_}, overflowHeight{overflowHeight_}, contentWrapper{contentWrapper_}, buttonBinder{buttonBinder_}, didFinish{didFinish_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1044FD4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x104514C
    void OnDestroy();
    // private System.Void Finish()
    // Offset: 0x1045160
    void Finish();
    // private System.Collections.IEnumerator ScrollCoroutine()
    // Offset: 0x10450D0
    System::Collections::IEnumerator* ScrollCoroutine();
    // public System.Void .ctor()
    // Offset: 0x1045220
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsController*, creationType>()));
    }
  }; // CreditsController
  #pragma pack(pop)
  static check_size<sizeof(CreditsController), 88 + sizeof(bool)> __GlobalNamespace_CreditsControllerSizeCheck;
  static_assert(sizeof(CreditsController) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsController*, "", "CreditsController");
