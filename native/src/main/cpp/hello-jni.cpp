#include <jni.h>
#include <stdio.h>
#include "hello-jni.h"

JNIEXPORT jint JNICALL Java_HelloJni_hello (JNIEnv *env, jobject thisObj, jint n)
 {
   jint result = ((jint)n * 2);
   printf("Hello from c++, here's a result x2 : %d\n", result);
   return result;
}