#include <iostream>
using namespace std;

class Employee
{
    public:
    virtual void calculateSalary() = 0;
};

class FullTimeEmployee : public Employee
{
    private:
    double monthlySalary;

    public:
    FullTimeEmployee(double salary) : monthlySalary(salary) {}

    void calculateSalary() 
    {
        cout << "Full-time employee salary: " << monthlySalary << " USD" << endl;
    }
};

class PartTimeEmployee : public Employee
{
    private:
    double hoursWorked;
    double hourlyRate;

    public:
    PartTimeEmployee(double hours, double rate) : hoursWorked(hours), hourlyRate(rate) {}

    void calculateSalary()
    {
        cout << "Part-time employee salary: " << hoursWorked * hourlyRate << " USD" << endl;
    }
};

int main()
{
    Employee* e;
    FullTimeEmployee fte(3000);
    PartTimeEmployee pte(80, 20);

    e = &fte;
    e->calculateSalary();
    e = &pte;
    e->calculateSalary();
    return 0;
}