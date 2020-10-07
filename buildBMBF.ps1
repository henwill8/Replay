# Builds a .zip file for loading with BMBF
$NDKPath = Get-Content $PSScriptRoot/ndkpath.txt

$buildScript = "$NDKPath/build/ndk-build"
if (-not ($PSVersionTable.PSEdition -eq "Core")) {
    $buildScript += ".cmd"
}

& $buildScript NDK_PROJECT_PATH=$PSScriptRoot APP_BUILD_SCRIPT=$PSScriptRoot/Android.mk NDK_APPLICATION_MK=$PSScriptRoot/Application.mk
Compress-Archive -Path "./libs/arm64-v8a/libreplay_0_3_0.so","./bmbfmod.json","./libs/arm64-v8a/libbeatsaber-hook_0_7_1.so","./libs/arm64-v8a/libcodegen_0_2_6.so","./libs/arm64-v8a/libbs-utils_0_3_4.so","./extern/BeatSaberQuestCustomUI/libs/arm64-v8a/libcustomui_2019_2_1f1_0_1_3.so" -DestinationPath "./replay_v0.3.0.zip" -Update
