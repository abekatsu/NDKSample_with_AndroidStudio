#include <com_example_ndksample_with_androidstudio_NDKManager.h>

/*
 * Class:     com_example_ndksample_with_androidstudio_NDKManager
 * Method:    getStringFromNDK
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ndksample_1with_1androidstudio_NDKManager_getStringFromNDK
  (JNIEnv * env, jobject jobject)
  {
  return (*env)->NewStringUTF(env, "Hello From JNI");
  }


