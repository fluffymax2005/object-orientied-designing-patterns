#ifndef DEVICE_H
    #define DEVICE_H

    #include <list> 

    class Device {
    public:
        using Watt = float;
        using Currency = float;

        virtual ~Device();
        
        const char* name() { return _name; }

        virtual Watt power() = 0;
        virtual Currency cost() = 0;

        virtual void Add(const Device& device) = 0;
        virtual void Remove(const Device& device) = 0;

    protected:
        Watt _power;
        Currency _cost;
        const char* _name;
    };
#endif