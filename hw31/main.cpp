//
//  main.cpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#include "Base.hpp"
#include "Vehicle.hpp"
#include "Bus.hpp"
#include "Truck.hpp"

#include <iostream>
using namespace std;

int main()
{
    Base* base = new Base(200, 120, 300, 4000);      
    Vehicle* bus = new Bus(70, 150, 10, 150);
    Vehicle* truck = new Truck(200, 300, 200, 900);

    cout << "Информация о базе: " << endl;
    base->Print();
    for (int i = 0; i < 3; i++)
    {
        if (bus->leave())
        {
            cout << "Автобус уехал" << endl;
        }
        else
        {
            cout << "Автобус не может уехать" << endl;
        }
           
    }

    for (int i = 0; i < 3; i++)
    {
        bus->arrive();
    }
    cout << "Информация о базе:  " << endl;
    base->Print();


    for (int i = 0; i < 4; i++)
    {
        if (truck->leave())
        {
            cout << "Танк уехал" << endl;
        }
        else
        {
            cout << "Танк не может уехать" << endl;
        }
           
    }
    truck->arrive();
    cout << "Информация о базе: " << endl;
    base->Print();

   
    
}
