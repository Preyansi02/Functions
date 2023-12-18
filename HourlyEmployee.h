//Preyansi Patel
//03/27/2021
//hour.h

#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
using namespace std;
//inherets from Employee class
class HourlyEmployee : public Employee {
    private:
        double hours;
        double payRate; // per hour rate
    public:
        HourlyEmployee(int id, double hrs, double rate); // constructor
        double getHours() const; // get hours
        double getPayRate() const; // get rate
        void printPay(); // print pay
};

#endif
