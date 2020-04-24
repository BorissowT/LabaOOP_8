#include "estate.h"


Estate::Estate()
{

         this->age=25;
         this->area=170;
         this->residents=56;
         this->type=ECONOM;
         this->owner="Ivanov";
         this->months=6;

}

Estate::EstateType Estate::getType() const
{
    return this->type;
}

int Estate::getAge()
{
    return this->age;
}

int Estate::getArea()
{
    return this->area;
}

int Estate::getResidents()
{
    return this->residents;
}

int Estate::getMonths()
{
     return this->months;
}
