//
//  Truck.hpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#pragma once
#include "Vehicle.hpp"

class Truck: public Vehicle
{
private:
    double load;
    double max_load;
public:
    Truck(double l, double max_l, double p, double max_p);
    double getCurrentLoad();      
    double getMaxLoad();
    void arrive();
    bool leave();
};

#endif /* Truck_hpp */
