#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

class Appliance {
private:
    std::string name;
    double power;   // in watts
    bool status;    // true = ON, false = OFF

public:
    Appliance(std::string n, double p); // Constructor
    void turnOn();
    void turnOff();
    void display() const;
};

#endif
