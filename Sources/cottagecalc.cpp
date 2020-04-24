#include "cottagecalc.h"

CottageCalc::CottageCalc()
{

}

int CottageCalc::getCost(Estate *value)
{
    int age=value->getAge();
    int residents=value->getResidents();
    int area=value->getArea();
    int months=value->getMonths();

    return residents*3000+150*area*months+3000-30*age;
}
