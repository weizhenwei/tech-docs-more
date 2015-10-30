#include <jni.h>
#include <stdio.h>
#include "HelloWorld.h"

/*
 * Class:     HelloWorld
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HelloWorld_sayHello
  (JNIEnv *env, jobject obj)
{
    printf("Hello, World!\n");
    
    return;
}

/*
 * Class:     HelloWorld
 * Method:    sayHelloNumber
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_HelloWorld_sayHelloNumber
  (JNIEnv *env, jobject obj, jint number)
{
    printf("Hello, World: %d !\n", number);

    return;
}

