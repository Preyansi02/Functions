//Preyansi Patel
//Computer science lab 7
//03/28/21
//main

#include <iostream>
#include <vector>
#include "Employee.h"
#include "Employee.cpp"
#include "HourlyEmployee.h"
#include "HourlyEmployee.cpp"
#include "SalaryEmployee.h"
#include "SalariedEmployee.cpp"
using namespace std;

//function prototypes for employee
void getInput(vector <Employee *> & Ve);
void printList(const vector <Employee *> & Ve);


int main()
{
    vector <Employee *> VEmp;
    getInput(VEmp);
    printList(VEmp);

    int n = VEmp.size();
    if (n > 0) {
        cout << "Lab 7 completed by: " << "Preyansi Patel, Employee ID: " << VEmp[0] -> getEmpID() << endl;
    } else {
        cout << "Lab 7 completed by: " << "Preyansi Patel" << endl;
    }

    system("pause");
    return 0;
}

void getInput(vector <Employee *> & Ve) { // function body for get input
    int choice;
    int empID;
    double hours, payRate, salary;
    bool process = true;
    while(process) {
        cout << "Enter 1 for Hourly Employee" << endl;
        cout << "Enter 2 for Salaried Employee" << endl;
        cout << "Enter 3 to stop: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1:
                cout << "Enter the ID: ";
                // input validation
                do {
                    cin >> empID;
                } while(empID <= 0);

                cout << "Enter the number of hours worked: ";
                // input validation
                do {
                    cin >> hours;
                } while(hours <= 0);

                cout << "Enter the pay rate: ";
                // input validation
                do {
                    cin >> payRate;
                } while(payRate <= 0);
                cout << endl;
                Ve.push_back(new HourlyEmployee(empID, hours, payRate)); // adding HourlyEmployee object to vector
                break;
            case 2:
                cout << "Enter the ID: ";
                // asks to input validation
                do {
                    cin >> empID;
                } while(empID <= 0);

                cout << "Enter the salary: ";
                // asks to input validation
                do {
                    cin >> salary;
                } while(salary <= 0);

                cout << endl;
                Ve.push_back(new SalariedEmployee(empID, salary)); // adding SalariedEmployee object to vector
                break;
            case 3:
                process = false;
                break;
        }
    }
    return;
}

void printList(const vector <Employee *> & Ve) { // print list function to show pays of all employees
    int n = Ve.size();
    for (int i = 0; i < n; i++) {
        Ve[i] -> printPay(); //calling printPay function to show payment of employees
    }
}

