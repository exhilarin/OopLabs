#include <iostream>
using namespace std;

class   Rectangle
{
    public:
    int width; 
    int height;

    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    Rectangle operator+(const Rectangle& r) 
    {
        return Rectangle(width + r.width, height + r.height);
    }

    void display()
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() 
{
    Rectangle r1(4, 5);
    Rectangle r2(6, 7);
    Rectangle r3 = r1 + r2;

    cout << "Rectangle 1: "; r1.display();
    cout << "Rectangle 2: "; r2.display();
    cout << "Rectangle 1 + Rectangle 2 = Rectangle 3: "; r3.display();
    return 0;
}