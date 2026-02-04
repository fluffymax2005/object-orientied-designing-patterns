#ifndef PC_H
    #define PC_H

    #include <algorithm>

    #include "composite_device.h"

    class PC : public CompositeDevice {
    public:
        PC(const char* name) : CompositeDevice(name) {}

        ~PC() {
            
        }
    };
#endif