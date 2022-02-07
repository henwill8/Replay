#include "Recording/ReplayRecorder.hpp"

#include "Utils/ModifiersUtils.hpp"

#include <chrono>
#include <ctime>

using namespace rapidjson;

void Replay::ReplayRecorder::Init() {
    log("Setting up Replay Recorder");
    playerRecorder = Replay::PlayerRecorder();
    noteEventRecorder = Replay::NoteEventRecorder();
    obstacleEventRecorder = Replay::ObstacleEventRecorder();
}

void Replay::ReplayRecorder::CreateClearedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator) {
    Value clearedInfo(kObjectType);

    clearedInfo.AddMember("RawScore", results->rawScore, allocator);
    clearedInfo.AddMember("ModifiedScore", results->modifiedScore, allocator);
    
    metadata.AddMember("ClearedInfo", clearedInfo, allocator);
}

void Replay::ReplayRecorder::CreateFailedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator) {
    Value failedInfo(kObjectType);

    failedInfo.AddMember("FailedTime", SongUtils::failTime, allocator);

    metadata.AddMember("FailedInfo", failedInfo, allocator);
}

void Replay::ReplayRecorder::CreateMetadata(GlobalNamespace::LevelCompletionResults* results) {
    metadata.SetObject();

    rapidjson::Document::AllocatorType& allocator = metadata.GetAllocator();

    GlobalNamespace::PlayerSpecificSettings* settings = SongUtils::playerSpecificSettings;

    Value playerSettings(kObjectType);
    playerSettings.AddMember("LeftHanded", settings->leftHanded, allocator);
    playerSettings.AddMember("AutoHeight", settings->automaticPlayerHeight, allocator);
    playerSettings.AddMember("Height", settings->playerHeight, allocator);
    metadata.AddMember("PlayerSettings", playerSettings, allocator);

    std::vector<std::string> modifierStrings = ModifiersUtils::ModifiersToStrings(results->gameplayModifiers);
    if(!modifierStrings.empty()) {
        Value modifiers(kArrayType);
        for(std::string modifierName : modifierStrings) {
            if(modifierName == "NoFail" && !SongUtils::didFail) continue;
            modifiers.PushBack(rapidjson::Value{}.SetString(modifierName.c_str(), modifierName.length(), allocator), allocator);
        }
        metadata.AddMember("Modifiers", modifiers, allocator);
    }

    int64_t timeSet = static_cast<int64_t>(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));

    Value info(kObjectType);
    info.AddMember("TimeSet", timeSet, allocator);
    info.AddMember("AverageCutScore", noteEventRecorder.GetAverageCutScore(), allocator);
    info.AddMember("GoodCuts", results->goodCutsCount, allocator);
    info.AddMember("MissedNotes", results->badCutsCount + results->missedCount, allocator);
    info.AddMember("MaxCombo", results->maxCombo, allocator);
    metadata.AddMember("Info", info, allocator);

    if(!SongUtils::didFail) {
        CreateClearedSpecificMetadata(results, allocator);
    } else {
        CreateFailedSpecificMetadata(results, allocator);
    }
}

void Replay::ReplayRecorder::StopRecording(GlobalNamespace::LevelCompletionResults* results) {
    CreateMetadata(results);
    WriteReplayFile(ReplayUtils::GetTempReplayFilePath());

    std::string filepath = ReplayUtils::GetReplayFilePath(SongUtils::GetMapID());
    if(ShouldMoveFile(results, filepath)) {
        log("Moving replay file to permanent location");
        std::filesystem::rename(ReplayUtils::GetTempReplayFilePath(), ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));
    } else {
        log("Not permanently saving replay file, current file has higher priority");
    }
}

bool Replay::ReplayRecorder::ShouldMoveFile(GlobalNamespace::LevelCompletionResults* results, std::string_view filepath) {
    if(!fileexists(filepath)) return true;

    Document metadata = FileUtils::GetMetadataFromReplayFile(filepath);
    if(metadata.HasMember("ClearedInfo")) {
        if(SongUtils::didFail) return false;

        if(results->modifiedScore >= metadata["ClearedInfo"]["ModifiedScore"].GetInt()) return true;

        return false;
    } else if(metadata.HasMember("FailedInfo")) {
        if(!SongUtils::didFail) return true;

        if(SongUtils::failTime > metadata["FailedInfo"]["FailedTime"].GetFloat()) return true;

        return false;
    }

    return true;
}

void Replay::ReplayRecorder::WriteReplayFile(std::string path) {
    log("Writing Replay file at %s", path.c_str());
    std::filesystem::create_directories(Replay::ReplayUtils::GetReplaysDirectory());

    std::ofstream output = std::ofstream(path, std::ios::binary);

    int magicBytes = replayMagicBytes;
    output.write(reinterpret_cast<const char*>(&magicBytes), sizeof(int));

    byte version = fileVersion;
    output.write(reinterpret_cast<const char*>(&version), sizeof(byte));

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    writer.SetMaxDecimalPlaces(2);
    metadata.Accept(writer);
    const char* metadataString = buffer.GetString();

    unsigned int metadataLength = (int) strlen(metadataString);
    output.write(reinterpret_cast<const char*>(&metadataLength), sizeof(unsigned int));

    output.write(metadataString, strlen(metadataString));

    playerRecorder.WriteEvents(output);
    noteEventRecorder.WriteEvents(output);
    obstacleEventRecorder.WriteEvents(output);

    output.flush();
}