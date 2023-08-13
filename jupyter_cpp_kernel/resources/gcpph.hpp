#ifndef  _gcpph_hpp
#define _gcpph_hpp

//global

#include <iostream>

//basicf
extern "C" {
    #include <cstdlib>
    #include <cstdio>
    #include "basicf/rstdio.h"
    //dlfcn.h is not available on G++ for Windows
    #ifdef _WIN32
        #include "basicf/dlfcn.h" //local
    #else
        #include <dlfcn.h> //global
    #endif
}


#endif