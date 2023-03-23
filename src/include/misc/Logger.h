#pragma once

#include <jni.h>
#include <android/log.h>

enum LogType {
    oDEBUG = 3,
    oERROR = 6,
    oINFO  = 4,
    oWARN  = 5
};

#ifdef RELEASE
#define LOGD(...) (void)1
#define LOGE(...) (void)1
#define LOGI(...) (void)1
#define LOGW(...) (void)1
#else
#define LOGD(...) ((void)__android_log_print(oDEBUG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(oERROR, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(oINFO,  __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(oWARN,  __VA_ARGS__))
#endif


