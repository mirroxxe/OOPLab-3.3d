#pragma once
#include "Liquid.h"

class Alcohol : public Liquid {
private:
    double strength;

public:
    Alcohol();
    Alcohol(const std::string& name, double density, double strength);
    Alcohol(const Alcohol& other);
    ~Alcohol();

    void setStrength(double strength);
    double getStrength() const;

    void redefine() override;
    void changeDensity(double newDensity) override;

    Alcohol& operator++();
    Alcohol operator++(int);
    Alcohol& operator--();
    Alcohol operator--(int);
    Alcohol& operator=(const Alcohol& other);

    friend std::ostream& operator<<(std::ostream& os, const Alcohol& alcohol);
    friend std::istream& operator>>(std::istream& is, Alcohol& alcohol);
    explicit operator std::string() const;
};