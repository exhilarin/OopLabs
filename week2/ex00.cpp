#include <iostream>
using namespace std;

class Person
{
    private:
    string gender;
    string occupation;

    public:
    string  name;
    int     age;

    void set_gender (string gender)
    {
        this->gender = gender;
    }

    void set_occupation (string occupation)
    {
        this->occupation = occupation;
    }

    void get_gender ()
    {
        cout << "Gender     : " << gender << endl;
    }

    void get_occupation ()
    {
        cout << "Occupation : " << occupation << endl;
    }
};

int main()
{
    string name, gender, occupation;
    int age;
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
    P1.set_gender(gender);
    P1.set_occupation(occupation);
    cout<< "Your Information:" << endl;
    cout << "Name       : " << P1.name << endl;
    cout << "Age        : " << P1.age << endl;
    P1.get_gender();
    P1.get_occupation();
}

// int main()
// {
//     Person my;

//     my.name = "İlyas";
//     my.age = 21;
//     my.set_gender("Male");
//     my.set_occupation("Software Engineering");

//     cout << "Name       : " << my.name << endl;
//     cout << "Age        : " << my.age << endl;
//     my.get_gender();
//     my.get_occupation();
// }
