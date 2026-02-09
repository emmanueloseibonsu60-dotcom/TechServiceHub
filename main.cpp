#include <iostream>
#include <vector>
#include "Appliance.h"

int main() {
    std::vector<Appliance> appliances;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Appliance\n";
        std::cout << "2. Set hours for appliance\n";
        std::cout << "3. Turn appliance ON\n";
        std::cout << "4. Turn appliance OFF\n";
        std::cout << "5. View Appliances\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if(choice == 1) {
            std::string name;
            double power;
            std::cout << "Enter appliance name: ";
            std::cin >> name;
            std::cout << "Enter power (W): ";
            std::cin >> power;
            appl…
