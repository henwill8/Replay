# Builds a .zip file for loading with BMBF
$NDKPath = Get-Content $PSScriptRoot/ndkpath.txt
$Name = "replay_v0.6.0"

$buildScript = "$NDKPath/build/ndk-build"
if (-not ($PSVersionTable.PSEdition -eq "Core")) {
    $buildScript += ".cmd"
}

& $buildScript NDK_PROJECT_PATH=$PSScriptRoot APP_BUILD_SCRIPT=$PSScriptRoot/Android.mk NDK_APPLICATION_MK=$PSScriptRoot/Application.mk
Compress-Archive -Path "./libs/arm64-v8a/libreplay.so","./mod.json","./libs/arm64-v8a/libbeatsaber-hook_1_3_3.so","./libs/arm64-v8a/libbs-utils.so","./libs/arm64-v8a/libquestui.so","./ffmpeg/libavcodec.so","./ffmpeg/libavdevice.so","./ffmpeg/libavfilter.so","./ffmpeg/libavutil.so","./ffmpeg/libavformat.so","./ffmpeg/libswresample.so","./ffmpeg/libswscale.so","./ffmpeg/libffmpegkit_abidetect.so","./ffmpeg/libffmpegkit.so","./ffmpeg/libc++_shared.so" -DestinationPath "./$Name.zip" -Update
$FileName = "./$Name.qmod"
if(Test-Path $FileName) {
  Remove-Item $FileName
}
Rename-Item -Path "./$Name.zip" "$Name.qmod"