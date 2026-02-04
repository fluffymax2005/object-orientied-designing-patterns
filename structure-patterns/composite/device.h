#ifndef DEVICE_H
    #define DEVICE_H

    class Device {
    public:
        using Watt = float;
        using Currency = float;

        Device(const char* name) : _name(name) {}
        virtual ~Device();
        
        const char* name() { return _name; }

        virtual Watt power() = 0;
        virtual Currency cost() = 0;

    protected:
        Watt _power;
        Currency _cost;
        const char* _name;
    };
#endif