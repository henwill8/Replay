#include "../include/UI.hpp"
#include "../include/codegen.hpp"
using namespace QuestUI::BeatSaberUI;
// using namespace UnityEngine::UI;
// using namespace UnityEngine;

#define CreateIncrementMacro(parent, floatConfigValue, name, decimals, increment, hasMin, hasMax, minValue, maxValue) CreateIncrementSetting(parent, name, decimals, increment, floatConfigValue.GetFloat(), hasMin, hasMax, minValue, maxValue, UnityEngine::Vector2{}, [this](float value) { floatConfigValue.SetFloat(value); })

#define CreateToggleMacro(parent, boolConfigValue, name) CreateToggle(parent, name, boolConfigValue.GetBool(), [this](bool newValue) { boolConfigValue.SetBool(newValue);})

DEFINE_TYPE(Replay, UIController);

void Replay::UIController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation)
	{
		UnityEngine::UI::HorizontalLayoutGroup* layout = CreateHorizontalLayoutGroup(get_rectTransform());
		layout->set_spacing(2.5f);
		
		UnityEngine::UI::VerticalLayoutGroup* layout1 = CreateVerticalLayoutGroup(layout->get_rectTransform());
		layout1->set_spacing(1.5f);

		layout1->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));

		UnityEngine::Transform* Parent1 = layout1->get_transform();
		
        AddHoverHint(CreateToggleMacro(Parent1, getConfig().config["DisableVibration"], "Disable Vibrations")->get_gameObject(), "Disables controller vibration during replays");
		AddHoverHint(CreateToggleMacro(Parent1, getConfig().config["FullComboOverwrites"], "Enable FC Overwrite")->get_gameObject(), "Full combo-ing a map will overwrite any existing replay");
		AddHoverHint(CreateToggleMacro(Parent1, getConfig().config["OverwriteNFPlays"], "Overwrite No Fail Plays")->get_gameObject(), "When enabled, this will overwrite any replays that use no fail");
		AddHoverHint(CreateToggleMacro(Parent1, getConfig().config["ThirdPersonCircularMovement"], "Enable Third Person Circular Movement")->get_gameObject(), "Third person camera will be on a camera rig");
		AddHoverHint(CreateToggleMacro(Parent1, getConfig().config["Avatars"], "Enable Replay Avatars")->get_gameObject(), "Your multiplayer avatar will show when in a replay");
        AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["PositionSmooth"], "Position Smooth", 1, 0.1f, true, false, 0.1f, 0.0f)->get_gameObject(), "This is only used for smooth camera, smaller is smoother");
        AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["RotationSmooth"], "Rotation Smooth", 1, 0.1f, true, false, 0.1f, 0.0f)->get_gameObject(), "This is only used for smooth camera, smaller is smoother");
        AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["SmoothCameraOffset"]["y"], "Smooth Camera Y Offset", 1, 0.1f, false, false, 0.1f, 0.0f)->get_gameObject(), "This adds an offset to the Y position for the smooth camera");
        AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["SmoothCameraOffset"]["z"], "Smooth Camera Z Offset", 1, 0.1f, false, false, 0.1f, 0.0f)->get_gameObject(), "This adds an offset to the Z position for the smooth camera, it is recommended to have a bigger offset when using wide (16:9) recording");
    }
}

void Replay::UIController::DidDeactivate(bool removedFromHierarchy, bool systemScreenDisabling)  {
    getConfig().Write();
}