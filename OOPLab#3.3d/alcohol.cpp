#include "Alcohol.h"

Alcohol::Alcohol() : Liquid(), strength(0.0) {}

Alcohol::Alcohol(const std::string& name, double density, double strength)
    : Liquid(name, density), strength(strength) {}

Alcohol::Alcohol(const Alcohol& other) : Liquid(other), strength(other.strength) {}

Alcohol::~Alcohol() {}

void Alcohol::setStrength(double strength) {
    this->strength = strength;
}

double Alcohol::getStrength() const {
    return strength;
}

void Liquid::setName(const std::string& name) {
    this->name = name;
}

void Liquid::setDensity(double density) {
    this->density = density;
}

void Alcohol::redefine() {
    std::cout << "Redefined method for Alcohol\n";
}

void Alcohol::changeDensity(double newDensity) {
    std::cout << "Changing density for Alcohol\n";
}

Alcohol& Alcohol::operator++() {
    ++strength;
    return *this;
}

Alcohol Alcohol::operator++(int) {
    Alcohol temp(*this);
    operator++();
    return temp;
}

Alcohol& Alcohol::operator--() {
    --strength;
    return *this;
}

Alcohol Alcohol::operator--(int) {
    Alcohol temp(*this);
    operator--();
    return temp;
}

Alcohol& Alcohol::operator=(const Alcohol& other) {
    if (this != &other) {
        Liquid::operator=(other);
        strength = other.strength;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Alcohol& alcohol) {
    os << "Name: " << alcohol.getName() << ", Density: " << alcohol.getDensity() << ", Strength: " << alcohol.strength;
    return os;
}

std::istream& operator>>(std::istream& is, Alcohol& alcohol) {
    std::cout << "Enter name: ";
    is >> alcohol.name;
    std::cout << "Enter density: ";
    is >> alcohol.density;
    std::cout << "Enter strength: ";
    is >> alcohol.strength;
    return is;
}

Alcohol::operator std::string() const {
    return "Name: " + getName() + ", Density: " + std::to_string(getDensity()) + ", Strength: " + std::to_string(strength);
}