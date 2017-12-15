export PATH=/home/wayne/Android/Sdk/ndk-bundle:$PATH

ndk-build NDK_PROJECT_PATH=. NDK_APPLICATION_MK=Application.mk APP_BUILD_SCRIPT=Android.mk -B

echo "=================================================="  
file obj/local/arm64-v8a/hello 

echo "=================================================="  
echo "adb push obj/local/arm64-v8a/hello /data/local/tmp"

echo "=================================================="
