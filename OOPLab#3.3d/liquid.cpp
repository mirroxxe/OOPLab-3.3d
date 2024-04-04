#include "Liquid.h"

Liquid::Liquid() : name(""), density(0.0) {}

Liquid::Liquid(const std::string& name, double density) : name(name), density(density) {}

Liquid::Liquid(const Liquid& other) : name(other.name), density(other.density) {}

Liquid::~Liquid() {}

std::string Liquid::getName() const {
    return name;
}

double Liquid::getDensity() const {
    return density;
}

void Liquid::redefine() {
    std::cout << "Redefined method for Liquid\n";
}

void Liquid::changeDensity(double newDensity) {
    std::cout << "Changing density for Liquid\n";
}

Liquid& Liquid::operator=(const Liquid& other) {
    if (this != &other) {
        name = other.name;
        density = other.density;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Liquid& liquid) {
    os << "Name: " << liquid.name << ", Density: " << liquid.density;
    return os;
}

std::istream& operator>>(std::istream& is, Liquid& liquid) {
    std::cout << "Enter name: ";
    is >> liquid.name;
    std::cout << "Enter density: ";
    is >> liquid.density;
    return is;
}

Liquid::operator std::string() const {
    return "Name: " + name + ", Density: " + std::to_string(density);
}