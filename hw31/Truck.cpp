//
//  Truck.cpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#include "Truck.hpp"
#include "Base.hpp"

Truck::Truck(double l, double max_l, double tank, double petrol) :Vehicle(tank, petrol)
{
    load = l;
    max_load = max_l;
}

double Truck::getCurrentLoad()
{
    return load;
}

double Truck::getMaxLoad()
{
    return max_load;
}


void Truck::arrive()
{
    if (load <= max_load)
    {
        Base::vehicles_on_base++;
        Base::people_on_base++;
        Base::goods_on_base += load;
    }
}

bool Truck::leave()
{
    
    if (Base::petrol_on_base != 0 && (Base::petrol_on_base - (tank_volume - petrol_amount) > 0) && Base::vehicles_on_base != 0 && Base::people_on_base != 0 && petrol_amount <= tank_volume)
    {

        if (load > max_load) {
            return false;
        }
            
        Base::people_on_base--;
        Base::vehicles_on_base--;
        Base::goods_on_base -= load;

        if (Base::goods_on_base < load)
        {
            Base::goods_on_base = 0;
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
