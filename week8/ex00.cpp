#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
    public:
    virtual void area()
    {
        cout << "Area of generic shape" << endl;
    }
};

class Rectangle : public Shape
{
    private:
    double width, height;

    public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void area()
    {
        cout << "Rectangle area: " << width * height << endl;
    }
};

class Circle : public Shape
{
    private:
    double radius;

    public:
    Circle(double r) : radius(r) {}

    void area()
    {
        cout << "Circle area: " << 3.14 * radius * radius << endl;
    }
};

int main() 
{
    Shape* s;
    Rectangle r(4.0, 5.0);
    Circle c(3.0);

    s = &r;
    s->area();
    s = &c;
    s->area();
    return 0;
}