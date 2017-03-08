/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_conqueror_bluetoothphone_jni_BlueToothJniTool */

#ifndef _Included_com_conqueror_bluetoothphone_jni_BlueToothJniTool
#define _Included_com_conqueror_bluetoothphone_jni_BlueToothJniTool
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    sendEasyCommand
 * Signature: (I)I
 */
JNIEXPORT jint
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_sendEasyCommand
        (JNIEnv * , jobject, jint);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    callPhone
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_callPhone
(JNIEnv * , jobject , jstring ) ;

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    getCurrentState
 * Signature: ()I
 */
JNIEXPORT jint
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_getCurrentState
        (JNIEnv * , jobject);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    downloadPhoneBook
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT void
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_downloadPhoneBook
        (JNIEnv * , jobject);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    recentCalledNumber
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_recentCalledNumber
        (JNIEnv * , jobject);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    setBluetoothName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_setBluetoothName
(JNIEnv * , jobject , jstring ) ;

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    getTellBluetoothName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_getTellBluetoothName
        (JNIEnv * , jobject);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    getLocalBluetoothName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT void
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_getLocalBluetoothName
        (JNIEnv * , jobject);


/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    setPIN * Signature: (I)V
 */
JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_setPIN
(JNIEnv * , jobject , jstring ) ;

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    getPIN
 * Signature: ()I
 */
JNIEXPORT jint
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_getPIN
        (JNIEnv * , jobject);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    cancelBtAutoLink
 * Signature: ()I
 */
JNIEXPORT jint
JNICALL Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_cancelBtAutoLink
        (JNIEnv * , jobject, jint);

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    switchVoice
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_switchVoice
(JNIEnv * , jobject ) ;

/*
 * Class:     com_conqueror_bluetoothphone_jni_BlueToothJniTool
 * Method:    powerControl
 * Signature: (I)V
 */
JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_powerControl
(JNIEnv * , jobject , jint ) ;

JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_closeBT(JNIEnv * , jobject ) ;

JNIEXPORT void JNICALL
Java_com_conqueror_bluetoothphone_jni_BlueToothJniTool_openBT(JNIEnv * , jobject ) ;

#ifdef __cplusplus
}
#endif
#endif
