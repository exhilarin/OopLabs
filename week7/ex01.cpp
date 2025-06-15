#include <iostream>
using namespace std;

class Calculator 
{
    protected:
    int a;
    int b;

    public:
    Calculator(int x, int y) : a(x), b(y) {}

    void compute()
    {
        cout << "Sum: " << (a + b) << endl;
    }
};

class AdvancedCalculator : public Calculator 
{
    public:
    AdvancedCalculator(int x, int y) : Calculator(x, y) {}

    void compute() 
    {
        cout << "Product: " << (a * b) << endl;
    }
};

int main()
{
    Calculator calc(4, 5);
    AdvancedCalculator advCalc(4, 5);
    calc.compute();
    advCalc.compute();
    return 0;
}