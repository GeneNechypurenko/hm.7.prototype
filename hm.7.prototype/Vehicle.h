#pragma once

#include <iostream>

using namespace std;

class iVehicle abstract
{
public:
    virtual iVehicle* clone() abstract;
    virtual void printInfo() abstract;
};