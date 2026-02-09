#include "Appliance.h"
#include <iostream>

Appliance::Appliance(std::string n, double p) : name(n), power(p), status(false) {}

void Appliance::turnOn() {
    status = true;
}

void Appliance::turnOff() {
    status = false;
}

void Appliance::display() const {
    std::cout << "Appliance: " << name 
              << ", Power: " << power << "W"
              << ", Status: " << (status ? "ON" : "OFF") << std::endl;
}
