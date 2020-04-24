#include "luxuriousapartmentcalc.h"

LuxuriousApartmentCalc::LuxuriousApartmentCalc()
{

}

int LuxuriousApartmentCalc::getCost(Estate *value)
{
    int age=value->getAge();
    int residents=value->getResidents();
    int area=value->getArea();
    int months=value->getMonths();

    return residents*5000+250*area*months+3000-30*age;
}
