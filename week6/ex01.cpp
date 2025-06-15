#include <iostream>
using namespace std;

class Student 
{
    public:
    int     id;
    string  name;

    Student(string n, int i) : name(n), id(i) {}

    void displayInfo() 
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    void printRole()
    {
        cout << "I am a student." << endl;
    }
};

class GraduateStudent : public Student 
{
    public:
    string thesisTitle;

    GraduateStudent(string n, int i, string t) : Student(n, i), thesisTitle(t) {}

    void printRole()
    {
        cout << "I am a graduate student working on thesis: " << thesisTitle << endl;
    }
};

int main()
{
    GraduateStudent gs("Ali", 12345, "AI in Education");
    gs.displayInfo();
    gs.printRole();
    return 0;
}