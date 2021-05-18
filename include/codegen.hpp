#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "GlobalNamespace/GameplayModifiersModelSO.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "GlobalNamespace/ScoreController.hpp"
#include "GlobalNamespace/ComboUIController.hpp"
#include "GlobalNamespace/ResultsViewController.hpp"
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/Saber.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "GlobalNamespace/SaberManager.hpp"
#include "GlobalNamespace/MainMenuViewController.hpp"
#include "GlobalNamespace/MainFlowCoordinator.hpp"
#include "GlobalNamespace/EditAvatarFlowCoordinator.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "GlobalNamespace/GameEnergyCounter.hpp"
#include "GlobalNamespace/ImmediateRankUIPanel.hpp"
#include "GlobalNamespace/RelativeScoreAndImmediateRankCounter.hpp"
#include "GlobalNamespace/VRController.hpp"
#include "GlobalNamespace/PauseMenuManager.hpp"
#include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/LevelBar.hpp"
#include "GlobalNamespace/HMTask.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/RectTransform.hpp"
#include "UnityEngine/Rect.hpp"
#include "UnityEngine/HideFlags.hpp"
#include "UnityEngine/DepthTextureMode.hpp"
#include "UnityEngine/GameObject.hpp"
#include "UnityEngine/Object.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/Component.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "GlobalNamespace/PlayerTransforms.hpp"
#include "GlobalNamespace/GameplayModifiersPanelController.hpp"
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/ObstacleController.hpp"
#include "GlobalNamespace/AvatarVisualController.hpp"
#include "GlobalNamespace/AvatarPoseController.hpp"
#include "GlobalNamespace/LevelFailedTextEffect.hpp"
#include "GlobalNamespace/AvatarData.hpp"
#include "GlobalNamespace/AvatarDataModel.hpp"
#include "GlobalNamespace/AvatarMeshPartSO.hpp"
#include "GlobalNamespace/AvatarSpritePartSO.hpp"
#include "GlobalNamespace/AvatarPartsModel.hpp"
#include "GlobalNamespace/FPSCounter.hpp"
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
#include "GlobalNamespace/AvatarPartCollection_1.hpp"
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
#include "GlobalNamespace/AvatarPropertyBlockColorSetter.hpp"
#include "GlobalNamespace/SkinColorSO.hpp"
#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "GlobalNamespace/AudioTimeSyncController_InitData.hpp"
#include "GlobalNamespace/BloomPrePass.hpp"
#include "GlobalNamespace/GameEnergyUIPanel.hpp"
#include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/OVRInput.hpp"
#include "GlobalNamespace/OVRInput_Button.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "TMPro/TextAlignmentOptions.hpp"
#include "UnityEngine/RectTransform.hpp"
#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/AudioSource.hpp"
#include "UnityEngine/Space.hpp"
#include "GlobalNamespace/SongProgressUIController.hpp"
#include "GlobalNamespace/MainCamera.hpp"
#include "GlobalNamespace/VisualEffectsController.hpp"
#include "GlobalNamespace/MainEffectController.hpp"
#include "GlobalNamespace/PlayerSettingsPanelController.hpp"
#include "GlobalNamespace/MainCameraCullingMask.hpp"
#include "GlobalNamespace/MainCameraCullingMask_InitData.hpp"
#include "GlobalNamespace/LayerMasks.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/GameSongController.hpp"
#include "GlobalNamespace/AudioManagerSO.hpp"
#include "GlobalNamespace/BeatmapEventData.hpp"
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
#include "GlobalNamespace/BeatmapObjectCallbackController_InitData.hpp"
#include "GlobalNamespace/BeatmapEventCallbackData.hpp"
#include "GlobalNamespace/BeatmapObjectCallbackData.hpp"
#include "GlobalNamespace/BeatmapObjectData.hpp"
#include "GlobalNamespace/BeatmapObjectManager.hpp"
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "GlobalNamespace/IReadonlyBeatmapLineData.hpp"
#include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "GlobalNamespace/SaberModelController.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
#include "GlobalNamespace/SpawnLaserAnimation.hpp"
#include "GlobalNamespace/SettingsFlowCoordinator.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/MultiplayerController.hpp"
#include "GlobalNamespace/ComboUIController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/OVRManager.hpp"
#include "GlobalNamespace/OVRPlugin.hpp"
#include "GlobalNamespace/OVRPose.hpp"
#include "GlobalNamespace/OVRExtensions.hpp"
#include "GlobalNamespace/OVRPlugin_Node.hpp"
#include "GlobalNamespace/OVRPlugin_Step.hpp"
#include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
#include "GlobalNamespace/MultiplayerLevelScenesTransitionSetupDataSO.hpp"
#include "HMUI/TimeSlider.hpp"
#include "UnityEngine/UI/Slider.hpp"
#include "UnityEngine/UI/Toggle.hpp"
#include "UnityEngine/UI/LayoutElement.hpp"
#include "UnityEngine/Camera.hpp"
#include "UnityEngine/CameraClearFlags.hpp"
#include "UnityEngine/ImageConversion.hpp"
#include "UnityEngine/Texture.hpp"
#include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/RenderTexture.hpp"
#include "UnityEngine/RenderTextureReadWrite.hpp"
#include "UnityEngine/RenderTextureDescriptor.hpp"
#include "UnityEngine/RenderTextureFormat.hpp"
#include "UnityEngine/Graphics.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"
#include "UnityEngine/Events/UnityAction_1.hpp"
#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/RectOffset.hpp"
#include "UnityEngine/Object.hpp"
#include "UnityEngine/AudioSettings.hpp"
#include "UnityEngine/AudioListener.hpp"
#include "UnityEngine/Time.hpp"
#include "UnityEngine/UI/Selectable.hpp"
#include "UnityEngine/UI/Selectable_SelectionState.hpp"
#include "UnityEngine/Renderer.hpp"
#include "UnityEngine/RenderTextureReadWrite.hpp"
#include "UnityEngine/SpriteRenderer.hpp"
#include "UnityEngine/MeshFilter.hpp"
#include "UnityEngine/Bounds.hpp"
#include "UnityEngine/Canvas.hpp"
#include "UnityEngine/StereoTargetEyeMask.hpp"
#include "UnityEngine/Matrix4x4.hpp"
#include "UnityEngine/RenderMode.hpp"
#include "UnityEngine/Material.hpp"
#include "UnityEngine/Rigidbody.hpp"
#include "UnityEngine/AudioClip.hpp"
#include "UnityEngine/Shader.hpp"
#include "UnityEngine/WaitForEndOfFrame.hpp"
#include "UnityEngine/AudioSettings.hpp"
#include "UnityEngine/TextureFormat.hpp"
#include "UnityEngine/Screen.hpp"
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
#include "UnityEngine/Experimental/Rendering/GraphicsFormatUtility.hpp"
#include "UnityEngine/Playables/PlayableDirector.hpp"
#include "System/Nullable_1.hpp"
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Text/StringBuilder.hpp"
#include "UnityEngine/UI/Image.hpp"
#include "UnityEngine/XR/XRDevice.hpp"
#include "System/IO/Directory.hpp"
#include "System/IO/MonoIO.hpp"
#include "System/IO/BinaryWriter.hpp"
#include "System/IO/MemoryStream.hpp"
#include "System/IO/FileStream.hpp"
#include "System/IO/File.hpp"
#include "System/IntPtr.hpp"
#include "System/Threading/Thread.hpp"
#include "System/Action.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeArrayUnsafeUtility.hpp"
#include "Unity/Collections/Allocator.hpp"
#include "Unity/Collections/NativeArray_1.hpp"