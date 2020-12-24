#include <dlfcn.h>
#include "main.hpp"
#include "codegen.hpp"
#include "UI.hpp"
#include "logging.hpp"
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
#include <fstream>

using namespace il2cpp_utils;
using namespace QuestUI;
using namespace GlobalNamespace;
// using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;

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
    Vector3 pos;
    Vector3 rot;
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

struct replayKeyFrame {
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

Button* continueButton = nullptr;

bool speedToggleBool = true;

bool recording = true;

bool inSong = false;
bool inSongOrResults = false;

bool failedReplay;

std::vector<replayKeyFrame> dataToSave;

std::vector<replayKeyFrame> replayData;

void replayButtonOnClick() {
    if(playButton != nullptr) {
        recording = false;
        log("Pressed replay button");
        failedReplay = false;
        RunMethod(playButton, "Press");
    }
}

void failedReplayButtonOnClick() {
    if(restartButton != nullptr) {
        replayData = dataToSave;
        recording = false;
        failedReplay = true;
        RunMethod(restartButton, "Press");
        log("Pressed failed replay button");
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

float songTime = 0.0f;

int score;
int maxRawScore;
float percent;
int rank;
float scoreMultiplier = 1.0f;
int combo = 0;

int indexNum = 0;

replayBools replaySaveBools;

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

Vector3 thirdPersonCamPos;
UnityEngine::Quaternion thirdPersonCamRot;
Vector3 newThirdPersonCamPos;
UnityEngine::Quaternion newThirdPersonCamRot;
Vector3 basePrevPos;
UnityEngine::Vector3 basePrevRot;
bool pressedThirdPersonMoveButton = false;

Vector3 rightSaberPos;
Vector3 rightSaberRot;
Vector3 leftSaberPos;
Vector3 leftSaberRot;

UnityEngine::Transform* leftSaberTransformCache = nullptr;
UnityEngine::Transform* rightSaberTransformCache = nullptr;

UnityEngine::Vector3 lerpedRightHandPosition;
UnityEngine::Quaternion lerpedRightHandRotation;
UnityEngine::Vector3 lerpedLeftHandPosition;
UnityEngine::Quaternion lerpedLeftHandRotation;

UnityEngine::GameObject* customAvatar = nullptr;
UnityEngine::GameObject* playerAvatar = nullptr;
UnityEngine::GameObject* customCamera = nullptr;

int offset = 0;

bool installedQosmeticsHook = false;

bool letChangeSpeed = false;

UnityEngine::Transform* headFollowTransform;

GameplayModifiersModelSO* modifiersModel = nullptr;

std::string songHash;
std::string songName = "";
std::string replayDirectory = "sdcard/Android/data/com.beatgames.beatsaber/files/replays/";
std::string fileExtensionName = ".questReplayFileForQuestDontTryOnPcAlsoPinkEraAndLillieAreCuteBtwWilliamGay";
unsigned char fileHeader[3] = {
    0xa1, 0xd2, 0x45
};
int fileVersion = 2;
int openedFileVersion;

void SaveConfig() {
    if(!getConfig().config.HasMember("SaberTimeOffset")) {
        log("Creating config");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        getConfig().config.AddMember("PositionSmooth", 2.0f, allocator);
        getConfig().config.AddMember("RotationSmooth", 2.0f, allocator);

        rapidjson::Value SmoothCameraObject(rapidjson::kObjectType);
        SmoothCameraObject.AddMember("x", 0, allocator);
        SmoothCameraObject.AddMember("y", 0, allocator);
        SmoothCameraObject.AddMember("z", -0.75f, allocator);
        getConfig().config.AddMember("SmoothCameraOffset", SmoothCameraObject, allocator);
        
        rapidjson::Value ThirdPersonPosObject(rapidjson::kObjectType);
        ThirdPersonPosObject.AddMember("x", -3, allocator);
        ThirdPersonPosObject.AddMember("y", 1.6f, allocator);
        ThirdPersonPosObject.AddMember("z", -5, allocator);
        getConfig().config.AddMember("ThirdPersonCameraPos", ThirdPersonPosObject, allocator);

        rapidjson::Value ThirdPersonRotObject(rapidjson::kObjectType);
        ThirdPersonRotObject.AddMember("x", 0, allocator);
        ThirdPersonRotObject.AddMember("y", 45, allocator);
        ThirdPersonRotObject.AddMember("z", 0, allocator);
        getConfig().config.AddMember("ThirdPersonCameraRot", ThirdPersonRotObject, allocator);
        
        getConfig().config.AddMember("ThirdPersonCircularMovement", false, allocator);

        getConfig().config.AddMember("FullComboOverwrites", false, allocator);
        getConfig().config.AddMember("DisableVibration", true, allocator);
        getConfig().config.AddMember("Avatars", false, allocator);
        getConfig().config.AddMember("SaberTimeOffset", offset, allocator);

        getConfig().Write();
    } else {
        log("Not creating config");
        getConfig().Load();
    }
}

void createReplayFile(std::string songHashID) {
    std::ofstream output(replayDirectory+songHashID+fileExtensionName, std::ios::binary);
    if(output.is_open()) {
        log("Writing replay file at "+replayDirectory+songHashID+fileExtensionName);

        log("Writing magic bytes");
        for(int i = 0; i < 3; i++) {
            output.write(reinterpret_cast<const char*>(&fileHeader[i]), sizeof(unsigned char));
        }

        log("Writing version number");
        output.write(reinterpret_cast<const char*>(&fileVersion), sizeof(int));

        output.write(reinterpret_cast<const char*>(&replaySaveBools), sizeof(replayBools));

        for(const auto& item : dataToSave) {
            item.Write(output);
        }

        output.close();
        log("Successfully wrote file");
    }
}

void getReplayValues(std::string songHashID) {
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

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v1replayKeyFrame))) {
                keyFrameData.jumpYOffset = 0;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 2) {
            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(replayBools));

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

bool hasFakeMiss() {
    int amountCheckingEachSide = 2;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        if(replayData[clip(indexNum+i, 0, replayData.size()-1)].combo <= 1) {
            return false;
        }
    }

    return true;
}

float closestRealOffset() {
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

UnityEngine::GameObject* FindObject(std::string name) {
    log("Finding GameObject of name "+name);
    Array<UnityEngine::GameObject*>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<UnityEngine::GameObject*>();
    log("There are "+std::to_string(trs->Length())+" GameObjects");
    for(int i = 0; i < trs->Length(); i++) {
        // log(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))));
        if(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))) == name){
            log("Found GameObject");
            return trs->values[i];
        }
    }
    log("Could not find GameObject");
    return nullptr;
}

void loadAvatarData() {
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

Vector3 addVector3(Vector3 a, Vector3 b) {
    return Vector3{a.x + b.x, a.y + b.y, a.z + b.z};
}

Vector3 subtractVector3(Vector3 a, Vector3 b) {
    return Vector3{a.x - b.x, a.y - b.y, a.z - b.z};
}

Vector3 divideVector3ByFloat(Vector3 a, float b) {
    return Vector3{a.x / b, a.y / b, a.z / b};
}

Quaternion addQuaternion(Quaternion a, Quaternion b) {
    return Quaternion{a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w};
}

Quaternion eulerToQuaternion(Vector3 euler) {
    Quaternion tempQuaternion = {0, 0, 0, 0};
    tempQuaternion.x = sin(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) - cos(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    tempQuaternion.y = cos(euler.x/2) * sin(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * cos(euler.y/2) * sin(euler.z/2);
    tempQuaternion.z = cos(euler.x/2) * cos(euler.y/2) * sin(euler.z/2) - sin(euler.x/2) * sin(euler.y/2) * cos(euler.z/2);
    tempQuaternion.w = cos(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    return tempQuaternion;
}

bool saveRecording(LevelCompletionResults* levelCompletionResults, bool practice) {
    if(recording && levelCompletionResults->levelEndStateType == 1 && !practice) {
        log("Level finished, trying to create replay file");
        if((!fileexists(replayDirectory+songHash+fileExtensionName)) || (levelCompletionResults->fullCombo && getConfig().config["FullComboOverwrites"].GetBool())) {
            log("Creating replay as there are no existing replays");
            createReplayFile(songHash);
            return true;
        } else {
            log("Checking if this is a higher score then previous");

            replayBools tempBools = replaySaveBools;

            getReplayValues(songHash);

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
            int oldModifiedScore = modifiersModel->GetModifiedScoreForGameplayModifiers(replayData[replayData.size()-1].score, oldScoreModifiers);
            log("Getting new modified score");
            int newModifiedScore = std::floor(float(score) * scoreMultiplier);
            log("Old score is "+std::to_string(oldModifiedScore)+", new score is "+std::to_string(newModifiedScore));
            if(newModifiedScore > oldModifiedScore) {
                replaySaveBools = tempBools;
                createReplayFile(songHash);
                return true;
            }
        }
    }
    return false;
}

void getModifiers(Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings) {
    log("Getting modifiers and player settings");
    replaySaveBools.disappearingArrows = *RunMethod<bool>(gameplayModifiers, "get_disappearingArrows");
    replaySaveBools.ghostNotes = *RunMethod<bool>(gameplayModifiers, "get_ghostNotes");
    replaySaveBools.instafail = *RunMethod<bool>(gameplayModifiers, "get_instaFail");
    replaySaveBools.noArrows = *RunMethod<bool>(gameplayModifiers, "get_noArrows");
    replaySaveBools.noBombs = *RunMethod<bool>(gameplayModifiers, "get_noBombs");
    replaySaveBools.noFail = *RunMethod<bool>(gameplayModifiers, "get_noFail");
    replaySaveBools.leftHanded = *RunMethod<bool>(playerSpecificSettings, "get_leftHanded");

    int songSpeedLevel = *RunMethod<int>(gameplayModifiers, "get_songSpeed");
    replaySaveBools.slowerSong = false;
    replaySaveBools.fasterSong = false;
    if(songSpeedLevel == 1) {
        replaySaveBools.fasterSong = true;
    } else if(songSpeedLevel == 2) {
        replaySaveBools.slowerSong = true;
    }

    int obstacleNum = *RunMethod<int>(gameplayModifiers, "get_enabledObstacleType");
    if(obstacleNum == 2) {
        replaySaveBools.noObstacles = true;
    } else {
        replaySaveBools.noObstacles = false;
    }

    int energyNum = *RunMethod<int>(gameplayModifiers, "get_energyType");
    if(energyNum == 1) {
        replaySaveBools.batteryEnergy = true;
    } else {
        replaySaveBools.batteryEnergy = false;
    }

    log("Modifiers are "+std::to_string(replaySaveBools.batteryEnergy)+" "+std::to_string(replaySaveBools.disappearingArrows)+" "+std::to_string(replaySaveBools.ghostNotes)+" "+std::to_string(replaySaveBools.instafail)+" "+std::to_string(replaySaveBools.noArrows)+" "+std::to_string(replaySaveBools.noBombs)+" "+std::to_string(replaySaveBools.noFail)+" "+std::to_string(replaySaveBools.noObstacles)+" "+std::to_string(replaySaveBools.leftHanded)+" "+std::to_string(replaySaveBools.fasterSong)+" "+std::to_string(replaySaveBools.slowerSong));
}

MAKE_HOOK_OFFSETLESS(QosmeticsTrail_Update, void, Il2CppObject* self) {    
    if(!recording) {
        int offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
        int nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

        int lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
        int lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

        float lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);
        if(leftSaberTransformCache != nullptr) {
            lerpedLeftHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.leftSaber.rot.x, replayData[offsetIndex].playerData.leftSaber.rot.y, replayData[offsetIndex].playerData.leftSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.leftSaber.rot.x, replayData[nextOffsetIndex].playerData.leftSaber.rot.y, replayData[nextOffsetIndex].playerData.leftSaber.rot.z), lerpAmount);
            lerpedLeftHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.leftSaber.pos, replayData[nextOffsetIndex].playerData.leftSaber.pos, lerpAmount);
            
            leftSaberTransformCache->set_position(lerpedLeftHandPosition);
            leftSaberTransformCache->set_rotation(lerpedLeftHandRotation);
        }
        if(rightSaberTransformCache != nullptr) {
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
    
    if(recording) {
        Vector3 headPos = *GetFieldValue<Vector3>(self, "_headPos");
        Vector3 headRot = *RunMethod<Vector3>(*GetFieldValue<Il2CppObject*>(self, "_headTransform"), "get_eulerAngles");

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
            playerTransform, score, percent, rank, combo, songTime, jumpYOffset
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

        SetFieldValue(self, "_headPos", replayData[indexNum].playerData.head.pos);
        RunMethod(*GetFieldValue<Il2CppObject*>(self, "_headTransform"), "set_localPosition", replayData[indexNum].playerData.head.pos);
    }

    PlayerController_Update(self);
}

MAKE_HOOK_OFFSETLESS(Saber_ManualUpdate, void, GlobalNamespace::Saber* self) {

    // log("Saber_ManualUpdate");
    
    int saberType = *RunMethod<int>(self, "get_saberType");
    
    if(recording) {
        if(saberType == 0) {
            Il2CppObject* leftSaberTransform = self->get_transform();
            leftSaberPos = *RunMethod<Vector3>(leftSaberTransform, "get_position");
            leftSaberRot = *RunMethod<Vector3>(leftSaberTransform, "get_eulerAngles");
        } else {
            Il2CppObject* rightSaberTransform = self->get_transform();
            rightSaberPos = *RunMethod<Vector3>(rightSaberTransform, "get_position");
            rightSaberRot = *RunMethod<Vector3>(rightSaberTransform, "get_eulerAngles");
        }
    } else {
        if(il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0) != nullptr && !installedQosmeticsHook) {
            log("Installing Qosmetics hook");
            INSTALL_HOOK_OFFSETLESS(QosmeticsTrail_Update, il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0));
            installedQosmeticsHook = true;
        }

        int offsetIndex;
        int nextOffsetIndex;

        int lerpOffsetIndex;
        int lerpNextOffsetIndex;

        float lerpAmount;

        if(!installedQosmeticsHook) {
            offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
            nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

            lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
            lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

            lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);
        }

        if(saberType == 0) {
            if(!installedQosmeticsHook) {
                lerpedLeftHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.leftSaber.rot.x, replayData[offsetIndex].playerData.leftSaber.rot.y, replayData[offsetIndex].playerData.leftSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.leftSaber.rot.x, replayData[nextOffsetIndex].playerData.leftSaber.rot.y, replayData[nextOffsetIndex].playerData.leftSaber.rot.z), lerpAmount);
                lerpedLeftHandPosition = *RunMethod<UnityEngine::Vector3>("UnityEngine", "Vector3", "Lerp", replayData[offsetIndex].playerData.leftSaber.pos, replayData[nextOffsetIndex].playerData.leftSaber.pos, lerpAmount);
                
                self->get_transform()->set_position(lerpedLeftHandPosition);
                self->get_transform()->set_rotation(lerpedLeftHandRotation);
            }

            leftSaberTransformCache = self->get_transform();
        } else {
            if(!installedQosmeticsHook) {
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
        float temp = closestRealOffset();
        if(temp != -1) {
            jumpOffsetY = temp;
        }
    }
    // log("Jump Y offset is "+std::to_string(jumpOffsetY));

    BeatmapObjectSpawnMovementData_Update(self, bpm, jumpOffsetY);
}

MAKE_HOOK_OFFSETLESS(SongUpdate, void, Il2CppObject* self) {
    
    // log("SongUpdate");

    if(!speedToggleBool) {
        letChangeSpeed = true;
    }

    if(speedToggle != nullptr && continueButton != nullptr && inPauseMenu && !recording) {
        if(speedToggle->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted || continueButton->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted) {
            letChangeSpeed = false;
        }
    }

    if(!recording && !speedToggleBool && letChangeSpeed && !inResumeAnimation) {
        if(rTriggerVal > 0.2f) {
            replaySpeed+=rTriggerVal/500;
        }
        if(lTriggerVal > 0.2f) {
            replaySpeed-=lTriggerVal/500;
        }

        if(replaySpeed < 0.01f) {
            replaySpeed = 0.01f;
        }
        
        if(!inPauseMenu) {
            float roundedReplaySpeed = (float(int(replaySpeed*100)))/100;

            // log("Rounded replay speed is "+std::to_string(roundedReplaySpeed));

            SetFieldValue(self, "_timeScale", (float(int(replaySpeed*100)))/100);
            Il2CppObject* audioSource = *GetFieldValue(self, "_audioSource");
            RunMethod(audioSource, "set_pitch", (float(int(replaySpeed*100)))/100);
        }
    }

    // log("Song Update, in song or results is "+std::to_string(inSongOrResults));
    if(!inSongOrResults && !inPauseMenu) inSongOrResults = true;

    SongUpdate(self);

    songTime = *il2cpp_utils::GetFieldValue<float>(self, "_songTime");
}

MAKE_HOOK_OFFSETLESS(SongStart, void, StandardLevelScenesTransitionSetupDataSO* self, Il2CppString* gameMode, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideEnvironmentSettings, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {

    log("Song Start "+std::to_string(inSongOrResults));

    inSong = true;
    indexNum = 0;
    replaySpeed = 1.0f;
    score = 0;
    offset = getConfig().config["SaberTimeOffset"].GetInt();
    jumpYOffset = 0;

    leftSaberTransformCache = nullptr;
    rightSaberTransformCache = nullptr;

    if(recording) {
        bs_utils::Submission::enable(modInfo);
    } else {
        bs_utils::Submission::disable(modInfo);
    }
    
    if(recording) {
        dataToSave.clear();

        getModifiers(gameplayModifiers, playerSpecificSettings);
    } else {
        if(!failedReplay) {
            getReplayValues(songHash);
        }

        SetFieldValue(gameplayModifiers, "_disappearingArrows", replaySaveBools.disappearingArrows);
        SetFieldValue(gameplayModifiers, "_ghostNotes", replaySaveBools.ghostNotes);
        SetFieldValue(gameplayModifiers, "_instaFail", replaySaveBools.instafail);
        SetFieldValue(gameplayModifiers, "_noArrows", replaySaveBools.noArrows);
        SetFieldValue(gameplayModifiers, "_noBombs", replaySaveBools.noBombs);
        SetFieldValue(gameplayModifiers, "_noFail", replaySaveBools.noFail);
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
        customCamera = nullptr;

        if(cameraToggleString == "thirdPerson" && getConfig().config["Avatars"].GetBool()) {
            customAvatar = UnityEngine::Object::Instantiate(playerAvatar);
            customAvatar->SetActive(false);
            UnityEngine::GameObject::SetName(customAvatar, createcsstr("CustomAvatar"));
            loadAvatarData();
        }
    }

    inPauseMenu = false;

    SongStart(self, gameMode, difficultyBeatmap, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);
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

    Il2CppObject* PlayerData = CRASH_UNLESS(*GetFieldValue(self, "_playerData"));
    Il2CppObject* playerLevelStatsData = CRASH_UNLESS(*RunMethod(PlayerData, "GetPlayerLevelStatsData", LevelID, Difficulty, beatmapCharacteristic));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;

    if(warningText != nullptr) {
        UnityEngine::GameObject::Destroy(warningText->get_gameObject());
        warningText = nullptr;
    }
    if(cameraToggle != nullptr) {
        UnityEngine::GameObject::Destroy(cameraToggle->get_gameObject());
        cameraToggle = nullptr;
    }
    if(replayButton != nullptr) {
        UnityEngine::GameObject::Destroy(replayButton->get_gameObject());
        replayButton = nullptr;
    }

    if(fileexists(replayDirectory+songHash+fileExtensionName) && !inMulti) {
        log("Making Replay button");
        UnityEngine::Vector2 buttonsPosition = {-3.5f, -32};
        float buttonsScale = 0.8f;
        UnityEngine::Transform* parent = playButtonTransform->GetParent()->GetParent();

        warningText = QuestUI::BeatSaberUI::CreateText(parent, "Warning: fixed camera view;\nmay cause motion sickness", true, UnityEngine::Vector2{buttonsPosition.x, buttonsPosition.y-9});
        warningText->set_alignment(TMPro::TextAlignmentOptions::Center);
        warningText->set_color(UnityEngine::Color{1, 0.1f, 0.05f, 1});
        warningText->set_lineSpacing(3);

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
            UnityEngine::Vector2{buttonsPosition.x-13, buttonsPosition.y}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, cameraToggleOnClick)
        );
        cameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        cameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 10});

        replayButton = BeatSaberUI::CreateUIButton(
            parent, 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{buttonsPosition.x+13, buttonsPosition.y-4}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, replayButtonOnClick)
        );
        replayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        replayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 10});
    } else {
        log("Not making Replay button");
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

    if(!recording && !failedReplay && *RunMethod<float>(self, "get_energy")+value < 0.01f) {
        return;
    }

    GameEnergyCounter_AddEnergy(self, value);
}

MAKE_HOOK_OFFSETLESS(ScoreControllerLateUpdate, void, Il2CppObject* self) {

    // log("ScoreControllerLateUpdate");

    ScoreControllerLateUpdate(self);

    scoreMultiplier = *GetFieldValue<float>(self, "_gameplayModifiersScoreMultiplier");

    modifiersModel = *GetFieldValue<GameplayModifiersModelSO*>(self, "_gameplayModifiersModel");

    if(indexNum > 2 && !recording) {
        SetFieldValue(self, "_baseRawScore", replayData[indexNum].score);
        SetFieldValue(self, "_combo", replayData[indexNum].combo);
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
    } else {
        percent = *RunMethod<float>(percentAndRankCounter, "get_relativeScore");
        rank = *RunMethod<int>(percentAndRankCounter, "get_immediateRank");
    }
    
    RefreshRank(self);
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
        if(speedToggleBool && replayText != nullptr) {
            if(replayText->get_gameObject()->get_activeInHierarchy()) {
                log("Setting replay text to inactive");
                replayText->get_gameObject()->SetActive(false);
            }
        }

        if(inSong && replayText == nullptr) {
            log("Creating replay text");
            Il2CppObject* slider = *il2cpp_utils::GetFieldValue(self, "_slider");
            UnityEngine::Transform* sliderTransform = *il2cpp_utils::RunMethod<UnityEngine::Transform*>(slider, "get_transform");

            replayText = QuestUI::BeatSaberUI::CreateText(self->slider->get_transform(), textToSetTo, false, UnityEngine::Vector2{-150, 110});
            replayTextCurrent = textToSetTo;
            replayText->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>()->set_fontSize(10);
            replayText->get_gameObject()->SetActive(true);
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
    inResumeAnimation = true;

    if(!recording) {
        if(speedToggle != nullptr) {
            UnityEngine::GameObject::Destroy(speedToggle->get_gameObject());
            speedToggle = nullptr;
        }

        log("Creating speed toggle");

        continueButton = *GetFieldValue<Button*>(self, "_continueButton");
        UnityEngine::Transform* continueButtonTransform = *RunMethod<UnityEngine::Transform*>(continueButton, "get_transform");

        speedToggle = BeatSaberUI::CreateToggle(
            continueButtonTransform->GetParent()->GetParent(),
            "Lock Speed",
            speedToggleBool,
            UnityEngine::Vector2{28.5f, -25},
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), (Il2CppObject*)nullptr, speedToggleOnClick)
        );
        UnityEngine::Object::DontDestroyOnLoad(speedToggle);
        Array<UnityEngine::RectTransform*>* rts = speedToggle->get_gameObject()->GetComponentsInChildren<UnityEngine::RectTransform*>();
        log("Length of rts is "+std::to_string(rts->Length()));
        // for(int i = 0; i < rts->Length(); i++) {
        //     if(i == 0 || i == 5) {
        //     log(to_utf8(csstrtostr(rts->values[i]->get_gameObject()->get_name()))+" "+std::to_string(i));
                UnityEngine::Vector2 currentSizeDelta = rts->values[0]->get_sizeDelta();
        //         if(i == 0) {
                    rts->values[0]->set_sizeDelta(UnityEngine::Vector2{147, currentSizeDelta.y});
        //         }
        //         // rts->values[5]->set_sizeDelta(UnityEngine::Vector2{30, currentSizeDelta.y});
        //     }
        // }

        if(customAvatar != nullptr && cameraToggleString == "thirdPerson") customAvatar->SetActive(false);
        if(customCamera != nullptr && cameraToggleString != "hmd") customCamera->SetActive(false);
    }
}

MAKE_HOOK_OFFSETLESS(PauseFinish, void, Il2CppObject* self) {

    log("PauseFinish");

    PauseFinish(self);

    inPauseMenu = false;
    
    if(!recording) {
        UnityEngine::GameObject::Destroy(speedToggle->get_gameObject());
        speedToggle = nullptr;
        if(customCamera != nullptr && cameraToggleString != "hmd") customCamera->SetActive(true);
    }
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

    log("Set inSongOrResults to false 1 "+std::to_string(inSongOrResults));

}

MAKE_HOOK_OFFSETLESS(ResultsScreenEnd, void, Il2CppObject* self, bool removedFromHierarchy, bool screenSystemDisabling) {

    log("ResultsScreenEnd");

    inSongOrResults = false;

    log("Set inSongOrResults to false 0");

    ResultsScreenEnd(self, removedFromHierarchy, screenSystemDisabling);
}

UnityEngine::Vector3 oldPrevRot;

MAKE_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, void, Il2CppObject* self) {

    // log("LightManager_OnWillRenderObject");

    if(inSong && !recording && !inPauseMenu) {
        Il2CppObject* mainCamera = CRASH_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Camera", "get_main"));
        UnityEngine::GameObject* cameraGO = *RunMethod<UnityEngine::GameObject*>(mainCamera, "get_gameObject");
        Il2CppObject* mainCameraTransform = *RunMethod<Il2CppObject*>(mainCamera, "get_transform");

        if(to_utf8(csstrtostr(cameraGO->get_name())) == "MainCamera") {
            Vector3 prevPos = *RunMethod<Vector3>(mainCameraTransform, "get_position");
            UnityEngine::Vector3 prevRot = *RunMethod<UnityEngine::Vector3>(mainCameraTransform, "get_eulerAngles");
            // UnityEngine::Vector3 rotDifference = (oldPrevRot - prevRot);
            // oldPrevRot = prevRot;
            // log("difference is", rotDifference);

            if(cameraToggleString != "hmd") {
                if(customCamera == nullptr) {
                    log("Creating custom camera");
                    customCamera = UnityEngine::Object::Instantiate(cameraGO);
                    log("Successfully created custom camera!");
                }
                mainCameraTransform = *RunMethod<Il2CppObject*>(customCamera, "get_transform");
                cameraGO = *RunMethod<UnityEngine::GameObject*>(customCamera, "get_gameObject");
            }

            if(cameraToggleString == "smooth") {
                float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");

                smoothCameraPosition = UnityEngine::Vector3::Lerp(smoothCameraPosition, UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z}, deltaTime * positionSmooth);
                smoothCameraRotation = UnityEngine::Quaternion::Slerp(smoothCameraRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].playerData.head.rot.x, replayData[indexNum].playerData.head.rot.y, replayData[indexNum].playerData.head.rot.z), deltaTime * rotationSmooth);

                cameraGO->get_transform()->SetPositionAndRotation(smoothCameraPosition + smoothPositionOffset, smoothCameraRotation);
            } else if(cameraToggleString == "thirdPerson") {
                if(getConfig().config["ThirdPersonCircularMovement"].GetBool()) {
                    float camX = sin(songTime/5)*6;
                    float camY = 2.5f;
                    float camZ = cos(songTime/2.5f)*-2-2.5f;
                    RunMethod(mainCameraTransform, "set_position", UnityEngine::Vector3{camX, 2.5f, camZ});

                    headFollowTransform->set_position(UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z});

                    RunMethod(mainCameraTransform, "LookAt", headFollowTransform);
                } else {
                    bool aButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::One, GlobalNamespace::OVRInput::Controller::RTouch);
                    bool bButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::Two, GlobalNamespace::OVRInput::Controller::RTouch);

                    if(aButtonValue || bButtonValue) {
                        pressedThirdPersonMoveButton = true;

                        UnityEngine::Vector3 camRotEuler = prevRot - basePrevRot + thirdPersonCamRot.get_eulerAngles();
                        newThirdPersonCamRot = UnityEngine::Quaternion::Euler(camRotEuler);

                        RunMethod(mainCameraTransform, "SetPositionAndRotation", newThirdPersonCamPos, newThirdPersonCamRot);

                        if(aButtonValue) {
                            RunMethod(mainCameraTransform, "Translate", divideVector3ByFloat(subtractVector3(prevPos, basePrevPos), 2.5f));
                        }

                        newThirdPersonCamPos = *RunMethod<Vector3>(mainCameraTransform, "get_position");
                    } else {
                        if(pressedThirdPersonMoveButton) {
                            thirdPersonCamPos = newThirdPersonCamPos;
                            thirdPersonCamRot = newThirdPersonCamRot;
                        }
                        // UnityEngine::Vector3 noShakeRot = thirdPersonCamRot.get_eulerAngles() + rotDifference;
                        // RunMethod(mainCameraTransform, "SetPositionAndRotation", thirdPersonCamPos, UnityEngine::Quaternion::Euler(thirdPersonCamRot.get_eulerAngles() - (rotDifference*100)));
                        RunMethod(mainCameraTransform, "SetPositionAndRotation", thirdPersonCamPos, thirdPersonCamRot);
                        
                        basePrevPos = prevPos;
                        basePrevRot = prevRot;

                        newThirdPersonCamPos = *RunMethod<Vector3>(mainCameraTransform, "get_position");
                    }
                }
            }
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
        RunMethod("UnityEngine", "Object", "Destroy", failedReplayButton->get_gameObject());
        failedReplayButton = nullptr;
    }

    if(failedCameraToggle != nullptr) {
        UnityEngine::GameObject::Destroy(failedCameraToggle->get_gameObject());
        failedCameraToggle = nullptr;
    }

    if(levelEndState == 2 && (recording || failedReplay)) {
        log("Creating failed replay buttons");

        recording = true;
        failedReplay = false;

        float buttonsScale = 0.8f;

        restartButton = *GetFieldValue(self, "_restartButton");
        UnityEngine::Transform* restartButtonTransform = *RunMethod<UnityEngine::Transform*>(restartButton, "get_transform");

        failedReplayButton = BeatSaberUI::CreateUIButton(
            restartButtonTransform->GetParent()->GetParent()->GetParent(), 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{17.25f, -32.5f},
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
            restartButtonTransform->GetParent()->GetParent()->GetParent(),
            tempString, 
            UnityEngine::Vector2{-20.75f, -28.5f},
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, failedCameraToggleOnClick)
        );
        failedCameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedCameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});
    }
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_Init, void, Il2CppObject* self, GlobalNamespace::LevelCompletionResults* levelCompletionResults, Il2CppObject* difficultyBeatmap, bool practice, bool newHighScore) {
    
    log("ResultsViewController_Init");

    inSong = false;

    saveRecording(levelCompletionResults, practice);

    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_ContinueButtonPressed, void, Il2CppObject* self) {
    
    log("ResultsViewController_ContinueButtonPressed");

    ResultsViewController_ContinueButtonPressed(self);

    recording = true;
}

MAKE_HOOK_OFFSETLESS(NoteWasMissed, void, Il2CppObject* self) {

    if(!recording && hasFakeMiss()) {
        return;
    }

    NoteWasMissed(self);
}

MAKE_HOOK_OFFSETLESS(NoteWasCut, void, Il2CppObject* self, Il2CppObject* noteCutInfo) {

    bool allIsOk = *RunMethod<bool>(noteCutInfo, "get_allIsOK");

    if(!recording && !allIsOk && hasFakeMiss()) {
        return;
    }

    NoteWasCut(self, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(NoteDebrisSpawner_SpawnDebris, void, Il2CppObject* self, Vector3 cutPoint, Vector3 cutNormal, float saberSpeed, Vector3 saberDir, Vector3 notePos, Quaternion noteRotation, Il2CppObject* colorType, float timeToNextColorNote, Vector3 moveVec) {

    if(!recording && reduceDebris) {
        return;
    }

    NoteDebrisSpawner_SpawnDebris(self, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, colorType, timeToNextColorNote, moveVec);
}

MAKE_HOOK_OFFSETLESS(MainFlowCoordinator_DidActivate, void, GlobalNamespace::MainFlowCoordinator* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    log("MainFlowCoordinator_DidActivate");

    MainFlowCoordinator_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    if(firstActivation) {
        headFollowTransform = UnityEngine::GameObject::New_ctor()->get_transform();
        playerAvatar = FindObject("PlayerAvatar");
    }

    inMulti = false;
}

MAKE_HOOK_OFFSETLESS(MultiplayerLobbyController_ActivateMultiplayerLobby, void, Il2CppObject* self) {

    MultiplayerLobbyController_ActivateMultiplayerLobby(self);

    log("In multiplayer lobby");

    inMulti = true;
}

MAKE_HOOK_OFFSETLESS(MultiplayerSongStart, void, Il2CppObject* self, Il2CppString* gameMode, Il2CppObject* previewBeatmapLevel, Il2CppObject* beatmapDifficulty, Il2CppObject* beatmapCharacteristic, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, bool useTestNoteCutSoundEffects) {

    log("Multiplayer Song Start "+std::to_string(inSongOrResults));

    inSong = true;
    score = 0;

    leftSaberTransformCache = nullptr;
    rightSaberTransformCache = nullptr;

    bs_utils::Submission::enable(modInfo);
    
    dataToSave.clear();

    getModifiers(gameplayModifiers, playerSpecificSettings);

    inPauseMenu = false;

    MultiplayerSongStart(self, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects);
}

MAKE_HOOK_OFFSETLESS(MultiplayerLevelFinishedController_HandlePlayerDidFinish, void, Il2CppObject* self, LevelCompletionResults* levelCompletionResults) {

    log("Multiplayer song finished");

    inSong = false;
    inSongOrResults = true;

    saveRecording(levelCompletionResults, false);

    MultiplayerLevelFinishedController_HandlePlayerDidFinish(self, levelCompletionResults);
}

extern "C" void setup(ModInfo& info) {
    info.id = "Replay";
    info.version = "0.4.0";
    modInfo = info;
    // Create logger
    static std::unique_ptr<const Logger> ptr(new Logger(info));
    Logger::get().info("Completed setup!");
    // We can even check information specific to the modloader!
    Logger::get().info("Modloader name: %s", Modloader::getInfo().name.c_str());
    
    getConfig().Load();
    SaveConfig();
}

extern "C" void load() {

    QuestUI::Init();

    custom_types::Register::RegisterType<Replay::UIController>();
    QuestUI::Register::RegisterModSettingsViewController<Replay::UIController*>(modInfo, "Replay");

    Logger::get().info("Installing hooks...");
    INSTALL_HOOK_OFFSETLESS(SongUpdate, il2cpp_utils::FindMethodUnsafe("", "AudioTimeSyncController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(SongStart, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 9));
    INSTALL_HOOK_OFFSETLESS(BeatmapObjectSpawnMovementData_Update, il2cpp_utils::FindMethodUnsafe("", "BeatmapObjectSpawnMovementData", "Update", 2));
    INSTALL_HOOK_OFFSETLESS(PlayerController_Update, il2cpp_utils::FindMethodUnsafe("", "PlayerTransforms", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(Saber_ManualUpdate, il2cpp_utils::FindMethodUnsafe("", "Saber", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(ScoreChanged, il2cpp_utils::FindMethodUnsafe("", "ScoreUIController", "UpdateScore", 2));
    INSTALL_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailView", "RefreshContent", 0));
    INSTALL_HOOK_OFFSETLESS(StandardLevelDetailViewController_DidActivate, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailViewController", "DidActivate", 3));
    INSTALL_HOOK_OFFSETLESS(GameEnergyCounter_AddEnergy, il2cpp_utils::FindMethodUnsafe("", "GameEnergyCounter", "AddEnergy", 1));
    INSTALL_HOOK_OFFSETLESS(ScoreControllerLateUpdate, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "LateUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(RefreshRank, il2cpp_utils::FindMethodUnsafe("", "ImmediateRankUIPanel", "RefreshUI", 0));
    INSTALL_HOOK_OFFSETLESS(Triggers, il2cpp_utils::FindMethodUnsafe("", "VRControllersInputManager", "TriggerValue", 1));
    INSTALL_HOOK_OFFSETLESS(ControllerUpdate, il2cpp_utils::FindMethodUnsafe("", "VRController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(ProgressUpdate, il2cpp_utils::FindMethodUnsafe("", "SongProgressUIController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(PauseStart, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "ShowMenu", 0));
    INSTALL_HOOK_OFFSETLESS(PauseFinish, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "StartResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(PauseAnimationFinish, il2cpp_utils::FindMethodUnsafe("", "PauseController", "HandlePauseMenuManagerDidFinishResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "MenuButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(ResultsScreenEnd, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "DidDeactivate", 2));
    INSTALL_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, il2cpp_utils::FindMethodUnsafe("", "LightManager", "OnWillRenderObject", 0));
    INSTALL_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, il2cpp_utils::FindMethodUnsafe("", "HapticFeedbackController", "PlayHapticFeedback", 2));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_SetDataToUI, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "SetDataToUI", 0));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_Init, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "Init", 4));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_ContinueButtonPressed, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "ContinueButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(NoteWasMissed, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasMissedEvent", 0));
    INSTALL_HOOK_OFFSETLESS(NoteWasCut, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasCutEvent", 1));
    INSTALL_HOOK_OFFSETLESS(NoteDebrisSpawner_SpawnDebris, il2cpp_utils::FindMethodUnsafe("", "NoteDebrisSpawner", "SpawnDebris", 9));
    INSTALL_HOOK_OFFSETLESS(MainFlowCoordinator_DidActivate, il2cpp_utils::FindMethodUnsafe("", "MainFlowCoordinator", "DidActivate", 3));
    INSTALL_HOOK_OFFSETLESS(MultiplayerLobbyController_ActivateMultiplayerLobby, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLobbyController", "ActivateMultiplayerLobby", 0));
    INSTALL_HOOK_OFFSETLESS(MultiplayerSongStart, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLevelScenesTransitionSetupDataSO", "Init", 10));
    INSTALL_HOOK_OFFSETLESS(MultiplayerLevelFinishedController_HandlePlayerDidFinish, il2cpp_utils::FindMethodUnsafe("", "MultiplayerLevelFinishedController", "HandlePlayerDidFinish", 1));
    Logger::get().info("Installed all hooks!");
    il2cpp_functions::Init();

    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();

    smoothPositionOffset = UnityEngine::Vector3{getConfig().config["SmoothCameraOffset"]["x"].GetFloat(), getConfig().config["SmoothCameraOffset"]["y"].GetFloat(), getConfig().config["SmoothCameraOffset"]["z"].GetFloat()};

    thirdPersonCamPos = {getConfig().config["ThirdPersonCameraPos"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat()};
    thirdPersonCamRot = *RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Euler", getConfig().config["ThirdPersonCameraRot"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["z"].GetFloat());

    std::string path = replayDirectory;
    mkpath(const_cast<char*>(path.c_str()));
}