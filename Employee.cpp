//Preyansi Patel
//03/27/21
//employee.cpp

#include <iostream>

#include "Employee.h"

using namespace std;

Employee::Employee(int id) {
    empID = id;
}
int Employee::getEmpID() const {
    return empID;
}
