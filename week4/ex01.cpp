#include <iostream>
#include <string>
using namespace std;

class Person 
{
    private:
    string name;
    int age;

    public:
    Person(string personName, int personAge): name(personName), age(personAge)
    {
        cout << "Constructor: " << name << " (Age: " << age << ") is created!" << endl;
    }

    ~Person()
    { 
        cout << "Destructor: " << name << " is destroyed!" << endl;
    }

    void displayInfo() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{
    cout << "Creating person object..." << endl;
    Person p1("Alice", 25);
    p1.displayInfo();
    cout << "Exiting main function..." << endl;
    return 0;
}