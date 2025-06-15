#include <iostream>
using namespace std;

class Car 
{
    public:

    string brand;
    string model;
    int milage;
    int fuel;

    void drive (int distance)
    {
        if (fuel <= distance / 10)
        {
            milage += distance;
            fuel -= distance / 10;
        }
        else
            cout << "Not Enough fuel to drive." << distance << "miles!" << endl;
    }

    void refuel(float liters)
    {
        fuel += liters;
    }

    void show_data()
    {
        cout << "Brand  : " << brand << endl;
        cout << "Model  : " << model << endl;
        cout << "Milage : " << milage << endl;
        cout << "Fuel   : " << fuel << endl;
        cout << endl;
    }
};

int main()
{
    Car mycar;

    mycar.brand = "Mercedes";
    mycar.model = "Benz";
    mycar.milage = 0;
    mycar.fuel = 50;

    cout << "Car Before Driving." << endl;
    mycar.show_data();
    mycar.drive(300);
    cout << "Car After Driving 300km." << endl;
    mycar.show_data();
    mycar.refuel(15);
    cout << "Car After Refuel 15 lt." << endl;
    mycar.show_data();
}