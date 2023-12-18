//Preyansi Patel
//03/27/21
//salary.cpp

#include <iostream>
#include <iomanip>
#include "SalaryEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(int id, double s):Employee(id){
    salary = s;
}
double SalariedEmployee::getSalary() const {
    return salary;
}
void SalariedEmployee::printPay() {
    cout << fixed << setprecision(2); //formating the output value
    cout << "The pay for the salaried employee with ID number " << getEmpID() << " is $" << salary / 52 << endl;
}
