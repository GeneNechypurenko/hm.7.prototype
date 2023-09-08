#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"

int main()
{

    iVehicle* carPrototype = new Car();
    iVehicle* motorcyclePrototype = new Motorcycle();
    iVehicle* busPrototype = new Bus();

    iVehicle* myCar = carPrototype->clone();
    iVehicle* myMotorcycle = motorcyclePrototype->clone();
    iVehicle* myBus = busPrototype->clone();

    myCar->printInfo();
    myMotorcycle->printInfo();
    myBus->printInfo();

    delete carPrototype;
    delete motorcyclePrototype;
    delete busPrototype;
    delete myCar;
    delete myMotorcycle;
    delete myBus;

    return 0;
}