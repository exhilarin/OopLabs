#include <iostream>
#include <string>
using namespace std;

class Book 
{
    public:
    string title;
    string author;

    Book(string t, string a) : title(t), author(a) {}

    void displayInfo()
    {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class EBook : public Book
{
    public:
    double fileSizeMB;

    EBook(string t, string a, double size) : Book(t, a), fileSizeMB(size) {}

    void displayEBookInfo()
    {
        displayInfo();
        cout << "File Size: " << fileSizeMB << " MB" << endl;
    }
};

int main() 
{
    EBook ebook("OOP with C++", "Dr. Wadhah", 2.5);
    ebook.displayEBookInfo();
    return 0;
}