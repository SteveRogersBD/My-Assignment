#include "Manager.h"

//Default Constructor
Manager :: Manager() : Employee("", 0.0, 0.0), bonus(0.0), base_pay(0.0) {}

//Constructor
Manager :: Manager(string theName,
            double theHours,
            double theWage,
            double theBonus): Employee(theName,theHours,theWage)
{
    bonus = theBonus;
}

double Manager :: calc_pay()
{
    base_pay = Employee :: calc_pay();
    base_pay += bonus;
    return base_pay;
}
int Manager :: get_hours()
{
    return hours;
}
double Manager :: get_wage()
{
    return wage;
}

//Getter Functions
void Manager :: set_name(string n)
{
    name = n;
}

void Manager :: set_hours(int h)
{
    hours = h;
}
void Manager :: set_wage(double p)
{
    wage = p;
}
void Manager :: set_base(double b)
{
    base_pay = b;
}

