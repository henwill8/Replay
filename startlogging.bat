powershell ./copy.ps1

adb shell am force-stop com.beatgames.beatsaber
adb shell am start com.beatgames.beatsaber/com.unity3d.player.UnityPlayerActivity
@ECHO OFF
adb logcat -c
adb logcat > log.txt