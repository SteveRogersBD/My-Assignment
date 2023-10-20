#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>

using namespace std;

class Employee {
protected:
    // Attributes
    string name;
    double hours;
    double wage;
public:

    //Constructor
    Employee(string, double, double);

//Getter Functions
string get_name() const;

double calc_pay() const;



};


#endif // EMPLOYEE_H
