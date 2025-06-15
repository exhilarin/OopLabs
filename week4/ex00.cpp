#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person(string n, int a, string g, string o): name(n), age(a), gender(g), occupation(o) {}

    void setGender(string g)
    {
        gender = g;
    }

    string getGender()
    {
        return gender;
    }

    void setOccupation(string o)
    {
        occupation = o;
    }

    string getOccupation() 
    {
        return occupation;
    }

    private:
    string gender;
    string occupation;
};

int main()
{
    int age;
    string name; 
    string gender; 
    string occupation;

    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Enter Your Gender: ";
    getline(cin, gender);
    cout << "Enter Your Occupation: ";
    getline(cin, occupation);
    cout << "Enter Your Age: ";
    cin >> age;

    Person P1(name, age, gender, occupation);

    cout<< "Your Information: " << endl;
    cout<< "Name            : " << P1.name << endl;
    cout<< "Gender          : " << P1.getGender() << endl;
    cout<< "Occupation      : " << P1.getOccupation() << endl;
    cout<< "Age             : " << P1.age;
}