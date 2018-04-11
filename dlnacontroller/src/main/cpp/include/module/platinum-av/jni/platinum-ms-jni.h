/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_qiku_android_avplayer_dlna_dms_DMSJniInterface */

#ifndef _Included_com_qiku_android_avplayer_dlna_dms_DMSJniInterface
#define _Included_com_qiku_android_avplayer_dlna_dms_DMSJniInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_qiku_android_avplayer_dlna_dms_DMSJniInterface
 * Method:    startServer
 * Signature: (Ljava/lang/string;Ljava/lang/string;Ljava/lang/string;)I
 */
JNIEXPORT jint JNICALL Java_com_qiku_android_avplayer_dlna_dms_DMSJniInterface_startServer
  (JNIEnv *env, jobject thiz, jstring dir, jstring name, jstring uuid);

/*
 * Class:     com_qiku_android_avplayer_dlna_dms_DMSJniInterface
 * Method:    stopServer
 * Signature: (V)I
 */
JNIEXPORT jint JNICALL Java_com_qiku_android_avplayer_dlna_dms_DMSJniInterface_stopServer
  (JNIEnv *env, jobject thiz);

/*
 * Class:     com_qiku_android_avplayer_dlna_dms_DMSJniInterface
 * Method:    RapidTransmitVideo
 * Signature: (Ljava/lang/string)I
 */
JNIEXPORT jint JNICALL Java_com_qiku_android_avplayer_dlna_dms_DMSJniInterface_RapidTransmitVideo
(JNIEnv *env, jobject thiz, jstring file);

/*
 * Class:     com_qiku_android_avplayer_dlna_dms_DMSJniInterface
 * Method:    getServerRootUri
 * Signature: (V)Ljava/lang/string
 */
JNIEXPORT jstring JNICALL Java_com_qiku_android_avplayer_dlna_dms_DMSJniInterface_getServerRootUri
(JNIEnv *env, jobject thiz);

#ifdef __cplusplus
}
#endif
#endif