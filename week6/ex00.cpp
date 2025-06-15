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
};

class GraduateStudent : public Student
{
    public:
    string thesisTitle;

    GraduateStudent(string n, int i, string t) : Student(n, i), thesisTitle(t) {}

    void displayGradInfo()
    {
        displayInfo();
        cout << "Thesis Title: " << thesisTitle << endl; 
    }
};

int main()
{
    GraduateStudent gs("Ali", 12345, "AI in Education");
    gs.displayGradInfo();
    return 0;
}