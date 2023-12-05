//
//  Vehicle.hpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp
#include <stdio.h>
#pragma once
class Vehicle
{
protected:
    double petrol_amount;
    double tank_volume;
    double petrol;
    double max_petrol;
public:
    Vehicle(double tank, double petrol);
    double getTankVolume();          
    double getPetrolAmount();
    virtual void arrive() = 0;
    virtual bool leave() = 0;
};


#endif /* Vehicle_hpp */
