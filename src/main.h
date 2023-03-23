#pragma once

#define EXPORT extern "C" __attribute__((visibility("default")))
#define UNEXPORT extern "C" __attribute__((visibility("hidden")))

#ifdef DEBUG
// you can use this macto to include code when building in debug
#endif
#ifdef RELEASE
// you can use this macto to include code when building in release
#endif

typedef void (*func)();

void Main();
void Init();