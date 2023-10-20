#include "Employee.h"
#include<cstdlib>
#include<string>
//Constructor
Employee :: Employee(string theName,
                     double theHours,
                     double theWage)
{
    name = theName;
    hours = theHours;
    wage = theWage;
}

//Getter Functions

string Employee :: get_name() const
{
    return name;
}



double Employee :: calc_pay() const
{
    return hours * wage;;
}
