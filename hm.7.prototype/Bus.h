#pragma once

#include "Vehicle.h"

class Bus : public iVehicle
{
public:
    iVehicle* clone() override;
    void printInfo() override;
};