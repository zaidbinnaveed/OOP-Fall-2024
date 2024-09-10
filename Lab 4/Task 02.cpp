#include<iostream>
using namespace std;

class Book{
    string name;
    string author;
    long long ISBN;
    int tpc;
    int cpc;

    public:

    Book(){
        name = "";
        author = "";
        ISBN = 10234567;
        tpc = 1000;
        cpc = 0;
    }

    int pageCount() {
        return tpc - cpc;
    }
    void getinfo();
    void showinfo();
};

void Book :: getinfo(){
    cout << "Enter book name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter author name : ";
    cin.ignore();
    getline(cin, author);
    cout << "Enter ISBN number : ";
    cin >> ISBN;
    cout << "Enter the number of total pages in the book : ";
    cin >> tpc;
    cout << "Enter the total number of pages you have read : ";
    cin >> cpc;
}
void Book :: showinfo(){
    cout << "Book name : " << name << endl;
    cout << "Author : " << author << endl;
    cout << "ISBN number : " << ISBN << endl;
    cout << "Total number of pages in the book : " << tpc << endl;
    cout << "Total number of pages read : " << cpc << endl;
}

int main(){

    Book book1;
    Book book2;
    book1.getinfo();
    book2.getinfo();
    cout << "Information regarding the first book:\n";
    book1.showinfo();
    cout << "Information regarding the second book:\n";
    book2.showinfo();
}
