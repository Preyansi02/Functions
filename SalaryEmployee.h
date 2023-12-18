

#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
using namespace std;
// SalariedEmployee class inherits from Employee class
class SalariedEmployee : public Employee {
    private:
        double salary; // salary
    public:
        SalariedEmployee(int id, double s);// constructor
        double getSalary() const; // get salary
        void printPay(); // print salary
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
