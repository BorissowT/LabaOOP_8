#include "apartmentcalc.h"

ApartmentCalc::ApartmentCalc()
{

}

int ApartmentCalc::getCost(Estate *value)
{
    int age=value->getAge();
    int residents=value->getResidents();
    int area=value->getArea();
    int months=value->getMonths();

    return residents*2000+100*area*months+3000-30*age;
}
