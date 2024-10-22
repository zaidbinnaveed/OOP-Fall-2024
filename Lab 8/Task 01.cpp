#include<iostream>
#include<string>
using namespace std;

class Book
{
    string title;
    string author;
    string publisher;
    public:
    
    Book(string t, string a, string p)
    {
        title = t;
        author = a;
        publisher = p;
    }
    
    void display()
    {
        cout << "Book title: " << title << endl;
        cout << "Author name: "<< author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class FictionBook : public Book
{
    string genre;
    string protagonist;
    public:
    
    FictionBook(string t, string a, string p, string g, string pr) : Book(t, a, p)
    {
        genre = g;
        protagonist = pr;
    }
    
    void display()
    {
        Book :: display();
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main()
{
    FictionBook f("1984", "George Orwell", "Secker & Warburg", "Dystopian", "Winston Smith");
    f.display();
}
