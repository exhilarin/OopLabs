#include <iostream>
using namespace std;

class Calculator 
{
    public:

    void calculate(int a, int b) 
    {
        cout << "Sum of integers: " << a + b << endl;
    }

    void calculate(double a, double b) 
    {
        cout << "Sum of doubles: " << a + b << endl;
    }

    void calculate(string a, string b) 
    {
        cout << "Concatenated strings: " << a + b << endl;
    }
};

int main() 
{
    Calculator calc;

    calc.calculate(10, 20);
    calc.calculate(5.5, 2.2);
    calc.calculate("Hello, ", "C++");
    return 0;
}