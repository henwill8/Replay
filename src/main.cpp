#include <dlfcn.h>
#include "main.hpp"
#include "codegen.hpp"
#include "UI.hpp"
#include "../extern/beatsaber-hook/shared/utils/utils.h"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"
#include "../extern/modloader/shared/modloader.hpp"
#include "../extern/beatsaber-hook/shared/utils/typedefs.h"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "../extern/beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"
#include "../extern/questui/shared/QuestUI.hpp"
#include "../extern/questui/shared/BeatSaberUI.hpp"
#include "../extern/bs-utils/shared/utils.hpp"
#include "../extern/custom-types/shared/register.hpp"

#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <list>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <filesystem>

using namespace il2cpp_utils;
using namespace QuestUI;
using namespace GlobalNamespace;
// using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;

Logger& logger() {
    static auto logger = new Logger(modInfo, LoggerOptions(false, true));
    return *logger;
}

#define log(...) logger().info(__VA_ARGS__)

Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

int clip(int n, int lower, int upper) {
    return std::max(lower, std::min(n, upper));
}

std::string csstr(Il2CppString* str) {
    return to_utf8(csstrtostr(str));
}

struct eulerAngleTransform {
    UnityEngine::Vector3 pos;
    UnityEngine::Vector3 rot;
};

struct playerTransformData {
    eulerAngleTransform rightSaber;

    eulerAngleTransform leftSaber;
    
    eulerAngleTransform head;

    void Write(std::ofstream& writer) const {
        writer.write(reinterpret_cast<const char*>(&rightSaber), sizeof(eulerAngleTransform));
        writer.write(reinterpret_cast<const char*>(&leftSaber), sizeof(eulerAngleTransform));
        writer.write(reinterpret_cast<const char*>(&head), sizeof(eulerAngleTransform));
    }
};

struct v1replayKeyFrame {
    float rightSaberPosX;
    float rightSaberPosY;
    float rightSaberPosZ;

    float rightSaberRotX;
    float rightSaberRotY;
    float rightSaberRotZ;

    float leftSaberPosX;
    float leftSaberPosY;
    float leftSaberPosZ;
    
    float leftSaberRotX;
    float leftSaberRotY;
    float leftSaberRotZ;
    
    float headPosX;
    float headPosY;
    float headPosZ;

    float headRotX;
    float headRotY;
    float headRotZ;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
};

struct v4replayKeyFrame {
    playerTransformData playerData;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
    float jumpYOffset;

    void Write(std::ofstream& writer) const {
        playerData.Write(writer);
        
        writer.write(reinterpret_cast<const char*>(&score), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&percent), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rank), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&combo), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&jumpYOffset), sizeof(float));
    }
};

struct replayKeyFrame {
    playerTransformData playerData;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
    float jumpYOffset;
    float energy;

    void Write(std::ofstream& writer) const {
        playerData.Write(writer);
        
        writer.write(reinterpret_cast<const char*>(&score), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&percent), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rank), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&combo), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&jumpYOffset), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&energy), sizeof(float));
    }
};

struct replayBools {
    bool batteryEnergy;
    bool disappearingArrows;
    bool noObstacles;
    bool noBombs;
    bool noArrows;
    bool slowerSong;
    bool noFail;
    bool instafail;
    bool ghostNotes;
    bool fasterSong;
    bool leftHanded;

    void Write(std::ofstream& writer) const {
        writer.write(reinterpret_cast<const char*>(&instafail), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&batteryEnergy), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&ghostNotes), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&disappearingArrows), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&fasterSong), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noFail), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noBombs), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noObstacles), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noArrows), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&slowerSong), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&leftHanded), sizeof(bool));
    }
};

Il2CppObject* playButton = nullptr;
Il2CppObject* restartButton = nullptr;

std::string cameraToggleString = "hmd";

Button* replayButton = nullptr;
Button* cameraToggle = nullptr;
Button* failedReplayButton = nullptr;
Button* failedCameraToggle = nullptr;
Toggle* speedToggle = nullptr;

int replayButtonCount = 0;

TMPro::TextMeshProUGUI* replayText = nullptr;
std::string replayTextCurrent;

TMPro::TextMeshProUGUI* warningText = nullptr;
TMPro::TextMeshProUGUI* failedTimeText = nullptr;

UnityEngine::GameObject* failedTimeSlider = nullptr;
UnityEngine::GameObject* latencySlider = nullptr;

Button* continueButton = nullptr;

bool speedToggleBool = true;

bool recording = true;

bool inSong = false;
bool inSongOrResults = false;

bool failedReplay;
bool deathReplay;

float songTime = 0.0f;
float failedSongTime;
bool failedInReplay;

std::vector<replayKeyFrame> dataToSave;
std::vector<replayKeyFrame> replayData;

void replayButtonOnClick() {
    if(playButton != nullptr) {
        recording = false;
        log("Pressed replay button");
        deathReplay = false;
        RunMethod(playButton, "Press");
    }
}

void failedReplayButtonOnClick() {
    log("Pressed failed replay button");
    if(restartButton != nullptr) {
        recording = false;
        failedReplay = false;
        deathReplay = true;
        log("Setting replay data to dataToSave");
        replayData = dataToSave;
        RunMethod(restartButton, "Press");
    }
}

void cameraToggleOnClick() {
    TMPro::TextMeshProUGUI* buttonTMP = cameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        if(cameraToggleString == "hmd") {
            log("setting text to smooth camera");
            cameraToggleString = "smooth";
            buttonTMP->set_text(createcsstr("Smooth Camera"));
            warningText->get_gameObject()->SetActive(true);
        } else if(cameraToggleString == "smooth") {
            log("setting text to third person");
            cameraToggleString = "thirdPerson";
            buttonTMP->set_text(createcsstr("Third Person"));
            warningText->get_gameObject()->SetActive(true);
        } else if(cameraToggleString == "thirdPerson") {
            log("setting text to normal");
            cameraToggleString = "hmd";
            buttonTMP->set_text(createcsstr("Normal"));
            warningText->get_gameObject()->SetActive(false);
        }
    }
}

void failedCameraToggleOnClick() {
    TMPro::TextMeshProUGUI* buttonTMP = failedCameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        if(cameraToggleString == "hmd") {
            log("setting text to smooth camera");
            cameraToggleString = "smooth";
            buttonTMP->set_text(createcsstr("Smooth Camera"));
        } else if(cameraToggleString == "smooth") {
            log("setting text to third person");
            cameraToggleString = "thirdPerson";
            buttonTMP->set_text(createcsstr("Third Person"));
        } else if(cameraToggleString == "thirdPerson") {
            log("setting text to normal");
            cameraToggleString = "hmd";
            buttonTMP->set_text(createcsstr("Normal"));
        }
    }
}

void speedToggleOnClick(bool newValue) {
    speedToggleBool = newValue;
}

int score;
int maxRawScore;
float percent;
int rank;
float scoreMultiplier = 1.0f;
int combo = 0;
float energy;

int indexNum = 0;

replayBools replaySaveBools;
bool didReach0Energy;
float reached0Time;

float jumpYOffset;
bool gotJumpYOffset = false;

bool reduceDebris = false;

int triggerNode;
float rTriggerVal;
float lTriggerVal;

bool inPauseMenu = false;
bool inResumeAnimation = false;

bool inMulti = false;

float replaySpeed = 1.0f;

UnityEngine::Quaternion smoothCameraRotation;
UnityEngine::Vector3 smoothCameraPosition;

UnityEngine::Vector3 smoothHeadPosition;
UnityEngine::Quaternion smoothHeadRotation;

float positionSmooth;
float rotationSmooth;

UnityEngine::Vector3 smoothPositionOffset;

UnityEngine::Vector3 thirdPersonCamPos;
UnityEngine::Quaternion thirdPersonCamRot;
UnityEngine::Vector3 newThirdPersonCamPos;
UnityEngine::Quaternion newThirdPersonCamRot;
UnityEngine::Vector3 basePrevPos;
UnityEngine::Vector3 basePrevRot;
bool pressedThirdPersonMoveButton = false;

UnityEngine::Vector3 rightSaberPos;
UnityEngine::Vector3 rightSaberRot;
UnityEngine::Vector3 leftSaberPos;
UnityEngine::Vector3 leftSaberRot;

UnityEngine::Transform* leftSaberTransformCache = nullptr;
UnityEngine::Transform* rightSaberTransformCache = nullptr;

UnityEngine::Vector3 lerpedRightHandPosition;
UnityEngine::Quaternion lerpedRightHandRotation;
UnityEngine::Vector3 lerpedLeftHandPosition;
UnityEngine::Quaternion lerpedLeftHandRotation;

UnityEngine::GameObject* customAvatar = nullptr;
UnityEngine::GameObject* playerAvatar = nullptr;

int offset = 0;

bool checkedForQosmetics = false;
bool installedQosmeticsHook = false;
bool qosmeticsIsRunning = false;

bool letChangeSpeed = false;

UnityEngine::Transform* headFollowTransform;

GameplayModifiersModelSO* modifiersModel = nullptr;

replayBools oldModifiers;
bool resetModifiers = false;

FPSCounter* fpsCounter = nullptr;
int fps;

float songStartTime;
float practiceStartTime;
float maxSongTime;

bool setSongTime = false;
float oldSliderTime;

bool levelFailedTextEffect;

bool firstTimeInPause;

bool doneFailedEffect;

GameEnergyUIPanel* gameEnergyUIPanel;
GameEnergyUIPanel* failedEnergyEffect;
float failedEffectTimer;

bool checkedForTricksaber = false;
bool usesTricksaber = false;
UnityEngine::GameObject* leftTrickSaber = nullptr;
UnityEngine::GameObject* rightTrickSaber = nullptr;
UnityEngine::Transform* leftRealModel = nullptr;
UnityEngine::Transform* rightRealModel = nullptr;

std::string songHash;
std::string songName = "";
std::string replayDirectory;
std::string fileExtensionName = ".reqlay";
unsigned char fileHeader[3] = {
    0xa1, 0xd2, 0x45
};
int fileVersion = 5;
int openedFileVersion;

void SaveConfig() {
    if(!getConfig().config.HasMember("OverwriteNFPlays")) {
        log("Creating config");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        getConfig().config.AddMember("PositionSmooth", 2.0f, allocator);
        getConfig().config.AddMember("RotationSmooth", 2.0f, allocator);

        rapidjson::Value SmoothCameraObject(rapidjson::kObjectType);
        SmoothCameraObject.AddMember("x", 0, allocator);
        SmoothCameraObject.AddMember("y", 0, allocator);
        SmoothCameraObject.AddMember("z", -0.7f, allocator);
        getConfig().config.AddMember("SmoothCameraOffset", SmoothCameraObject, allocator);
        
        rapidjson::Value ThirdPersonPosObject(rapidjson::kObjectType);
        ThirdPersonPosObject.AddMember("x", -3, allocator);
        ThirdPersonPosObject.AddMember("y", 1.6f, allocator);
        ThirdPersonPosObject.AddMember("z", -3, allocator);
        getConfig().config.AddMember("ThirdPersonCameraPos", ThirdPersonPosObject, allocator);

        rapidjson::Value ThirdPersonRotObject(rapidjson::kObjectType);
        ThirdPersonRotObject.AddMember("x", 0, allocator);
        ThirdPersonRotObject.AddMember("y", 45, allocator);
        ThirdPersonRotObject.AddMember("z", 0, allocator);
        getConfig().config.AddMember("ThirdPersonCameraRot", ThirdPersonRotObject, allocator);
        
        getConfig().config.AddMember("ThirdPersonCircularMovement", false, allocator);

        getConfig().config.AddMember("FullComboOverwrites", false, allocator);
        getConfig().config.AddMember("DisableVibration", true, allocator);
        getConfig().config.AddMember("Avatars", true, allocator);
        getConfig().config.AddMember("OverwriteNFPlays", true, allocator);

        getConfig().Write();
    } else {
        log("Not creating config");
        getConfig().Load();
    }
}

template<class T>
UnityEngine::GameObject* FindObject(std::string name, bool byParent = false, bool getLastIndex = false, int index = 0) {
    log("Finding GameObject of name "+name);
    Array<T>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<T>();
    log("There are "+std::to_string(trs->Length())+" GameObjects");
    for(int i = 0; i < trs->Length(); i++) {
        if(i != trs->Length()-1 && getLastIndex && index == 0) continue;
        if(i < index && (getLastIndex && index != 0)) continue;
        UnityEngine::GameObject* go = trs->values[i]->get_gameObject();
        if(byParent) {
            go = go->get_transform()->GetParent()->get_gameObject();
        }
        log(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))));
        if(to_utf8(csstrtostr(UnityEngine::Transform::GetName(go))) == name){
            log("Found GameObject");
            return go;
        }
    }
    log("Could not find GameObject");
    return nullptr;
}

template<class T>
UnityEngine::GameObject* FindObjectByIndex(std::string name, bool byParent = false, int index = 0) {
    return FindObject<T>(name, byParent, true, index);
}

template<class T>
T GetFirstEnabledComponent() {
    Array<T>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<T>();
    for(int i = 0; i < trs->Length(); i++) {
        UnityEngine::GameObject* go = trs->values[i]->get_gameObject();
        // log(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))));
        if(go->get_activeInHierarchy() == true){
            return trs->values[i];
        }
    }
    return nullptr;
}

UnityEngine::Matrix4x4 MatrixTranslate(UnityEngine::Vector3 vector) {
	UnityEngine::Matrix4x4 result;
	result.m00 = 1;
	result.m01 = 0;
	result.m02 = 0;
	result.m03 = vector.x;
	result.m10 = 0;
	result.m11 = 1;
	result.m12 = 0;
	result.m13 = vector.y;
	result.m20 = 0;
	result.m21 = 0;
	result.m22 = 1;
	result.m23 = vector.z;
	result.m30 = 0;
	result.m31 = 0;
	result.m32 = 0;
	result.m33 = 1;
	return result;
}

void SetActiveAllChildren(UnityEngine::Transform* transform, bool value) {
    // log("Setting all children to active, child count is "+std::to_string(transform->get_childCount()));
    for(int i = 0; i < transform->get_childCount(); i++) {
        UnityEngine::Transform* child = transform->GetChild(i);
        child->get_gameObject()->SetActive(value);
        SetActiveAllChildren(child, value);
    }
}

bool HasFakeMiss() {
    if((failedReplay || deathReplay) && songTime > failedSongTime-1) {
        return false;
    }

    int amountCheckingEachSide = 2;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        if(replayData[clip(indexNum+i, 0, replayData.size()-1)].combo <= 1) {
            return false;
        }
    }

    return true;
}

float ClosestRealOffset() {
    int amountCheckingEachSide = 10;
    float offset = -1;
    int distance = 100;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        int clippedIndex = clip(indexNum+i, 0, replayData.size()-1);
        if(replayData[clippedIndex].jumpYOffset != -1 && i < distance) {
            offset = replayData[clippedIndex].jumpYOffset;
            distance = i;
        }
    }
    
    return offset;
}

void LoadAvatarData() {
    log("Setting visual avatar data");
    Array<AvatarDataModel*>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<AvatarDataModel*>();
    log("There are "+std::to_string(trs->Length())+" AvatarDataModels");

    AvatarData* data = trs->values[0]->get_avatarData();
    AvatarPartsModel* partsModel = trs->values[0]->avatarPartsModel;
    AvatarVisualController* visualController = customAvatar->GetComponent<GlobalNamespace::AvatarVisualController*>();

    //Changing Avatar Visuals (Meshes and Sprites)
    AvatarMeshPartSO* avatarMeshPartSO = partsModel->get_headTopCollection()->GetById(data->get_headTopId()) != nullptr ? partsModel->get_headTopCollection()->GetById(data->get_headTopId()) : partsModel->get_headTopCollection()->GetDefault();
    visualController->headTopMeshFilter->set_mesh(avatarMeshPartSO->get_mesh());
    AvatarMeshPartSO* avatarMeshPartSO2 = partsModel->get_glassesCollection()->GetById(data->glassesId) != nullptr ? partsModel->get_glassesCollection()->GetById(data->glassesId) : partsModel->get_glassesCollection()->GetDefault();
	visualController->glassesMeshFilter->set_mesh(avatarMeshPartSO2->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO3 = partsModel->get_facialHairCollection()->GetById(data->facialHairId) != nullptr ? partsModel->get_facialHairCollection()->GetById(data->facialHairId) : partsModel->get_facialHairCollection()->GetDefault();
	visualController->facialHairMeshFilter->set_mesh(avatarMeshPartSO3->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO4 = partsModel->get_handsCollection()->GetById(data->handsId) != nullptr ? partsModel->get_handsCollection()->GetById(data->handsId) : partsModel->get_handsCollection()->GetDefault();
	visualController->leftHandsHairMeshFilter->set_mesh(avatarMeshPartSO4->get_mesh());
	visualController->rightHandsHairMeshFilter->set_mesh(avatarMeshPartSO4->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO5 = partsModel->get_clothesCollection()->GetById(data->clothesId) != nullptr ? partsModel->get_clothesCollection()->GetById(data->clothesId) : partsModel->get_clothesCollection()->GetDefault();
	visualController->bodyMeshFilter->set_mesh(avatarMeshPartSO5->get_mesh());
	AvatarSpritePartSO* avatarSpritePartSO = partsModel->get_eyesCollection()->GetById(data->eyesId) != nullptr ? partsModel->get_eyesCollection()->GetById(data->eyesId) : partsModel->get_eyesCollection()->GetDefault();
	visualController->eyesSprite->set_sprite(avatarSpritePartSO->get_sprite());
	AvatarSpritePartSO* avatarSpritePartSO2 = partsModel->get_mouthCollection()->GetById(data->mouthId) != nullptr ? partsModel->get_mouthCollection()->GetById(data->mouthId) : partsModel->get_mouthCollection()->GetDefault();
	visualController->mouthSprite->set_sprite(avatarSpritePartSO2->get_sprite());
    
    log("Successfully set all avatar meshes");

    //Changing Avatar Color
    UnityEngine::Color color = partsModel->GetSkinColorById(data->skinColorId)->color;
	visualController->headTopPropertyBlockColorSetter->SetColors(Array<UnityEngine::Color>::New(
        data->headTopPrimaryColor,
        data->headTopSecondaryColor
    ));
	visualController->glassesPropertyBlockColorSetter->SetColor(data->glassesColor);
	visualController->facialHairPropertyBlockColorSetter->SetColor(color);
	visualController->clothesPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		data->clothesPrimaryColor,
		data->clothesSecondaryColor,
		data->clothesDetailColor
    ));
	visualController->skinPropertyBlockColorSetter->SetColor(color);
	UnityEngine::Color color2 = data->handsColor;
	visualController->leftHandPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		color,
		color2
    ));
	visualController->rightHandPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		color,
		color2
    ));

    log("Successfully set all avatar colors");
}

void CreateReplayFile(std::string songHashID) {
    std::ofstream output(replayDirectory+songHashID+fileExtensionName, std::ios::binary);
    if(output.is_open()) {
        log("Writing replay file at "+replayDirectory+songHashID+fileExtensionName);

        log("Writing magic bytes");
        for(int i = 0; i < 3; i++) {
            output.write(reinterpret_cast<const char*>(&fileHeader[i]), sizeof(unsigned char));
        }

        log("Writing version number");
        output.write(reinterpret_cast<const char*>(&fileVersion), sizeof(int));
        
        log("Failed in replay is %i, failed song time is %f", failedInReplay, failedSongTime);
        output.write(reinterpret_cast<const char*>(&failedInReplay), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&failedSongTime), sizeof(float));

        output.write(reinterpret_cast<const char*>(&replaySaveBools), sizeof(replayBools));
        output.write(reinterpret_cast<const char*>(&didReach0Energy), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&reached0Time), sizeof(float));

        for(const auto& item : dataToSave) {
            item.Write(output);
        }

        output.close();
        log("Successfully wrote file");
    }
}

void GetReplayValues(std::string songHashID) {
    replayData.clear();

    log("Getting replay data...");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    if(input.is_open()) {
        log("Successfully opened replay file at: "+replayDirectory+songHashID+fileExtensionName);

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is "+std::to_string(openedFileVersion));

        replayKeyFrame keyFrameData;
        
        if(openedFileVersion == 1) {
            gotJumpYOffset = false;
            replaySaveBools.instafail = headerBytes[0];
            replaySaveBools.batteryEnergy = headerBytes[1];
            replaySaveBools.ghostNotes = headerBytes[2];
            input.read(reinterpret_cast<char*>(&replaySaveBools.disappearingArrows), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.fasterSong), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noFail), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noBombs), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noObstacles), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noArrows), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.slowerSong), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.leftHanded), sizeof(bool));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v1replayKeyFrame))) {
                keyFrameData.jumpYOffset = 0;
                keyFrameData.playerData.head.rot.x*=90;
                keyFrameData.playerData.head.rot.y*=90;
                keyFrameData.playerData.head.rot.z*=90;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 2) {
            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(replayBools));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 3) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(replayBools));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 4) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(replayBools));
            input.read(reinterpret_cast<char*>(&didReach0Energy), sizeof(bool));
            input.read(reinterpret_cast<char*>(&reached0Time), sizeof(float));

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 5) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(replayBools));
            input.read(reinterpret_cast<char*>(&didReach0Energy), sizeof(bool));
            input.read(reinterpret_cast<char*>(&reached0Time), sizeof(float));

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(replayKeyFrame))) {
                replayData.push_back(keyFrameData);
            }
        } else {
            log("Could not find way to use file version");
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
    log("Finished getting replay data!");
}

void GetFailedReplayTime(std::string songHashID) {
    log("Getting failed replay time");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    if(input.is_open()) {
        log("Successfully opened replay file at: "+replayDirectory+songHashID+fileExtensionName);

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is "+std::to_string(openedFileVersion));

        if(openedFileVersion >= 3) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));
            log("Failed replay time is "+std::to_string(failedSongTime));
        } else {
            failedInReplay = false;
            failedSongTime = 0;
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
}

bool GetNoFail(std::string songHashID) {
    log("Checking if replay uses no fail");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    replayBools tempReplayBools;
    if(input.is_open()) {
        log("Successfully opened replay file at: "+replayDirectory+songHashID+fileExtensionName);

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is "+std::to_string(openedFileVersion));

        if(openedFileVersion >= 3) {
            float tempFloat;
            bool tempBool;
            input.read(reinterpret_cast<char*>(&tempBool), sizeof(bool));
            input.read(reinterpret_cast<char*>(&tempFloat), sizeof(float));
            input.read(reinterpret_cast<char*>(&tempReplayBools), sizeof(replayBools));
        } else {
            tempReplayBools.noFail = false;
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
    log("Replay uses no fail is %i", tempReplayBools.noFail);
    return tempReplayBools.noFail;
}

bool SaveRecording(LevelCompletionResults* levelCompletionResults, bool practice) {
    if(recording && !practice) {
        if(levelCompletionResults->levelEndStateType == 1) {
            log("Level finished, trying to create replay file");
            float storedFailedSongTime = failedSongTime;
            bool storedFailedInReplay = failedInReplay;
            if(fileexists(replayDirectory+songHash+fileExtensionName)) {
                GetFailedReplayTime(songHash);            
            }
            if((!fileexists(replayDirectory+songHash+fileExtensionName)) || (levelCompletionResults->fullCombo && getConfig().config["FullComboOverwrites"].GetBool()) || (fileexists(replayDirectory+songHash+fileExtensionName) && failedInReplay)) {
                if(replaySaveBools.noFail && getConfig().config["OverwriteNFPlays"].GetBool() && fileexists(replayDirectory+songHash+fileExtensionName)) {
                    log("Old play does not use no fail and this play does, not overwriting");
                    return false;
                }
                log("Creating replay as there are no existing replays");
                failedSongTime = -1;
                failedInReplay = false;
                CreateReplayFile(songHash);
                return true;
            } else {
                failedSongTime = storedFailedSongTime;
                failedInReplay = storedFailedInReplay;
                if(GetNoFail(songHash) && getConfig().config["OverwriteNFPlays"].GetBool()) {
                    log("Previous replay uses no fail, overwriting");
                    CreateReplayFile(songHash);
                    return true;
                }

                if(replaySaveBools.noFail && getConfig().config["OverwriteNFPlays"].GetBool()) {
                    log("Old play does not use no fail and this play does, not overwriting");
                    return false;
                }

                log("Checking if this is a higher score than previous");
                replayBools tempBools = replaySaveBools;

                GetReplayValues(songHash);

                log("Getting energy type");
                int energy = 0;
                if(replaySaveBools.batteryEnergy) {
                    energy = 1;
                }

                log("Getting obstacle type");
                int obstacles = 0;
                if(replaySaveBools.noObstacles) {
                    obstacles = 2;
                }

                log("Getting song speed");
                int speed = 0;
                if(replaySaveBools.fasterSong) {
                    speed = 1;
                } else if(replaySaveBools.slowerSong) {
                    speed = 2;
                }

                log("Getting old score modifiers");
                GameplayModifiers* oldScoreModifiers = GameplayModifiers::New_ctor(false, false, energy, replaySaveBools.noFail, replaySaveBools.instafail, false, obstacles, replaySaveBools.noBombs, false, false, replaySaveBools.disappearingArrows, speed, replaySaveBools.noArrows, replaySaveBools.ghostNotes);
                log("Getting old modified score");
                int oldModifiedScore = modifiersModel->GetModifiedScoreForGameplayModifiers(replayData[replayData.size()-1].score, oldScoreModifiers, didReach0Energy ? 0 : 1);
                log("Getting new modified score");
                int newModifiedScore = std::floor(float(score) * scoreMultiplier);
                log("Old score is "+std::to_string(oldModifiedScore)+", new score is "+std::to_string(newModifiedScore));
                if(newModifiedScore > oldModifiedScore) {
                    replaySaveBools = tempBools;
                    CreateReplayFile(songHash);
                    return true;
                } else {
                    return false;
                }
            }
        } else if(levelCompletionResults->levelEndStateType == 2) {
            log("Trying to create failed replay");
            if(!fileexists(replayDirectory+songHash+fileExtensionName)) {
                log("Creating replay as there are no existing replays");
                failedInReplay = true;
                CreateReplayFile(songHash);
                return true;
            } else {
                if(GetNoFail(songHash) && getConfig().config["OverwriteNFPlays"].GetBool()) {
                    log("Previous replay uses no fail, overwriting");
                    failedInReplay = true;
                    CreateReplayFile(songHash);
                    return true;
                }
                float storedTime = failedSongTime;
                GetFailedReplayTime(songHash);
                if(!failedInReplay) {
                    log("There is already a successful replay, not creating failed replay");
                    failedSongTime = storedTime;
                    failedInReplay = true;
                    return false;
                } else if(songTime <= failedSongTime) {
                    failedSongTime = storedTime;
                    failedInReplay = true;
                    log("Existing failed replay lasted longer than current failed replay, not overwriting replay file, time is "+std::to_string(songTime)+", old time is "+std::to_string(failedSongTime));
                    return false;
                } else {
                    failedSongTime = storedTime;
                    failedInReplay = true;
                    log("All requirenments are met, creating failed replay");
                    CreateReplayFile(songHash);
                }
            }
        }
    }
    return false;
}

void GetModifiers(Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, int value = 0) {
    log("Getting modifiers and player settings");

    replayBools temp;

    temp.disappearingArrows = *RunMethod<bool>(gameplayModifiers, "get_disappearingArrows");
    temp.ghostNotes = *RunMethod<bool>(gameplayModifiers, "get_ghostNotes");
    temp.instafail = *RunMethod<bool>(gameplayModifiers, "get_instaFail");
    temp.noArrows = *RunMethod<bool>(gameplayModifiers, "get_noArrows");
    temp.noBombs = *RunMethod<bool>(gameplayModifiers, "get_noBombs");
    temp.noFail = *RunMethod<bool>(gameplayModifiers, "get_noFailOn0Energy");
    temp.leftHanded = *RunMethod<bool>(playerSpecificSettings, "get_leftHanded");

    int songSpeedLevel = *RunMethod<int>(gameplayModifiers, "get_songSpeed");
    temp.slowerSong = false;
    temp.fasterSong = false;
    if(songSpeedLevel == 1) {
        temp.fasterSong = true;
    } else if(songSpeedLevel == 2) {
        temp.slowerSong = true;
    }

    int obstacleNum = *RunMethod<int>(gameplayModifiers, "get_enabledObstacleType");
    if(obstacleNum == 2) {
        temp.noObstacles = true;
    } else {
        temp.noObstacles = false;
    }

    int energyNum = *RunMethod<int>(gameplayModifiers, "get_energyType");
    if(energyNum == 1) {
        temp.batteryEnergy = true;
    } else {
        temp.batteryEnergy = false;
    }

    log("Modifiers are "+std::to_string(temp.batteryEnergy)+" "+std::to_string(temp.disappearingArrows)+" "+std::to_string(temp.ghostNotes)+" "+std::to_string(temp.instafail)+" "+std::to_string(temp.noArrows)+" "+std::to_string(temp.noBombs)+" "+std::to_string(temp.noFail)+" "+std::to_string(temp.noObstacles)+" "+std::to_string(temp.leftHanded)+" "+std::to_string(temp.fasterSong)+" "+std::to_string(temp.slowerSong));

    if(value == 0) {
        replaySaveBools = temp;
        log("Saved modifiers to replaySaveBools");
    } else {
        oldModifiers = temp;
        log("Saved modifiers to oldModifiers");
    }
}

void ResetVariables() {
    log("Resetting variables");
    inSong = true;
    indexNum = 0;
    replaySpeed = 1.0f;
    score = 0;
    rank = 6;
    percent = 1;
    energy = 0.5f;
    jumpYOffset = 0;
    fpsCounter = nullptr;
    qosmeticsIsRunning = false;
    levelFailedTextEffect = false;
    failedEffectTimer = 10;
    firstTimeInPause = true;
    didReach0Energy = false;
    checkedForTricksaber = false;
    usesTricksaber = false;
    resetModifiers = true;
    gameEnergyUIPanel = GetFirstEnabledComponent<GameEnergyUIPanel*>();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();
    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    smoothPositionOffset.y = getConfig().config["SmoothCameraOffset"]["y"].GetFloat();
    smoothPositionOffset.z = getConfig().config["SmoothCameraOffset"]["z"].GetFloat();

    leftTrickSaber = nullptr;
    rightTrickSaber = nullptr;
    leftRealModel = nullptr;
    rightRealModel = nullptr;
    leftSaberTransformCache = nullptr;
    rightSaberTransformCache = nullptr;
    log("Finished resetting variables");
}

void SetSongTimeTo(AudioTimeSyncController* audioSync, float time) {
    audioSync->songTime = time;
    float num = audioSync->songTime + audioSync->songTimeOffset;
    bool flag = num >= 0;
    audioSync->audioSource->set_time(std::max(0.0f, std::min(num, audioSync->audioSource->get_clip()->get_length() - 0.01f)));
    if(audioSync->state == AudioTimeSyncController::State::Playing) {
        if(flag && !audioSync->audioStarted) {
            audioSync->audioSource->Play();
        }
        if(!flag && audioSync->audioStarted) {
            audioSync->audioSource->Stop();
        }
    }
    audioSync->audioStarted = flag;
    audioSync->audioStartTimeOffsetSinceStart = audioSync->get_timeSinceStart() - num;
    audioSync->fixingAudioSyncError = false;
    audioSync->prevAudioSamplePos = (int)((float)audioSync->audioSource->get_clip()->get_frequency() * num);
    audioSync->dspTimeOffset = UnityEngine::AudioSettings::get_dspTime() - (double)num;
}

void SetEnergyState(float newTime) {
    if(!didReach0Energy || reached0Time == 0 || !replaySaveBools.noFail) return;

    UnityEngine::Transform* energyPanel = gameEnergyUIPanel->get_transform();
    SetActiveAllChildren(energyPanel, true);
    energyPanel->Find(createcsstr("Laser"))->get_gameObject()->SetActive(false);
    log("Song time is %f, reached 0 time is %f", newTime, reached0Time);
    if(newTime > reached0Time) {
        log("Setting energy state to failed");
        energyPanel->Find(createcsstr("EnergyBarWrapper"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("EnergyIconEmpty"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("EnergyIconFull"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("BarBG"))->get_gameObject()->SetActive(false);
    } else {
        log("Setting energy state to alive");
        energyPanel->Find(createcsstr("FailIcon"))->get_gameObject()->SetActive(false);
    }
}

MAKE_HOOK_OFFSETLESS(QosmeticsTrail_Update, void, Il2CppObject* self) {
    qosmeticsIsRunning = true;  
    if(!recording) {
        int offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
        int nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

        int lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
        int lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

        float lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);
        if(*RunMethod(leftSaberTransformCache, "get_gameObject") != nullptr) {
            lerpedLeftHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.leftSaber.rot.x, replayData[offsetIndex].playerData.leftSaber.rot.y, replayData[offsetIndex].playerData.leftSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.leftSaber.rot.x, replayData[nextOffsetIndex].playerData.leftSaber.rot.y, replayData[nextOffsetIndex].playerData.leftSaber.rot.z), lerpAmount);
            lerpedLeftHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.leftSaber.pos, replayData[nextOffsetIndex].playerData.leftSaber.pos, lerpAmount);
            
            leftSaberTransformCache->set_position(lerpedLeftHandPosition);
            leftSaberTransformCache->set_rotation(lerpedLeftHandRotation);
        }
        if(*RunMethod(rightSaberTransformCache, "get_gameObject") != nullptr) {
            lerpedRightHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.rightSaber.pos, replayData[nextOffsetIndex].playerData.rightSaber.pos, lerpAmount);
            lerpedRightHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.rightSaber.rot.x, replayData[offsetIndex].playerData.rightSaber.rot.y, replayData[offsetIndex].playerData.rightSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.rightSaber.rot.x, replayData[nextOffsetIndex].playerData.rightSaber.rot.y, replayData[nextOffsetIndex].playerData.rightSaber.rot.z), lerpAmount);
            
            rightSaberTransformCache->set_position(lerpedRightHandPosition);
            rightSaberTransformCache->set_rotation(lerpedRightHandRotation);
        }
    }

    QosmeticsTrail_Update(self);
}

MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, GlobalNamespace::PlayerTransforms* self) {

    // log("PlayerControllerUpdate");

    if(fpsCounter == nullptr) {
        self->get_gameObject()->AddComponent<FPSCounter*>();
        fpsCounter = self->get_gameObject()->GetComponent<FPSCounter*>();
    } else if(fpsCounter->get_currentFPS() < fps-2 && fpsCounter->get_currentFPS() > fps+2 && songTime > 5 && !inPauseMenu) {
        fps = fpsCounter->get_currentFPS();
        log("fps is "+std::to_string(fps));
    }
    
    if(recording) {
        Il2CppObject* headTransform = *GetFieldValue<Il2CppObject*>(self, "_headTransform");
        UnityEngine::Vector3 headPos = *RunMethod<UnityEngine::Vector3>(headTransform, "get_position");
        UnityEngine::Vector3 headRot = *RunMethod<UnityEngine::Vector3>(headTransform, "get_eulerAngles");

        playerTransformData playerTransform {
            eulerAngleTransform {
                rightSaberPos,
                rightSaberRot
            },
            eulerAngleTransform {
                leftSaberPos,
                leftSaberRot,
            },
            eulerAngleTransform {
                headPos,
                headRot
            }
        };

        dataToSave.push_back({
            playerTransform, score, percent, rank, combo, songTime, jumpYOffset, energy
        });
        jumpYOffset = -1;
    } else {
        bool foundCorrectIndex = false;
        while(!foundCorrectIndex) {
            if(indexNum < replayData.size()-1) {
                if(replayData[indexNum].time > songTime) {
                    foundCorrectIndex = true;
                } else if(indexNum < replayData.size()-1) {
                    indexNum++;
                }
            } else {
                foundCorrectIndex = true;
            }
        }

        RunMethod(*GetFieldValue<Il2CppObject*>(self, "_headTransform"), "set_position", replayData[indexNum].playerData.head.pos);
    }

    PlayerController_Update(self);
}

MAKE_HOOK_OFFSETLESS(Saber_ManualUpdate, void, GlobalNamespace::Saber* self) {

    // log("Saber_ManualUpdate %s", to_utf8(csstrtostr(self->get_gameObject()->get_name())).c_str());
    
    int saberType = *RunMethod<int>(self, "get_saberType");
    
    if(recording) {
        if(!checkedForTricksaber && songTime > 0.75f) {
            checkedForTricksaber = true;
            log("Checking for TrickSaber");
            
            UnityEngine::Transform* VRGameCore = self->get_transform()->GetParent()->GetParent();
            for(int i = 0; i < VRGameCore->get_childCount(); i++) {
                UnityEngine::Transform* child = VRGameCore->GetChild(i);
                std::string name = to_utf8(csstrtostr(UnityEngine::Transform::GetName(child)));
                log(name);
                if(name == "trick_saber_LeftSaber_0") {
                    usesTricksaber = true;
                    leftTrickSaber = child->get_gameObject();
                    leftRealModel = self->get_transform()->Find(self->get_name());
                    log("Found left trick saber");
                } else if(name == "trick_saber_RightSaber_1") {
                    usesTricksaber = true;
                    rightTrickSaber = child->get_gameObject();
                    log("Found right trick saber");
                }
            }
        }
        if(checkedForTricksaber && usesTricksaber && rightRealModel == nullptr && saberType == 1) rightRealModel = self->get_transform()->Find(self->get_name());
        if(saberType == 0) {
            Il2CppObject* leftSaberTransform = self->get_transform();
            if(leftTrickSaber != nullptr) {
                if(leftTrickSaber->get_activeInHierarchy()) {
                    leftSaberTransform = leftTrickSaber->get_transform();
                } else if(usesTricksaber) {
                    leftSaberTransform = leftRealModel;
                }
            }
            leftSaberPos = *RunMethod<UnityEngine::Vector3>(leftSaberTransform, "get_position");
            leftSaberRot = *RunMethod<UnityEngine::Vector3>(leftSaberTransform, "get_eulerAngles");
        } else {
            Il2CppObject* rightSaberTransform = self->get_transform();
            if(rightTrickSaber != nullptr) {
                if(rightTrickSaber->get_activeInHierarchy()) {
                    rightSaberTransform = rightTrickSaber->get_transform();
                } else if(usesTricksaber && rightRealModel != nullptr) {
                    rightSaberTransform = rightRealModel;
                }
            }
            rightSaberPos = *RunMethod<UnityEngine::Vector3>(rightSaberTransform, "get_position");
            rightSaberRot = *RunMethod<UnityEngine::Vector3>(rightSaberTransform, "get_eulerAngles");
        }
    } else {
        if(!checkedForQosmetics && !installedQosmeticsHook) {
            checkedForQosmetics = true;
            // try {

            // } catch(Il2CppUtilsException& exception) {
                
            // }
            if(il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0) != nullptr) {
                log("Installing Qosmetics hook");
                INSTALL_HOOK_OFFSETLESS(logger(), QosmeticsTrail_Update, il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0));
                installedQosmeticsHook = true;
            }
        }

        int offsetIndex;
        int nextOffsetIndex;

        int lerpOffsetIndex;
        int lerpNextOffsetIndex;

        float lerpAmount;

        if(!qosmeticsIsRunning) {
            offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
            nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

            lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
            lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

            lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);
        }

        if(saberType == 0) {
            if(!qosmeticsIsRunning) {
                lerpedLeftHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.leftSaber.rot.x, replayData[offsetIndex].playerData.leftSaber.rot.y, replayData[offsetIndex].playerData.leftSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.leftSaber.rot.x, replayData[nextOffsetIndex].playerData.leftSaber.rot.y, replayData[nextOffsetIndex].playerData.leftSaber.rot.z), lerpAmount);
                lerpedLeftHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.leftSaber.pos, replayData[nextOffsetIndex].playerData.leftSaber.pos, lerpAmount);
                
                self->get_transform()->set_position(lerpedLeftHandPosition);
                self->get_transform()->set_rotation(lerpedLeftHandRotation);
            }
            leftSaberTransformCache = self->get_transform();
        } else {
            if(!qosmeticsIsRunning) {
                lerpedRightHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.rightSaber.pos, replayData[nextOffsetIndex].playerData.rightSaber.pos, lerpAmount);
                lerpedRightHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.rightSaber.rot.x, replayData[offsetIndex].playerData.rightSaber.rot.y, replayData[offsetIndex].playerData.rightSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.rightSaber.rot.x, replayData[nextOffsetIndex].playerData.rightSaber.rot.y, replayData[nextOffsetIndex].playerData.rightSaber.rot.z), lerpAmount);
                
                self->get_transform()->set_position(lerpedRightHandPosition);
                self->get_transform()->set_rotation(lerpedRightHandRotation);
            }

            rightSaberTransformCache = self->get_transform();
        }
        if(customAvatar != nullptr && cameraToggleString == "thirdPerson" && getConfig().config["Avatars"].GetBool() && !inPauseMenu) {
            customAvatar->get_transform()->SetParent(self->get_transform()->GetParent()->GetParent()->GetParent());
            customAvatar->get_transform()->set_position(UnityEngine::Vector3{0, 0, 0});
            customAvatar->get_transform()->set_localScale(UnityEngine::Vector3{1, 1, 1});
            customAvatar->SetActive(true);
            GlobalNamespace::AvatarPoseController* poseController = customAvatar->GetComponent<GlobalNamespace::AvatarPoseController*>();

            float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");

            smoothHeadPosition = UnityEngine::Vector3::Lerp(smoothHeadPosition, UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z}, deltaTime * 12);
            smoothHeadRotation = UnityEngine::Quaternion::Slerp(smoothHeadRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].playerData.head.rot.x, replayData[indexNum].playerData.head.rot.y, replayData[indexNum].playerData.head.rot.z), deltaTime * 12);
            
            poseController->UpdateTransforms(
                smoothHeadPosition, 
                lerpedLeftHandPosition,
                lerpedRightHandPosition,
                smoothHeadRotation,
                lerpedLeftHandRotation,
                lerpedRightHandRotation
            );
        }
    }

    Saber_ManualUpdate(self);
}

MAKE_HOOK_OFFSETLESS(BeatmapObjectSpawnMovementData_Update, void, Il2CppObject* self, float bpm, float jumpOffsetY) {
    
    // log("BeatmapObjectSpawnMovementData_Update");

    if(recording) {
        jumpYOffset = jumpOffsetY;
    } else if(gotJumpYOffset) {
        float temp = ClosestRealOffset();
        if(temp != -1) {
            jumpOffsetY = temp;
        }
    }
    // log("Jump Y offset is "+std::to_string(jumpOffsetY));

    BeatmapObjectSpawnMovementData_Update(self, bpm, jumpOffsetY);
}

MAKE_HOOK_OFFSETLESS(SongUpdate, void, AudioTimeSyncController* self) {
    
    // log("SongUpdate");

    UnityEngine::AudioSource* audio = self->audioSource;

    if(!speedToggleBool) {
        letChangeSpeed = true;
    }

    if(speedToggle != nullptr && continueButton != nullptr && inPauseMenu && !recording) {
        if(speedToggle->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted || continueButton->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted || failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"))->get_gameObject()->GetComponent<HMUI::TimeSlider*>()->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Pressed) {
            letChangeSpeed = false;
        }
    }

    if(!recording) {
        if(!speedToggleBool && letChangeSpeed && !inResumeAnimation && !levelFailedTextEffect) {
            if(rTriggerVal > 0.2f) {
                replaySpeed+=rTriggerVal/500;
            }
            if(lTriggerVal > 0.2f) {
                replaySpeed-=lTriggerVal/500;
            }

            if(replaySpeed < 0.01f) {
                replaySpeed = 0.01f;
            }
        }

        if(!inPauseMenu) {
            float roundedReplaySpeed = (float(int(replaySpeed*100)))/100;

            // log("Rounded replay speed is "+std::to_string(roundedReplaySpeed));

            self->timeScale = float(int(replaySpeed*100))/100;
            audio->set_pitch(float(int(replaySpeed*100))/100);
        }
    }

    // log("Song Update, in song or results is "+std::to_string(inSongOrResults));
    if(!inSongOrResults && !inPauseMenu) inSongOrResults = true;

    SongUpdate(self);

    if(!inPauseMenu) {
        songTime = *GetFieldValue<float>(self, "_songTime");
        if(((!failedReplay && !deathReplay) || recording) && songTime != 0 && !levelFailedTextEffect) failedSongTime = songTime;
        if(practiceStartTime == -1 && songTime != 0 && recording) practiceStartTime = songTime;
        if(!recording && replaySaveBools.noFail && didReach0Energy) {
            if(failedEffectTimer <= 0) {
                failedEffectTimer = 10;
                UnityEngine::Object::Destroy(failedEnergyEffect->get_gameObject());
            } else if(failedEffectTimer < 5) {
                failedEffectTimer -= UnityEngine::Time::get_deltaTime();
            }
        }

        if(!recording && resetModifiers) {
            resetModifiers = false;
            log("Getting player settings panel");
            PlayerSettingsPanelController* playerSettingsPanel = FindObject<PlayerSettingsPanelController*>("PlayerOptions")->GetComponent<PlayerSettingsPanelController*>();

            log("Setting left handed");
            PlayerSpecificSettings* playerSettings = playerSettingsPanel->get_playerSpecificSettings();
            playerSettings->leftHanded = oldModifiers.leftHanded;
            playerSettingsPanel->SetData(playerSettings);

            log("Getting energy type");
            int energy = 0;
            if(oldModifiers.batteryEnergy) {
                energy = 1;
            }

            log("Getting obstacle type");
            int obstacles = 0;
            if(oldModifiers.noObstacles) {
                obstacles = 2;
            }

            log("Getting song speed");
            int speed = 0;
            if(oldModifiers.fasterSong) {
                speed = 1;
            } else if(oldModifiers.slowerSong) {
                speed = 2;
            }

            GameplayModifiersPanelController* modifiersPanel = FindObject<GameplayModifiersPanelController*>("GameplayModifiers")->GetComponent<GameplayModifiersPanelController*>();

            log("Getting old score modifiers");
            GameplayModifiers* prevModifiers = GameplayModifiers::New_ctor(false, false, energy, oldModifiers.noFail, oldModifiers.instafail, false, obstacles, oldModifiers.noBombs, false, false, oldModifiers.disappearingArrows, speed, oldModifiers.noArrows, oldModifiers.ghostNotes);
            modifiersPanel->SetData(prevModifiers);
            modifiersPanel->RefreshTotalMultiplierAndRankUI();
        }
    }
}

MAKE_HOOK_OFFSETLESS(SongStart, void, StandardLevelScenesTransitionSetupDataSO* self, Il2CppString* gameMode, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideEnvironmentSettings, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, PlayerSpecificSettings* playerSpecificSettings, Il2CppObject* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {

    log("Song Start "+std::to_string(inSongOrResults));

    ResetVariables();

    if(recording) {
        failedInReplay = false;
        failedReplay = false;
        deathReplay = false;
        practiceStartTime = -1;

        bs_utils::Submission::enable(modInfo);
        setenv("ViewingReplay", "false", 1);

        dataToSave.clear();

        GetModifiers(gameplayModifiers, playerSpecificSettings);
        resetModifiers = false;
    } else {
        log("Entering a replay, camera mode is "+cameraToggleString);

        bs_utils::Submission::disable(modInfo);
        setenv("ViewingReplay", "true", 1);

        GetModifiers(gameplayModifiers, playerSpecificSettings, 1);

        if(!deathReplay) {
            log("Getting replay values");
            GetReplayValues(songHash);
            if(failedInReplay) {
                failedReplay = true;
            }
        }

        log("Setting modifiers to saved values");
        SetFieldValue(gameplayModifiers, "_disappearingArrows", replaySaveBools.disappearingArrows);
        SetFieldValue(gameplayModifiers, "_ghostNotes", replaySaveBools.ghostNotes);
        SetFieldValue(gameplayModifiers, "_instaFail", replaySaveBools.instafail);
        SetFieldValue(gameplayModifiers, "_noArrows", replaySaveBools.noArrows);
        SetFieldValue(gameplayModifiers, "_noBombs", replaySaveBools.noBombs);
        SetFieldValue(gameplayModifiers, "_noFailOn0Energy", replaySaveBools.noFail);
        SetFieldValue(playerSpecificSettings, "_leftHanded", replaySaveBools.leftHanded);
        
        reduceDebris = *GetFieldValue<bool>(playerSpecificSettings, "_reduceDebris");

        if(replaySaveBools.batteryEnergy) {
            SetFieldValue(gameplayModifiers, "_energyType", 1);
        } else {
            SetFieldValue(gameplayModifiers, "_energyType", 0);
        }

        if(replaySaveBools.noObstacles) {
            SetFieldValue(gameplayModifiers, "_enabledObstacleType", 2);
        } else {
            SetFieldValue(gameplayModifiers, "_enabledObstacleType", 0);
        }

        if(replaySaveBools.fasterSong) {
            SetFieldValue(gameplayModifiers, "_songSpeed", 1);
        } else if(replaySaveBools.slowerSong) {
            SetFieldValue(gameplayModifiers, "_songSpeed", 2);
        } else {
            SetFieldValue(gameplayModifiers, "_songSpeed", 0);
        }
    
        replayText = nullptr;
        speedToggle = nullptr;
        continueButton = nullptr;

        if(cameraToggleString == "thirdPerson" && getConfig().config["Avatars"].GetBool()) {
            log("Instantiating customAvatar");
            customAvatar = UnityEngine::Object::Instantiate(playerAvatar);
            customAvatar->SetActive(false);
            UnityEngine::GameObject::SetName(customAvatar, createcsstr("CustomAvatar"));
            LoadAvatarData();
        }
    }

    inPauseMenu = false;

    SongStart(self, gameMode, difficultyBeatmap, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);

    log("Finished song setup");
}

MAKE_HOOK_OFFSETLESS(ScoreChanged, void, Il2CppObject* self, int rawScore, int modifiedScore) {

    // log("Score Changed");
    
    if(!recording && maxRawScore != 0) {
        rawScore = replayData[indexNum].score;
        modifiedScore = rawScore * scoreMultiplier;
    }
 
    ScoreChanged(self, rawScore, modifiedScore);
}

MAKE_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, void, Il2CppObject* self) {
    
    log("Refreshing Content, in song or results is "+std::to_string(inSongOrResults));

    StandardLevelDetailView_RefreshContent(self);

    if(!inSongOrResults) {
        recording = true;
    }

    playButton = *GetFieldValue(self, "_actionButton");    
    UnityEngine::Transform* playButtonTransform = *RunMethod<UnityEngine::Transform*>(playButton, "get_transform");
    
    Il2CppObject* Level = CRASH_UNLESS(*GetFieldValue(self, "_level"));
    Il2CppString* LevelID = CRASH_UNLESS(*GetPropertyValue<Il2CppString*>(Level, "levelID"));

    Il2CppObject* SelectedBeatmapDifficulty = CRASH_UNLESS(*GetFieldValue(self, "_selectedDifficultyBeatmap"));
    int Difficulty = *GetPropertyValue<int>(SelectedBeatmapDifficulty, "difficulty");
    Il2CppObject* beatMapData = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "beatmapData"));
    Il2CppObject* parentDifficultyBeatmapSet = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "parentDifficultyBeatmapSet"));
    Il2CppObject* beatmapCharacteristic = CRASH_UNLESS(*GetPropertyValue(parentDifficultyBeatmapSet, "beatmapCharacteristic"));
    std::string modeName = to_utf8(csstrtostr(*GetFieldValue<Il2CppString*>(beatmapCharacteristic, "_compoundIdPartName")));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;
    if(songHash.find("custom_level_") != std::string::npos) {
        songHash.erase(songHash.begin(), songHash.begin()+13);
    }
    log("Song Hash is "+songHash);
    
    std::string oldExtension = ".questReplayFileForQuestDontTryOnPcAlsoPinkEraAndLillieAreCuteBtwWilliamGay";
    if(fileexists(replayDirectory+"custom_level_"+songHash+oldExtension)) {
        log("Renaming old custom_level_ replay file");
        rename(std::string(replayDirectory+"custom_level_"+songHash+oldExtension).c_str(), std::string(replayDirectory+songHash+fileExtensionName).c_str());
    } else if(fileexists(replayDirectory+songHash+oldExtension)) {
        log("Renaming old file extension");
        rename(std::string(replayDirectory+songHash+oldExtension).c_str(), std::string(replayDirectory+songHash+fileExtensionName).c_str());
    }

    if(warningText != nullptr) {
        UnityEngine::GameObject::Destroy(warningText->get_gameObject());
        warningText = nullptr;
    }
    if(failedTimeText != nullptr) {
        UnityEngine::GameObject::Destroy(failedTimeText->get_gameObject());
        failedTimeText = nullptr;
    }
    if(cameraToggle != nullptr) {
        UnityEngine::GameObject::Destroy(cameraToggle->get_gameObject());
        cameraToggle = nullptr;
    }
    if(replayButton != nullptr) {
        UnityEngine::GameObject::Destroy(replayButton->get_gameObject());
        replayButton = nullptr;
    }

    if(fileexists(replayDirectory+songHash+fileExtensionName) && !inMulti && *RunMethod<bool>(playButton, "get_interactable")) {
        log("Making Replay button");
        UnityEngine::Vector2 buttonsPosition = {-3.5f, -27};
        float buttonsScale = 0.8f;
        UnityEngine::Transform* parent = playButtonTransform->GetParent()->GetParent();

        playButtonTransform->GetParent()->set_localPosition(UnityEngine::Vector3{-1.8f, -52, 0});

        float storedTime = failedSongTime;
        bool storedDidFail = failedInReplay;
        GetFailedReplayTime(songHash);
        if(failedInReplay) {
            log("Creating failed replay text");
            int minutes = std::floor(failedSongTime / 60);
            int seconds = std::floor(failedSongTime - minutes*60);

            std::string minutesString = std::to_string(minutes);
            std::string secondsString = std::to_string(seconds);
            if(seconds < 10) {
                secondsString = "0"+std::to_string(seconds);
            }
            
            std::string failedTimeString = minutesString+":"+secondsString;
            log("Failed at "+failedTimeString);
            failedTimeText = QuestUI::BeatSaberUI::CreateText(parent, " Died at\n"+failedTimeString, true, UnityEngine::Vector2{buttonsPosition.x+55.5f, buttonsPosition.y-0.3f});
            failedTimeText->set_alignment(TMPro::TextAlignmentOptions::Left);
            failedTimeText->set_fontSize(3.4f);
            failedTimeText->set_lineSpacing(-45);
        }
        failedSongTime = storedTime;
        failedInReplay = storedDidFail;

        warningText = QuestUI::BeatSaberUI::CreateText(parent, "Warning: fixed camera view;\nmay cause motion sickness", true, UnityEngine::Vector2{buttonsPosition.x-4.0f, buttonsPosition.y-4.0f});
        warningText->set_alignment(TMPro::TextAlignmentOptions::Center);
        warningText->set_color(UnityEngine::Color{1, 0.1f, 0.05f, 1});
        warningText->set_fontSize(4);
        warningText->set_lineSpacing(-40);
        warningText->get_transform()->set_localEulerAngles(UnityEngine::Vector3{50, 1, 0});
        UnityEngine::Vector3 pos = warningText->get_transform()->get_position();
        pos.z -= 0.45f;
        warningText->get_transform()->set_position(pos);

        std::string tempString;
        if(cameraToggleString == "hmd") {
            tempString = "Normal";
            warningText->get_gameObject()->SetActive(false);
        } else if(cameraToggleString == "smooth") {
            tempString = "Smooth Camera";
        } else if(cameraToggleString == "thirdPerson") {
            tempString = "Third Person";
        }
        cameraToggle = BeatSaberUI::CreateUIButton(
            parent, 
            tempString, 
            UnityEngine::Vector2{buttonsPosition.x-12.85f, buttonsPosition.y}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, cameraToggleOnClick)
        );
        cameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        cameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 9});

        replayButton = BeatSaberUI::CreateUIButton(
            parent, 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{buttonsPosition.x+13.2f, buttonsPosition.y-3.6f}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, replayButtonOnClick)
        );
        replayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        replayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 9});
    } else {
        log("Not making Replay button");
        playButtonTransform->GetParent()->set_localPosition(UnityEngine::Vector3{-1.8f, -55, 0});
    }

    Il2CppObject* songNameText = *GetFieldValue(*GetFieldValue(self, "_levelBar"), "_songNameText");
    songName = to_utf8(csstrtostr(*RunMethod<Il2CppString*>(songNameText, "get_text")));
    log("Song name is "+songName);
}

MAKE_HOOK_OFFSETLESS(StandardLevelDetailViewController_DidActivate, void, Il2CppObject* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    
    log("View Controller did activate");

    StandardLevelDetailViewController_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    playButton = *GetFieldValue(*GetFieldValue(self, "_standardLevelDetailView"), "_actionButton");
    
    UnityEngine::Transform* playButtonTransform = *RunMethod<UnityEngine::Transform*>(playButton, "get_transform");
     
    if(!inMulti) {
        UnityEngine::RectTransform* rectTransform = playButtonTransform->GetParent()->GetParent()->GetParent()->get_gameObject()->GetComponent<UnityEngine::RectTransform*>();
        rectTransform->set_localScale(UnityEngine::Vector3{1, 2, 1});
        playButtonTransform->GetParent()->GetParent()->set_localScale(UnityEngine::Vector3{1, 0.5f, 1});
        playButtonTransform->GetParent()->GetParent()->set_localPosition(UnityEngine::Vector3{0, 13.7f, 0});
    }
}

MAKE_HOOK_OFFSETLESS(GameEnergyCounter_AddEnergy, void, Il2CppObject* self, float value) {
    
    // log("GameEnergyCounter_AddEnergy");

    if(!recording) {
        if(*RunMethod<float>(self, "get_energy")+value < 0.01f && !replaySaveBools.noFail) {
            if(!failedReplay && !deathReplay) {
                log("Stopping energy from being added to stop fail");
                return;
            } else if(songTime < failedSongTime-1) {
                log("Stopping energy from being added to stop fail");
                return;
            }
        }
        
        if(replayData[indexNum].energy != -1) {
            RunMethod(self, "set_energy", replayData[indexNum+3].energy-value);
        }
    } else {
        energy = *RunMethod<float>(self, "get_energy")+value;
    }

    GameEnergyCounter_AddEnergy(self, value);

    if(recording && !didReach0Energy && *GetFieldValue<bool>(self, "_didReach0Energy")) {
        didReach0Energy = *GetFieldValue<bool>(self, "_didReach0Energy");
        reached0Time = songTime;
    }
}

MAKE_HOOK_OFFSETLESS(ScoreControllerLateUpdate, void, Il2CppObject* self) {

    // log("ScoreControllerLateUpdate");

    ScoreControllerLateUpdate(self);

    scoreMultiplier = *GetFieldValue<float>(self, "_gameplayModifiersScoreMultiplier");

    modifiersModel = *GetFieldValue<GameplayModifiersModelSO*>(self, "_gameplayModifiersModel");

    if(indexNum > 2 && !recording) {
        SetFieldValue(self, "_baseRawScore", replayData[indexNum+5].score);
        SetFieldValue(self, "_combo", replayData[indexNum+5].combo);
        maxRawScore = *GetFieldValue<int>(self, "_immediateMaxPossibleRawScore");
    }
    if(recording) {
        score = *GetFieldValue<int>(self, "_baseRawScore");
        combo = *GetFieldValue<int>(self, "_combo");
    }
}

MAKE_HOOK_OFFSETLESS(RefreshRank, void, Il2CppObject* self) {

    // log("RefreshRank");

    Il2CppObject* percentAndRankCounter = *GetFieldValue(self, "_relativeScoreAndImmediateRankCounter");

    if(!recording) {
        RunMethod(percentAndRankCounter, "set_immediateRank", replayData[indexNum].rank);
        RunMethod(percentAndRankCounter, "set_relativeScore", replayData[indexNum].percent);
    }
    
    RefreshRank(self);
}

MAKE_HOOK_OFFSETLESS(RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank, void, Il2CppObject* self, int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore) {

    // log("Score Changed");
 
    RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank(self, score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore);
    
    if(!recording) {
        RunMethod(self, "set_immediateRank", replayData[indexNum].rank);
        RunMethod(self, "set_relativeScore", replayData[indexNum].percent);
    } else {
        percent = *RunMethod<float>(self, "get_relativeScore");
        rank = *RunMethod<int>(self, "get_immediateRank");
    }
}

MAKE_HOOK_OFFSETLESS(Triggers, void, Il2CppObject* self, int node) {

    // log("Triggers");

    if(inSong) {
        triggerNode = node;
    }

    Triggers(self, node);
}

MAKE_HOOK_OFFSETLESS(ControllerUpdate, void, Il2CppObject* self) {

    // log("ControllerUpdate");

    if(inSong) {
        float trigger = *RunMethod<float>(self, "get_triggerValue");

        if (triggerNode == 4) {
            lTriggerVal = trigger;
        }
        if (triggerNode == 5) {
            rTriggerVal = trigger;
        }
    }

    ControllerUpdate(self);
}

MAKE_HOOK_OFFSETLESS(ProgressUpdate, void, GlobalNamespace::SongProgressUIController* self) {
    
    // log("Progress update");

    if(!recording) {
        std::string tempString = std::to_string(replaySpeed);
        tempString.erase(4, tempString.length()-1);
        std::string textToSetTo = tempString+"x Speed";
        if(speedToggleBool && float(int(replaySpeed*100))/100 == 1.00f && replayText != nullptr) {
            if(replayText->get_gameObject()->get_activeInHierarchy()) {
                log("Setting replay text to inactive");
                replayText->get_gameObject()->SetActive(false);
            }
        }

        if(inSong && replayText == nullptr) {
            log("Creating replay text");

            bool getLastIndex = false;
            if(FindObject<MultiplayerController*>("MultiplayerController", false) == nullptr) {
                getLastIndex = true;
            }
            log("Get last index is %i", getLastIndex);
            replayText = QuestUI::BeatSaberUI::CreateText(FindObject<ComboUIController*>("ComboPanel", false, getLastIndex)->get_transform(), textToSetTo, false, UnityEngine::Vector2{0, 110});
            replayTextCurrent = textToSetTo;
            replayText->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>()->set_fontSize(25);
            replayText->get_gameObject()->SetActive(true);
            replayText->set_alignment(TMPro::TextAlignmentOptions::Center);
            UnityEngine::Vector3 currentPosition = replayText->get_transform()->get_position();
            currentPosition.x = 0;
            replayText->get_transform()->set_position(currentPosition);
            log("Finished creating replay text");
        } else if(((inSong && replayTextCurrent != textToSetTo) || (inPauseMenu && !speedToggleBool)) && replayText != nullptr) {
            replayText->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>()->set_text(createcsstr(textToSetTo));
            replayTextCurrent = textToSetTo;
            replayText->get_gameObject()->SetActive(true);
        }
    }
 
    ProgressUpdate(self);
}

MAKE_HOOK_OFFSETLESS(PauseStart, void, Il2CppObject* self) {

    log("PauseStart");

    PauseStart(self);

    inPauseMenu = true;
    setSongTime = true;

    if(!recording) {
        if(failedTimeSlider != nullptr) {
            RunMethod("UnityEngine", "Object", "Destroy", *RunMethod(failedTimeSlider, "get_gameObject"));
            failedTimeSlider = nullptr;
        }

        continueButton = *GetFieldValue<Button*>(self, "_continueButton");
        UnityEngine::Transform* continueButtonTransform = *RunMethod<UnityEngine::Transform*>(continueButton, "get_transform");
        UnityEngine::Transform* parent = continueButtonTransform->GetParent()->GetParent();

        if(firstTimeInPause) {
            log("Creating speed toggle");
            speedToggle = BeatSaberUI::CreateToggle(
                parent,
                "Lock Speed",
                speedToggleBool,
                UnityEngine::Vector2{28.5f, -35},
                il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), (Il2CppObject*)nullptr, speedToggleOnClick)
            );
            UnityEngine::Object::DontDestroyOnLoad(speedToggle);
            UnityEngine::RectTransform* rts = speedToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>();
            UnityEngine::Vector2 currentSizeDelta = rts->get_sizeDelta();
            rts->set_sizeDelta(UnityEngine::Vector2{147, currentSizeDelta.y});
        }

        log("Creating time slider, practice start time is "+std::to_string(practiceStartTime)+", failedSongTime is "+std::to_string(failedSongTime));

        failedTimeSlider = UnityEngine::Object::Instantiate(latencySlider);
        failedTimeSlider->SetActive(true);
        failedTimeSlider->get_transform()->set_parent(parent);
        failedTimeSlider->get_transform()->set_localPosition(UnityEngine::Vector3{-4.55f, -19.5f, 0});
        failedTimeSlider->get_transform()->set_localScale(UnityEngine::Vector3{1.062f, 1.062f, 1.062f});

        failedTimeSlider->get_transform()->Find(createcsstr("VisualMetronome"))->get_gameObject()->SetActive(false);
        UnityEngine::GameObject* sliderText = failedTimeSlider->get_transform()->Find(createcsstr("Text"))->get_gameObject();
        sliderText->GetComponent<TMPro::TextMeshProUGUI*>()->SetText(createcsstr("Song Time"));
        sliderText->get_transform()->set_localPosition(UnityEngine::Vector3{0.8f, 7.2f, 0});

        UnityEngine::Transform* sliderTransform = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"));
        sliderTransform->set_localScale(UnityEngine::Vector3{1, 0.75f, 1});
        sliderTransform->set_localPosition(UnityEngine::Vector3{0, 3.6f, 0});
        sliderTransform->Find(createcsstr("SlidingArea"))->Find(createcsstr("Value"))->set_localScale(UnityEngine::Vector3{0.9f, 0.9f/0.75f, 0.9f});
        HMUI::TimeSlider* slider = sliderTransform->get_gameObject()->GetComponent<HMUI::TimeSlider*>();

        slider->timeType = HMUI::TimeSlider::TimeType::Default;
        int flooredTime = std::floor(songTime);
        slider->set_minValue(std::floor(std::max(0.0f, practiceStartTime)));
        if(failedReplay || deathReplay) {
            slider->set_maxValue(std::max(0.0f, std::floor(failedSongTime-5)));
            slider->set_numberOfSteps(std::max(0.0f, failedSongTime-std::floor(std::max(0.0f, practiceStartTime))-4));
        } else {
            slider->set_maxValue(std::floor(maxSongTime));
            slider->set_numberOfSteps(std::floor(maxSongTime));
        }
        slider->set_value(flooredTime);

        oldSliderTime = slider->get_value();

        if(customAvatar != nullptr && cameraToggleString == "thirdPerson") customAvatar->SetActive(false);

        GetFirstEnabledComponent<AudioTimeSyncController*>()->Pause();
    }

    firstTimeInPause = false;
}

MAKE_HOOK_OFFSETLESS(PauseFinish, void, Il2CppObject* self) {

    log("PauseFinish");

    PauseFinish(self);

    inPauseMenu = false;
    inResumeAnimation = true;
}

MAKE_HOOK_OFFSETLESS(PauseAnimationFinish, void, Il2CppObject* self) {

    log("PauseAnimationFinish");

    PauseAnimationFinish(self);

    inResumeAnimation = false;
}

MAKE_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, void, Il2CppObject* self) {

    log("MenuButtonPressed");

    PauseMenuManager_MenuButtonPressed(self);

    inSongOrResults = false;
    inSong = false;
    recording = true;
    failedReplay = false;
    deathReplay = false;

    log("Set inSongOrResults to false 1 "+std::to_string(inSongOrResults));
}

MAKE_HOOK_OFFSETLESS(ResultsScreenEnd, void, Il2CppObject* self, bool removedFromHierarchy, bool screenSystemDisabling) {

    log("ResultsScreenEnd");

    inSongOrResults = false;

    log("Set inSongOrResults to false 0");

    ResultsScreenEnd(self, removedFromHierarchy, screenSystemDisabling);
}

UnityEngine::Vector3 lerpedAcc;

MAKE_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, void, Il2CppObject* self) {

    // log("LightManager_OnWillRenderObject");

    if(inSong && !inPauseMenu && !recording) {
        UnityEngine::GameObject* cameraGO = UnityEngine::Camera::get_main()->get_gameObject();

        if(to_utf8(csstrtostr(cameraGO->get_name())) == "MainCamera" && cameraToggleString != "hmd") {
            // log("FOV before is "+std::to_string(camera->get_fieldOfView()));
            // typedef function_ptr_t<void, float> type;
            // auto method = *reinterpret_cast<type>(il2cpp_functions::resolve_icall("UnityEngine.XR.XRDevice::set_fovZoomFactor"));
            // if(method != nullptr) method(2.0f);
            // log("FOV after is "+std::to_string(camer->get_fieldOfView()));

            UnityEngine::Camera* camera = cameraGO->GetComponent<UnityEngine::Camera*>();

            OVRPlugin::Vector3f vel = OVRPlugin::GetNodeAngularAcceleration(OVRPlugin::Node::Head, OVRPlugin::Step::Render);
            UnityEngine::Vector3 acceloration = {vel.x, vel.y, vel.z};
            // lerpedAcc = UnityEngine::Vector3::Slerp(lerpedAcc, acceloration * 2, UnityEngine::Time::get_deltaTime() * 10);

            // log("%f %f %f", vel.x, vel.y, vel.z);
            
            UnityEngine::Vector3 prevPos = cameraGO->get_transform()->get_localPosition();
            UnityEngine::Vector3 prevRot = cameraGO->get_transform()->get_localEulerAngles();
            // UnityEngine::Vector3 rotDifference = (oldPrevRot - prevRot);
            // oldPrevRot = prevRot;
            // log("difference is", rotDifference);
            
            if(cameraToggleString == "smooth") {
                float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");

                smoothCameraPosition = UnityEngine::Vector3::Lerp(smoothCameraPosition, UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z}, deltaTime * positionSmooth);
                smoothCameraRotation = UnityEngine::Quaternion::Slerp(smoothCameraRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].playerData.head.rot.x, replayData[indexNum].playerData.head.rot.y, replayData[indexNum].playerData.head.rot.z), deltaTime * rotationSmooth);

                cameraGO->get_transform()->SetPositionAndRotation(smoothCameraPosition, smoothCameraRotation);
                cameraGO->get_transform()->Translate(smoothPositionOffset, UnityEngine::Space::Self);
            } else if(cameraToggleString == "thirdPerson") {
                if(getConfig().config["ThirdPersonCircularMovement"].GetBool()) {
                    float camX = sin((songTime/2)/5)*9;
                    float camY = 2.5f;
                    float camZ = cos((songTime/2)/2.5f)*-3-2.5f;
                    cameraGO->get_transform()->set_position(UnityEngine::Vector3{camX, camY, camZ});

                    // headFollowTransform->set_position(UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z});

                    cameraGO->get_transform()->LookAt(headFollowTransform);
                } else {
                    bool aButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::One, GlobalNamespace::OVRInput::Controller::RTouch);
                    bool bButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::Two, GlobalNamespace::OVRInput::Controller::RTouch);

                    if(aButtonValue || bButtonValue) {
                        pressedThirdPersonMoveButton = true;

                        UnityEngine::Vector3 camRotEuler = prevRot - basePrevRot;

                        cameraGO->get_transform()->set_localRotation(thirdPersonCamRot);
                        cameraGO->get_transform()->Rotate(camRotEuler);

                        cameraGO->get_transform()->set_position(newThirdPersonCamPos);
                        if(aButtonValue) {
                            UnityEngine::Vector3 translation = (prevPos - basePrevPos) / 4.0f;
                            cameraGO->get_transform()->Translate(UnityEngine::Quaternion::Euler(0, -prevRot.y, 0) * translation, UnityEngine::Space::Self);
                        }

                        newThirdPersonCamPos = cameraGO->get_transform()->get_position();
                        newThirdPersonCamRot = cameraGO->get_transform()->get_rotation();
                    } else {
                        if(pressedThirdPersonMoveButton) {
                            thirdPersonCamPos = newThirdPersonCamPos;
                            thirdPersonCamRot = newThirdPersonCamRot;
                        }
                        // UnityEngine::Vector3 noShakeRot = thirdPersonCamRot.get_eulerAngles() + rotDifference;
                        // RunMethod(mainCameraTransform, "SetPositionAndRotation", thirdPersonCamPos, UnityEngine::Quaternion::Euler(thirdPersonCamRot.get_eulerAngles() - (rotDifference*100)));
                        cameraGO->get_transform()->SetPositionAndRotation(thirdPersonCamPos, thirdPersonCamRot);
                        
                        basePrevPos = prevPos;
                        basePrevRot = prevRot;

                        newThirdPersonCamPos = cameraGO->get_transform()->get_position();
                    }
                }
            }

            typedef function_ptr_t<void, UnityEngine::Camera*, UnityEngine::Matrix4x4> cullingMatrixType;
            auto set_cullingMatrix = *reinterpret_cast<cullingMatrixType>(il2cpp_functions::resolve_icall("UnityEngine.Camera::set_cullingMatrix_Injected"));

            set_cullingMatrix(camera, UnityEngine::Matrix4x4::Ortho(-99999, 99999, -99999, 99999, 0.001f, 99999) * MatrixTranslate(UnityEngine::Vector3::get_forward() * -99999 / 2) * camera->get_worldToCameraMatrix());
        }
    }

    LightManager_OnWillRenderObject(self);
}

MAKE_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, void, Il2CppObject* self, int node, Il2CppObject* hapticPreset) {

    // log("HapticFeedbackController_Rumble "+std::to_string(recording));

    if(!recording && inSong && getConfig().config["DisableVibration"].GetBool()) {
        return;
    }

    HapticFeedbackController_Rumble(self, node, hapticPreset);
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_SetDataToUI, void, Il2CppObject* self) {
    
    log("ResultsViewController_SetDataToUI");

    ResultsViewController_SetDataToUI(self);

    int levelEndState = *GetFieldValue<int>(*GetFieldValue(self, "_levelCompletionResults"), "levelEndStateType");

    if(failedReplayButton != nullptr) {
        log("Destroying failed replay button");
        RunMethod("UnityEngine", "Object", "Destroy", failedReplayButton->get_gameObject());
        failedReplayButton = nullptr;
    }

    if(failedCameraToggle != nullptr) {
        log("Destroying failed camera toggle");
        UnityEngine::GameObject::Destroy(failedCameraToggle->get_gameObject());
        failedCameraToggle = nullptr;
    }
    
    if(failedTimeSlider != nullptr) {
        log("Destroying failed time slider");
        RunMethod("UnityEngine", "Object", "Destroy", *RunMethod(failedTimeSlider, "get_gameObject"));
        failedTimeSlider = nullptr;
    }

    if(levelEndState == 2 && (recording || deathReplay)) {
        log("Creating failed replay buttons");

        recording = true;
        failedReplay = false;
        deathReplay = false;

        float buttonsScale = 0.8f;

        restartButton = *GetFieldValue(self, "_restartButton");
        UnityEngine::Transform* restartButtonTransform = *RunMethod<UnityEngine::Transform*>(restartButton, "get_transform");
        UnityEngine::Transform* parent = restartButtonTransform->GetParent()->GetParent()->GetParent();

        failedReplayButton = BeatSaberUI::CreateUIButton(
            parent, 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{17.25f, -32},
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, failedReplayButtonOnClick)
        );
        failedReplayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedReplayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});
        
        std::string tempString;
        if(cameraToggleString == "hmd") {
            tempString = "Normal";
        } else if(cameraToggleString == "smooth") {
            tempString = "Smooth Camera";
        } else if(cameraToggleString == "thirdPerson") {
            tempString = "Third Person";
        }
        failedCameraToggle = BeatSaberUI::CreateUIButton(
            parent,
            tempString, 
            UnityEngine::Vector2{-20.75f, -28},
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, failedCameraToggleOnClick)
        );
        failedCameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedCameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});

        if(failedSongTime-practiceStartTime > 10) {
            log("Creating song start slider, failedSongTime is "+std::to_string(failedSongTime));
            failedTimeSlider = UnityEngine::Object::Instantiate(latencySlider);
            failedTimeSlider->SetActive(true);
            failedTimeSlider->get_transform()->set_parent(parent);
            failedTimeSlider->get_transform()->set_localPosition(UnityEngine::Vector3{-3.5f, -38, 0});
            failedTimeSlider->get_transform()->set_localScale(UnityEngine::Vector3{0.825f, 0.825f, 0.825f});

            failedTimeSlider->get_transform()->Find(createcsstr("VisualMetronome"))->get_gameObject()->SetActive(false);
            UnityEngine::GameObject* sliderText = failedTimeSlider->get_transform()->Find(createcsstr("Text"))->get_gameObject();
            sliderText->GetComponent<TMPro::TextMeshProUGUI*>()->SetText(createcsstr("Song Start Time"));
            sliderText->get_transform()->set_localPosition(UnityEngine::Vector3{0.8f, 7.2f, 0});

            UnityEngine::Transform* sliderTransform = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"));
            sliderTransform->set_localScale(UnityEngine::Vector3{1, 0.75f, 1});
            sliderTransform->set_localPosition(UnityEngine::Vector3{0, 3.6f, 0});
            sliderTransform->Find(createcsstr("SlidingArea"))->Find(createcsstr("Value"))->set_localScale(UnityEngine::Vector3{0.9f, 0.9f/0.75f, 0.9f});
            HMUI::TimeSlider* slider = sliderTransform->get_gameObject()->GetComponent<HMUI::TimeSlider*>();

            slider->timeType = HMUI::TimeSlider::TimeType::Default;
            int flooredTime = std::floor(failedSongTime);
            slider->set_minValue(std::floor(practiceStartTime));
            slider->set_maxValue(flooredTime-5);
            slider->set_numberOfSteps(flooredTime-std::floor(practiceStartTime)-4);
            slider->set_value(flooredTime-10);
            setSongTime = true;
        }
    }
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_Init, void, Il2CppObject* self, GlobalNamespace::LevelCompletionResults* levelCompletionResults, Il2CppObject* difficultyBeatmap, bool practice, bool newHighScore) {
    
    log("ResultsViewController_Init");

    inSong = false;

    SaveRecording(levelCompletionResults, practice);

    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_ContinueButtonPressed, void, Il2CppObject* self) {
    
    log("ResultsViewController_ContinueButtonPressed");

    ResultsViewController_ContinueButtonPressed(self);

    recording = true;
}

MAKE_HOOK_OFFSETLESS(NoteWasMissed, void, Il2CppObject* self) {

    if(!recording && HasFakeMiss()) {
        return;
    }
    
    if((deathReplay || failedReplay) && songTime < songStartTime+0.2f) {
        return;
    }

    NoteWasMissed(self);
}

MAKE_HOOK_OFFSETLESS(NoteWasCut, void, Il2CppObject* self, Il2CppObject* noteCutInfo) {

    bool allIsOk = *RunMethod<bool>(noteCutInfo, "get_allIsOK");
    
    if((deathReplay || failedReplay) && songTime < songStartTime+0.2f && !allIsOk) {
        return;
    }

    if(!recording && !allIsOk && HasFakeMiss()) {
        return;
    }

    NoteWasCut(self, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(NoteDebrisSpawner_SpawnDebris, void, Il2CppObject* self, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, Il2CppObject* colorType, float timeToNextColorNote, UnityEngine::Vector3 moveVec) {

    if(!recording && reduceDebris) {
        return;
    }

    NoteDebrisSpawner_SpawnDebris(self, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, colorType, timeToNextColorNote, moveVec);
}

MAKE_HOOK_OFFSETLESS(MainFlowCoordinator_DidActivate, void, GlobalNamespace::MainFlowCoordinator* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    log("MainFlowCoordinator_DidActivate");

    MainFlowCoordinator_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    if(firstActivation) {
        std::string oldPath = "sdcard/Android/data/com.beatgames.beatsaber/files/replays/";
        replayDirectory = bs_utils::getDataDir(modInfo) + "replays/";
        log("Replay Directory is "+replayDirectory);
        if(System::IO::Directory::Exists(createcsstr(oldPath))) {
            log("Moving old replay files to new location");
            mkpath(const_cast<char*>(replayDirectory.c_str()));
            rename(oldPath.c_str(), replayDirectory.c_str());
        } else if(!System::IO::Directory::Exists(createcsstr(replayDirectory))) {
            log("Creating replay folder");
            mkpath(const_cast<char*>(replayDirectory.c_str()));
        }

        headFollowTransform = UnityEngine::GameObject::New_ctor()->get_transform();
        playerAvatar = FindObject<AvatarPoseController*>("PlayerAvatar", false);
        latencySlider = FindObject<HMUI::TimeSlider*>("Latency", true);
    }

    inMulti = false;
}

MAKE_HOOK_OFFSETLESS(MultiplayerLobbyController_ActivateMultiplayerLobby, void, Il2CppObject* self) {

    MultiplayerLobbyController_ActivateMultiplayerLobby(self);

    log("In multiplayer lobby");

    inMulti = true;
}

MAKE_HOOK_OFFSETLESS(MultiplayerSongStart, void, Il2CppObject* self, Il2CppString* gameMode, IPreviewBeatmapLevel* previewBeatmapLevel, Il2CppObject* beatmapDifficulty, Il2CppObject* beatmapCharacteristic, IDifficultyBeatmap* difficultyBeatmap, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, bool useTestNoteCutSoundEffects) {

    log("Multiplayer Song Start "+std::to_string(inSongOrResults));

    ResetVariables();

    bs_utils::Submission::enable(modInfo);
    
    dataToSave.clear();

    GetModifiers(gameplayModifiers, playerSpecificSettings);
    log("Finished getting modifiers in multiplayer");

    inPauseMenu = false;

    log("Getting level id");
    Il2CppString* LevelID = previewBeatmapLevel->get_levelID();
    log("Getting song difficulty");
    int Difficulty = int(difficultyBeatmap->get_difficulty());
    log("Getting mode name");
    std::string modeName = to_utf8(csstrtostr(*RunMethod<Il2CppString*>(beatmapCharacteristic, "get_compoundIdPartName")));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;
    if(songHash.find("custom_level_") != std::string::npos) {
        log("Erasing custom_level_");
        songHash.erase(songHash.begin(), songHash.begin()+13);
    }
    log("Song hash is "+songHash);

    MultiplayerSongStart(self, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects);
    log("Finished song setup");
}

MAKE_HOOK_OFFSETLESS(MultiplayerLevelFinishedController_HandlePlayerDidFinish, void, Il2CppObject* self, LevelCompletionResults* levelCompletionResults) {

    log("Multiplayer song finished");

    inSong = false;
    inSongOrResults = true;

    SaveRecording(levelCompletionResults, false);

    MultiplayerLevelFinishedController_HandlePlayerDidFinish(self, levelCompletionResults);
}

MAKE_HOOK_OFFSETLESS(LevelFailedTextEffect_ShowEffect, void, Il2CppObject* self) {

    levelFailedTextEffect = true;

    LevelFailedTextEffect_ShowEffect(self);
}

MAKE_HOOK_OFFSETLESS(GameSongController_LateUpdate, void, GameSongController* self) {

    // log("GameSongController_LateUpdate");

    GameSongController_LateUpdate(self);

    maxSongTime = self->get_songLength();

    if(failedTimeSlider != nullptr && !inPauseMenu && !inResumeAnimation && !recording && setSongTime && songTime > 0.01f) {
        if(songTime < 0.1f && !deathReplay) {
            setSongTime = false;
        } else {
            log("Checking to set song time");
            int sliderValue = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"))->get_gameObject()->GetComponent<HMUI::TimeSlider*>()->get_value();

            if(sliderValue == std::floor(oldSliderTime)) {
                setSongTime = false;
            }

            log("Slider is "+std::to_string(sliderValue)+", old slider is "+std::to_string(oldSliderTime));

            if(setSongTime) {
                setSongTime = false;

                if(sliderValue < songTime) {
                    BeatmapObjectManager* objectManager = GetFirstEnabledComponent<ScoreController*>()->beatmapObjectManager;

                    Array<NoteController*>* noteTRS = UnityEngine::Resources::FindObjectsOfTypeAll<NoteController*>();
                    for(int i = 0; i < noteTRS->Length(); i++) {
                        UnityEngine::GameObject* go = noteTRS->values[i]->get_gameObject();
                        if(go->get_activeInHierarchy() == true){
                            objectManager->Despawn(noteTRS->values[i]);
                        }
                    }

                    Array<ObstacleController*>* obstacleTRS = UnityEngine::Resources::FindObjectsOfTypeAll<ObstacleController*>();
                    for(int i = 0; i < obstacleTRS->Length(); i++) {
                        UnityEngine::GameObject* go = obstacleTRS->values[i]->get_gameObject();
                        if(go->get_activeInHierarchy() == true){
                            objectManager->Despawn(obstacleTRS->values[i]);
                        }
                    }
                }
                
                log("Getting objects after skip time");
                auto beatmapLinesData = self->beatmapObjectCallbackController->beatmapData->get_beatmapLinesData();
                auto linesCount = il2cpp_utils::RunMethod<int>(beatmapLinesData, "System.Collections.ICollection.get_Count").value();
                for (int i = 0; i < linesCount; i++) {
                    auto lineData = il2cpp_utils::RunMethod<GlobalNamespace::IReadonlyBeatmapLineData*>(beatmapLinesData, "System.Collections.Generic.IReadOnlyList`1.get_Item", i).value();
                    auto beatmapObjectsInLine = lineData->get_beatmapObjectsData();
                    for (int j = 0; j < reinterpret_cast<System::Collections::Generic::List_1<BeatmapObjectData*>*>(beatmapObjectsInLine)->get_Count(); j++) {
                        if (beatmapObjectsInLine->System_Collections_Generic_IReadOnlyList_1_get_Item(j)->time >= sliderValue) {
                            for (int k = 0; k < self->beatmapObjectCallbackController->beatmapObjectCallbackData->get_Count(); k++) {
                                self->beatmapObjectCallbackController->beatmapObjectCallbackData->get_Item(k)->nextObjectIndexInLine->values[i] = j;
                            }
                            break;
                        }
                    }
                }

                log("Getting events after skip time");
                auto events = self->beatmapObjectCallbackController->beatmapData->get_beatmapEventsData();
                for (int i = 0; i < reinterpret_cast<System::Collections::Generic::List_1<BeatmapEventData*>*>(events)->get_Count(); i++) {
                    auto event = events->System_Collections_Generic_IReadOnlyList_1_get_Item(i);
                    if (event->time >= sliderValue) {
                        for (int j = 0; j < self->beatmapObjectCallbackController->beatmapEventCallbackData->get_Count(); j++) {
                            self->beatmapObjectCallbackController->beatmapEventCallbackData->get_Item(j)->nextEventIndex = i;
                        }
                        self->beatmapObjectCallbackController->nextEventIndex = i;
                        break;
                    }
                }

                log("Setting song time to skip time");
                SetSongTimeTo(self->audioTimeSyncController, sliderValue);
                if(sliderValue > songTime) self->audioTimeSyncController->audioSource->Play();
                log("Successfully set time to skip time");

                for(int i = 0; i < replayData.size(); i++) {
                    if(sliderValue < replayData[0].time) {
                        indexNum = 0;
                        break;
                    }
                    float keyFrameTime = replayData[i].time;
                    float nextKeyFrameTime = replayData[std::min(float(i+1), float(replayData.size()-1))].time;
                    if(keyFrameTime <= sliderValue && nextKeyFrameTime > sliderValue) {
                        indexNum = i;
                        break;
                    }
                }

                log("Setting energy level");
                if(replayData[indexNum].energy != -1) {
                    gameEnergyUIPanel = GetFirstEnabledComponent<GameEnergyUIPanel*>();
                    if(!didReach0Energy || (didReach0Energy && sliderValue < reached0Time)) gameEnergyUIPanel->RefreshEnergyUI(replayData[indexNum].energy);
                    SetEnergyState(sliderValue);
                }

                // Array<NoteCutSoundEffect*>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<NoteCutSoundEffect*>();
                // for(int i = 0; i < trs->Length(); i++) {
                //     // trs->values[i]->set_enabled(true);
                //     bool value = true;
                //     // if(trs->values[i]->get_time() >= sliderValue) {
                //     //     value = true;
                //     // }
                //     trs->values[i]->noteWasCut = !value;
                //     trs->values[i]->set_enabled(value);
                // }
            }
        }
    }
}

MAKE_HOOK_OFFSETLESS(GameEnergyUIPanel_RefreshEnergyUI, void, GameEnergyUIPanel* self, float energy) {

    if(!recording && didReach0Energy && replaySaveBools.noFail) {
        if(songTime < reached0Time) {
            doneFailedEffect = false;
            energy = replayData[indexNum].energy;
        } else if(!doneFailedEffect && songTime < reached0Time+3) {
            log("Simulating a real no fail bail out");
            gameEnergyUIPanel = FindObject<GameEnergyUIPanel*>("EnergyPanel")->GetComponent<GameEnergyUIPanel*>();
            SetEnergyState(songTime);
            failedEnergyEffect = UnityEngine::Object::Instantiate(gameEnergyUIPanel);
            failedEnergyEffect->get_transform()->Find(createcsstr("BG"))->get_gameObject()->SetActive(false);
            failedEnergyEffect->playableDirector->Play();
            failedEffectTimer = 4;
            doneFailedEffect = true;
        }
        if(energy < 0.01f) {
            energy = 0.01f;
        }
    }
    
    GameEnergyUIPanel_RefreshEnergyUI(self, energy);
}

MAKE_HOOK_OFFSETLESS(NoteCutSoundEffectManager_HandleNoteWasSpawned, void, Il2CppObject* self, NoteController* noteController) {

    log("NoteCutSoundEffectManager_HandleNoteWasSpawned");
    
    NoteCutSoundEffectManager_HandleNoteWasSpawned(self, noteController);
}

extern "C" void setup(ModInfo& info) {
    info.id = "Replay";
    info.version = "0.5.0";
    modInfo = info;
    
    getConfig().Load();
    SaveConfig();
}

extern "C" void load() {
    Modloader::requireMod("TrickSaber", "0.3.1");

    QuestUI::Init();

    custom_types::Register::RegisterType<Replay::UIController>();
    QuestUI::Register::RegisterModSettingsViewController<Replay::UIController*>(modInfo, "Replay");

    log("Installing hooks...");
    INSTALL_HOOK_OFFSETLESS(logger(), SongUpdate, il2cpp_utils::FindMethodUnsafe("", "AudioTimeSyncController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), SongStart, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 9));
    INSTALL_HOOK_OFFSETLESS(logger(), BeatmapObjectSpawnMovementData_Update, il2cpp_utils::FindMethodUnsafe("", "BeatmapObjectSpawnMovementData", "Update", 2));
    INSTALL_HOOK_OFFSETLESS(logger(), PlayerController_Update, il2cpp_utils::FindMethodUnsafe("", "PlayerTransforms", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), Saber_ManualUpdate, il2cpp_utils::FindMethodUnsafe("", "Saber", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), ScoreChanged, il2cpp_utils::FindMethodUnsafe("", "ScoreUIController", "UpdateScore", 2));
    INSTALL_HOOK_OFFSETLESS(logger(), StandardLevelDetailView_RefreshContent, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailView", "RefreshContent", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), StandardLevelDetailViewController_DidActivate, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailViewController", "DidActivate", 3));
    INSTALL_HOOK_OFFSETLESS(logger(), GameEnergyCounter_AddEnergy, il2cpp_utils::FindMethodUnsafe("", "GameEnergyCounter", "ProcessEnergyChange", 1));
    INSTALL_HOOK_OFFSETLESS(logger(), ScoreControllerLateUpdate, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "LateUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), RefreshRank, il2cpp_utils::FindMethodUnsafe("", "ImmediateRankUIPanel", "RefreshUI", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank, il2cpp_utils::FindMethodUnsafe("", "RelativeScoreAndImmediateRankCounter", "UpdateRelativeScoreAndImmediateRank", 4));
    INSTALL_HOOK_OFFSETLESS(logger(), Triggers, il2cpp_utils::FindMethodUnsafe("", "VRControllersInputManager", "TriggerValue", 1));
    INSTALL_HOOK_OFFSETLESS(logger(), ControllerUpdate, il2cpp_utils::FindMethodUnsafe("", "VRController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), ProgressUpdate, il2cpp_utils::FindMethodUnsafe("", "SongProgressUIController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), PauseStart, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "ShowMenu", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), PauseFinish, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "StartResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), PauseAnimationFinish, il2cpp_utils::FindMethodUnsafe("", "PauseController", "HandlePauseMenuManagerDidFinishResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), PauseMenuManager_MenuButtonPressed, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "MenuButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), ResultsScreenEnd, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "DidDeactivate", 2));
    INSTALL_HOOK_OFFSETLESS(logger(), LightManager_OnWillRenderObject, il2cpp_utils::FindMethodUnsafe("", "LightManager", "OnWillRenderObject", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), HapticFeedbackController_Rumble, il2cpp_utils::FindMethodUnsafe("", "HapticFeedbackController", "PlayHapticFeedback", 2));
    INSTALL_HOOK_OFFSETLESS(logger(), ResultsViewController_SetDataToUI, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "SetDataToUI", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), ResultsViewController_Init, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "Init", 4));
    INSTALL_HOOK_OFFSETLESS(logger(), ResultsViewController_ContinueButtonPressed, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "ContinueButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), NoteWasMissed, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasMissedEvent", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), NoteWasCut, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasCutEvent", 1));
    INSTALL_HOOK_OFFSETLESS(logger(), NoteDebrisSpawner_SpawnDebris, il2cpp_utils::FindMethodUnsafe("", "NoteDebrisSpawner", "SpawnDebris", 9));
    INSTALL_HOOK_OFFSETLESS(logger(), MainFlowCoordinator_DidActivate, il2cpp_utils::FindMethodUnsafe("", "MainFlowCoordinator", "DidActivate", 3));
    INSTALL_HOOK_OFFSETLESS(logger(), MultiplayerLobbyController_ActivateMultiplayerLobby, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLobbyController", "ActivateMultiplayerLobby", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), MultiplayerSongStart, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLevelScenesTransitionSetupDataSO", "Init", 10));
    INSTALL_HOOK_OFFSETLESS(logger(), MultiplayerLevelFinishedController_HandlePlayerDidFinish, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLevelFinishedController", "HandlePlayerDidFinish", 1));
    INSTALL_HOOK_OFFSETLESS(logger(), LevelFailedTextEffect_ShowEffect, il2cpp_utils::FindMethodUnsafe("", "LevelFailedTextEffect", "ShowEffect", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), GameSongController_LateUpdate, il2cpp_utils::FindMethodUnsafe("", "GameSongController", "LateUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(logger(), GameEnergyUIPanel_RefreshEnergyUI, il2cpp_utils::FindMethodUnsafe("", "GameEnergyUIPanel", "RefreshEnergyUI", 1));
    // INSTALL_HOOK_OFFSETLESS(logger(), NoteCutSoundEffectManager_HandleNoteWasSpawned, il2cpp_utils::FindMethodUnsafe("", "NoteCutSoundEffectManager", "HandleNoteWasSpawned", 1));
    log("Installed all hooks!");
    il2cpp_functions::Init();

    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();

    smoothPositionOffset = UnityEngine::Vector3{getConfig().config["SmoothCameraOffset"]["x"].GetFloat(), getConfig().config["SmoothCameraOffset"]["y"].GetFloat(), getConfig().config["SmoothCameraOffset"]["z"].GetFloat()};

    if(getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat() == -5 && getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat() == 45) {
        getConfig().config["ThirdPersonCameraPos"]["z"].SetFloat(-4);
        getConfig().config["ThirdPersonCameraRot"]["y"].SetFloat(53);
        getConfig().Write();
    }

    thirdPersonCamPos = {getConfig().config["ThirdPersonCameraPos"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat()};
    thirdPersonCamRot = *RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Euler", getConfig().config["ThirdPersonCameraRot"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["z"].GetFloat());
}