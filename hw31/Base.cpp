//
//  Base.cpp
//  hw31
//
//  Created by Дима on 05.12.23.
//

#include "Base.hpp"
#include "Vehicle.hpp"
#include <iostream>
using namespace std;

Base::Base()
{
    people_on_base = 0;
    vehicles_on_base = 0;
    petrol_on_base = 0.0;
    goods_on_base = 0.0;
}

Base::Base(int people, int vehicles, double petrol, double goods)
{
    people_on_base = people;
    vehicles_on_base = vehicles;
    petrol_on_base = petrol;
    goods_on_base = goods;
}

void Base::Print() const {
    cout << "People on base: " << people_on_base << endl;
    cout << "Vehicles on base: " << vehicles_on_base << endl;
    cout << "Petrol on base: " << petrol_on_base << endl;
    cout << "Goods on base: " << goods_on_base;
}

void Base::AddVehicle(Vehicle* v) {
    vehicle = v;
}

void Base::SetPeopleOnBase(int p)
{
    people_on_base = p;
}

void Base::SetVehiclesOnBase(int v)
{
    vehicles_on_base = v;
}

void Base::SetPetrolOnBase(double petrol)
{
    petrol_on_base = petrol;
}

void Base::SetGoodsOnBase(double goods)
{
    goods_on_base = goods;
}

int Base::GetPeopleOnBase() const
{
    return people_on_base;
}

int Base::GetVehiclesOnBase() const
{
    return vehicles_on_base;
}

double Base::GetPetrolOnBase() const
{
    return petrol_on_base;
}

double Base::GetGoodsOnBase() const
{
    return goods_on_base;
}

Base::~Base()
{
    delete[] vehicle;
}
