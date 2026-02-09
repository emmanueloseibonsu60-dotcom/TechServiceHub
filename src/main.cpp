#include <iostream>
#include <vector>
#include "Appliance.h"

int main() {
    std::vector<Appliance> appliances;

    // Register appliances
    appliances.push_back(Appliance("Fan", 75));
    appliances.push_back(Appliance("Light", 60));
    appliances.push_back(Appliance("Heater", 1500));

    // Turn some appliances ON
    appliances[0].turnOn(); // Fan ON
    appliances[2].turnOn(); // Heater ON

    // View appliances
    std::cout << "Registered Appliances:\n";
    for(const auto& app : appliances) {
        app.display();
    }

    return 0;
}
