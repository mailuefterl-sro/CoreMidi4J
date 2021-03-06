/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
#ifdef __cplusplus
extern "C" {
#endif
#undef uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_DEVICE_MAP_SIZE
#define uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_DEVICE_MAP_SIZE 20L
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getNumberOfSources
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getNumberOfSources
  (JNIEnv *, jobject);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getNumberOfDestinations
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getNumberOfDestinations
  (JNIEnv *, jobject);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getSource
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getSource
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getDestination
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getDestination
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getUniqueID
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getUniqueID
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getMidiDeviceInfo
 * Signature: (I)Luk/co/xfactorylibrarians/coremidi4j/CoreMidiDeviceInfo;
 */
JNIEXPORT jobject JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getMidiDeviceInfo
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
