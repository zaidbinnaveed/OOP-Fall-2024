#include <iostream>
#include <string>
using namespace std;

struct LibraryBook {
    string title;
    string author;
    int year;
    string genre;
};

void displayBook(const LibraryBook &b) {
    cout << "Title: " << b.title << ", Author: " << b.author << ", Year: " << b.year << ", Genre: " << b.genre << endl;
}

void addBook(LibraryBook books[], int &count) {
    if (count >= 100) return;
    cout << "Enter title: ";
    getline(cin, books[count].title);
    cout << "Enter author: ";
    getline(cin, books[count].author);
    cout << "Enter year: ";
    cin >> books[count].year;
    cin.ignore();
    cout << "Enter genre: ";
    getline(cin, books[count].genre);
    count++;
}

void updateBook(LibraryBook &b) {
    cout << "Update title: ";
    getline(cin, b.title);
    cout << "Update author: ";
    getline(cin, b.author);
    cout << "Update year: ";
    cin >> b.year;
    cin.ignore();
    cout << "Update genre: ";
    getline(cin, b.genre);
}

void findBook(LibraryBook books[], int count) {
    string query;
    cout << "Enter title or author to search: ";
    getline(cin, query);
    for (int i = 0; i < count; i++) {
        if (books[i].title == query || books[i].author == query) {
            displayBook(books[i]);
            return;
        }
    }
    cout << "Book not found." << endl;
}

int main() {
    LibraryBook inventory[100];
    int totalBooks = 0;
    int choice;
    while (true) {
        cout << "1. Add Book\n2. Display Books\n3. Find Book\n4. Update Book\n5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            addBook(inventory, totalBooks);
        } else if (choice == 2) {
            for (int i = 0; i < totalBooks; i++) {
                displayBook(inventory[i]);
            }
        } else if (choice == 3) {
            findBook(inventory, totalBooks);
        } else if (choice == 4) {
            int index;
            cout << "Enter index to update: ";
            cin >> index;
            cin.ignore();
            if (index >= 0 && index < totalBooks) {
                updateBook(inventory[index]);
            } else {
                cout << "Invalid index." << endl;
            }
        } else if (choice == 5) {
            break;
        }
    }
    return 0;
}
