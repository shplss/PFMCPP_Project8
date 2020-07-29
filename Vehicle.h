#pragma once

#include <string>
#include <iostream>

struct Vehicle
{
    Vehicle(const std::string& n);
    
    virtual ~Vehicle() = default;
    Vehicle(const Vehicle&) = default;
    Vehicle& operator=(const Vehicle&) = default;
    
    virtual void setSpeed(int s);
    virtual void tryToEvade();

protected:
    int speed = 0;
    std::string name;

    friend struct HighwayPatrol;
};
