//Aniruddha Biswas Atanu
//Date- 10/20, Friday
//This program takes input of the name, wage, hour and bonus of the managers
//and then shows the highest paid manager's name and wage(including bonus).


#include <iostream>
#include"Employee.h"
#include"Manager.h"
#include<string>

using namespace std;

int main()
{
    int num_of_managers;
    //parameters to initialize the manager object
    string name;
    double hourly_wage, bonus;
    double weekly_hours;

    cout << "Enter number of managers: ";
    cin>>num_of_managers;

    double total_wage = 0.0;
    double max = 0.0;
    string max_name = "";
    Manager *manager = new Manager[num_of_managers];
    cout << endl;

    for(int i=0;i<num_of_managers;i++)
    {
        cin.ignore(); //To clear the buffer after taking input of a number

        cout << "Enter manager " << i << " name: ";
        getline(cin,name);

        cout << "Enter manager " << i << " hourly wage: ";
        cin >> hourly_wage;

        cout << "Enter manager " << i << " weekly hours: ";
        cin >> weekly_hours;

        cout << "Enter manager " << i << " bonus: ";
        cin >> bonus;
        cout << endl;
        manager[i] = Manager(name, weekly_hours, hourly_wage, bonus);

        double wage = manager[i].calc_pay();
        total_wage += wage;
        if(max < wage) {max = wage; max_name = name;}
    }
    double average = total_wage / num_of_managers;

    cout << "Highest paid manager is " << " " << max_name << " who is paid $" << max << endl;
    cout << "Average pay is $" << average << endl;

    return 0;
}
