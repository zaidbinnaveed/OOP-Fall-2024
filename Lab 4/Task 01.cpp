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
        tpc = 1700;
        cpc = 0;
    }
    Book(string bookname, string bookauthor, long long isbnnum, int total, int current){
        name = bookname;
        author = bookauthor;
        ISBN = isbnnum;
        tpc = total;
        cpc = current;
    }
    string getBookname(){
        return name;
    }
    
    string getBookauthor(){
        return author;
    }
    
    long long getisbnnumber(){
        return ISBN;
    }
    
    int getnumber_of_pages(){
        return tpc;
    }

    int pageCount() {
        return tpc - cpc;
    }
};

int main(){

    Book book1;
    Book book2("Game of Thrones", "George R R Martin", 10982763, 3000, 2562);

    cout << "Printing details of Book 1 :\n";
    cout << "Book Name : " << book1.getBookname() << endl;
    cout << "Author : " << book1.getBookauthor() << endl;
    cout << "ISBN number : " << book1.getisbnnumber() << endl;
    cout << "Total page count : " << book1.getnumber_of_pages() << endl;
    int rpc1 = book1.pageCount();
    if(rpc1 == 0){
        cout << "You have finished the book";
    }
    else{
        cout << "There are " << rpc1 << " pages remaining in the book\n";
    }
    cout << "Printing details of Book 2 :\n";
    cout << "Book Name : " << book2.getBookname() << endl;
    cout << "Author : " << book2.getBookauthor() << endl;
    cout << "ISBN number : " << book2.getisbnnumber() << endl;
    cout << "Total page count : " << book2.getnumber_of_pages() << endl;
    int rpc2 = book2.pageCount();
    if(rpc2 == 0){
        cout << "You have finished the book";
    }
    else{
        cout << "There are " << rpc2 << " pages remaining in the book";
    }
}
