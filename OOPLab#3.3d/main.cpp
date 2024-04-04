#include "Alcohol.h"
#include <iostream>

int main() {
    Alcohol vodka;
    std::cout << "Enter details for vodka:\n";
    std::cin >> vodka;
    std::cout << "Vodka details: " << vodka << std::endl;

    Alcohol whiskey;
    std::cout << "\nEnter details for whiskey:\n";
    std::cin >> whiskey;
    std::cout << "Whiskey details: " << whiskey << std::endl;

    return 0;
}