#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

class Appliance {
private:
    std::string name;
    double power;   // in watts
    bool status;    // true = ON, false = OFF
    double hoursUsed; // how many hours it runs

public:
    Appliance(std::string n, double p);
    void turnOn();
    void turnOff();
    void setHours(double h);       // set usage hours
    double calculateEnergy() const; // return energy in kWh
    void display() const;
};

#endif
