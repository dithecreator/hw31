//
//  Bus.hpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#ifndef Bus_hpp
#define Bus_hpp

#include <stdio.h>
#pragma once
#include "Vehicle.hpp"
class Bus:public Vehicle
{
private:
    int people;
    int max_people;

public:
    Bus(int peop, int max_peop, double tank, double petrol);
    int getPeopleCount();          
    int getMaxPeople();
    void arrive();
    bool leave();
};

#endif /* Bus_hpp */
