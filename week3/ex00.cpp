#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string  name;
    int     age;

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
    int     age;
    string  name;
    string  gender;
    string  occupation;

    Person P1;
    
    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Enter Your Gender: ";
    getline(cin, gender);
    cout << "Enter Your Occupation: ";
    getline(cin, occupation);
    cout << "Enter Your Age: ";
    cin >> age;

    P1.name = name;
    P1.age = age;
    P1.setGender(gender);
    P1.setOccupation(occupation);

    cout<< "Your Information :";
    cout<< "Name             : " << P1.name << endl;
    cout<< "Gender           : " << P1.getGender() << endl;
    cout<< "Occupation       : " << P1.getOccupation() << endl;
    cout<< "Age              : " << P1.age;
}