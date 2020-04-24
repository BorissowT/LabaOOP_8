// Листинг файла states.cpp
#include "states.h"
States::States(QObject *parent) : QObject(parent)
{
 actualData = nullptr;
}
States::~States()
{
 // delete: actualData
 if(actualData){
 delete actualData;
 actualData = nullptr;
 }
 // delete and cleare: arra
 qDeleteAll(array);
 array.clear();
}

void States::undo()
{
    int size=array.size();
    if(size==0 or size==NULL)
        actualData = NULL;
    else{
        actualData = array[size-1];
        array.removeAt(size-1);
    }
}

bool States::hasStates()
{
    int size=array.size();
   if(size>0)
       return true;
   else
       return false;
}

Estate *States::getActualData()
{
    if(array.size()>0)
        return array[array.size()-1];
    else
        return NULL;
}

void States::add(Estate *value)
{
    array.append(value);
}
