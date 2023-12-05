//
//  Vehicle.cpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#include "Vehicle.hpp"

Vehicle::Vehicle(double tank, double petrol) {
    tank_volume = tank;
    petrol_amount = petrol;
}


double Vehicle::getTankVolume()
{
    return tank_volume;
}

double Vehicle::getPetrolAmount()
{
    return petrol_amount;
}
