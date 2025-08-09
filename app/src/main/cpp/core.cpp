#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nativeapp_MainActivity_helloFromCpp(
        JNIEnv* env, jobject /*thiz*/) {
    std::string msg = "Hello from C++ on Android!";
    return env->NewStringUTF(msg.c_str());
}
