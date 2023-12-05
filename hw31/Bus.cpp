//
//  Bus.cpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#include "Bus.hpp"
#include "Base.hpp"
#include "Vehicle.hpp"
#include <iostream>
using namespace std;

int Base::people_on_base;
int Base::vehicles_on_base;
double Base::petrol_on_base;
double Base::goods_on_base;


Bus::Bus(int peop, int max_peop, double tank, double petrol):Vehicle(tank, petrol)
{
    people = peop;
    max_people = max_peop;
}

int Bus::getPeopleCount()
{
    return people;
}

int Bus::getMaxPeople()
{
    return max_people;
}

void Bus::arrive()
{
    if (people <= max_people)
    {
        Base::people_on_base += people;
        Base::vehicles_on_base++;
    }
}


bool Bus::leave()
{
    if (Base::petrol_on_base != 0 && (Base::people_on_base - (tank_volume - petrol_amount) > 0) && Base::vehicles_on_base != 0 && people <= max_people && petrol_amount <= tank_volume && Base::people_on_base != 0)

    {
        if (Base::people_on_base <= people) {
            Base::people_on_base = 0;
        }
        else
        {
            Base::people_on_base -= people;
            Base::vehicles_on_base--;
        }
        if (tank_volume > petrol_amount)
        {
            Base::petrol_on_base -= (tank_volume - petrol_amount);
            petrol_amount = (tank_volume - petrol_amount);
        }
        return true;
    }
    return false;
}
