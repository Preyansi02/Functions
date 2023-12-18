//Preyansi Patel
//03/27/21
//employee.h

#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

using namespace std;
// Employee class
class Employee {
    private:
        int empID; // employee id
    public:
        Employee(int id);
        int getEmpID() const;
        virtual void printPay() = 0; 
};


#endif 

