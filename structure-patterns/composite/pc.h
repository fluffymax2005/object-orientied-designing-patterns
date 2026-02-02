#ifndef PC_H
    #define PC_H

    #include <algorithm>

    #include "composite_device.h"

    class PC : public CompositeDevice {
    public:
        ~PC() {
            std::for_each(list.begin(), list.end(), [](Device* device) {device} )
        }
    }
#endif