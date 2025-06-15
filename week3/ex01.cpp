#include <iostream>
#include <string>
using namespace std;
class Person
{
    private:
    string gender;
    string occupation;

    public:
    string name;
    int age;

    Person(): name("*"), age(0), gender("*"), occupation("*") {}

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
};

int main()
{
    int age;
    string name; 
    string gender; 
    string occupation;

    Person P1;

    cout<< "Your Initial Information:" << endl;
    cout<<"Name: " << P1.name << endl;
    cout<<"Gender: " << P1.getGender() << endl;
    cout<<"Occupation: " << P1.getOccupation() << endl;
    cout<<"Age: " << P1.age << endl;

    cout<< "Let's Update Your Information:" << endl;
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

    cout<<  "Your Information : " << endl;
    cout<<  "Name             : " << P1.name << endl;
    cout<<  "Gender           : " << P1.getGender() << endl;
    cout<<  "Occupation       : " << P1.getOccupation() << endl;
    cout<<  "Age              : " << P1.age;
}