#ifndef COMPOSITE_DEVICE_H
    #define COMPOSITE_DEVICE_H

    #include <list>
    #include "device.h"

    class CompositeDevice : public Device {
    public:
        CompositeDevice(const char* name) : Device(name) {}

        virtual void Add(const Device& device) {
            list.push_back(device);
        }

        virtual void Remove(const Device& device) {
            list.remove(device);
        }

    protected:
        std::list<Device> list;
    };
#endif