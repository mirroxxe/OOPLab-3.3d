#pragma once
#include <iostream>
#include <string>

class Liquid {
protected:
    std::string name;
    double density;

public:
    Liquid();
    Liquid(const std::string& name, double density);
    Liquid(const Liquid& other);
    virtual ~Liquid();

    virtual void redefine();
    virtual void changeDensity(double newDensity);

    Liquid& operator=(const Liquid& other);

    friend std::ostream& operator<<(std::ostream& os, const Liquid& liquid);
    friend std::istream& operator>>(std::istream& is, Liquid& liquid);
    operator std::string() const;

    std::string getName() const;
    double getDensity() const;
    void setName(const std::string& name);
    void setDensity(double density);
};