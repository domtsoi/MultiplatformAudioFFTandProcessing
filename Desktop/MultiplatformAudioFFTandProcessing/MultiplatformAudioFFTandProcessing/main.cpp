//
//  main.cpp
//  MultiplatformAudioFFTandProcessing
//
//  Created by Dominic Tsoi on 12/19/19.
//  Copyright © 2019 Dominic Tsoi. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    #ifdef _WIN32
        #ifdef _WIN64
            printf("Windows 64 bit\n");
        #else
            printf("Windows 32 bit\n");
        #endif
    #elif __APPLE__
        #include "TargetConditionals.h"
        #if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
            std::cout << "iPhone stimulator\n";
        #elif TARGET_OS_IPHONE
            std::cout<< "iPhone\n";
        #elif TARGET_OS_MAC
            std::cout << "MacOS\n";
        #else
            std::cout << "Other Apple OS\n";
        #endif
    #else
        std::cout << "Not an Apple or Windows OS\n";
    #endif
    return 0;
}
