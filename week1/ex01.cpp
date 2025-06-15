#include <iostream>
using namespace std;

class Car 
{
    private:

    string brand;
    string model;

    public:

    int milage;
    int fuel;

    void setBrand (string b)
    {
        brand = b; 
    }

    void setModel (string m)
    {
        model = m;
    }

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

    mycar.setBrand("Mercedes");
    mycar.setModel("Benz");
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
