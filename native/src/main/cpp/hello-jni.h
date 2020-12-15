#include <jni.h>

#ifndef _Included_HelloJni
#define _Included_HelloJni
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jint JNICALL Java_HelloJni_hello(JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif