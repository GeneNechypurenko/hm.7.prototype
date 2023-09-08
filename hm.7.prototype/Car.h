#pragma once

#include "Vehicle.h"

class Car : public iVehicle
{
public:
    iVehicle* clone() override;
    void printInfo() override;
};