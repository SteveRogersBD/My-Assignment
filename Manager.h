#ifndef MANAGER_H
#define MANAGER_H
#include"Employee.h"
class Manager : public Employee
{
private:
    double base_pay;
    double bonus;
public:
    Manager();
    Manager(string, double, double, double);
double calc_pay();
int get_hours();

double get_wage();

//Getter Functions
void set_name(string n);

void set_hours(int h);

void set_wage(double p);

void set_base(double b);


};


#endif // MANAGER_H
