#include "townhousecalc.h"

TownhouseCalc::TownhouseCalc()
{

}

int TownhouseCalc::getCost(Estate *value)
{
    int age=value->getAge();
    int residents=value->getResidents();
    int area=value->getArea();
    int months=value->getMonths();

    return residents*3500+180*area*months+3000-30*age;
}
