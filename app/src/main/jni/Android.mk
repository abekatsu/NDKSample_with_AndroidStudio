LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := MyLibs
LOCAL_SRC_FILES := com_example_ndksample_with_androidstudio_NDKManager.c

include $(BUILD_SHARED_LIBRARY)