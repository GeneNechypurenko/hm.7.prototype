#pragma once

#include "Vehicle.h"

class Motorcycle : public iVehicle
{
public:
    iVehicle* clone() override;
    void printInfo() override;
};