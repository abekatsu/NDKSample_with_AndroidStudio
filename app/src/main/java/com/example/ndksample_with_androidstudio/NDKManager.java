package com.example.ndksample_with_androidstudio;

/**
 *
 * Created by Katsuhisa Abe on 14/12/25.
 */
public class NDKManager {

    static {
        System.loadLibrary("MyLibs");
    }

    public native String getStringFromNDK();
}
