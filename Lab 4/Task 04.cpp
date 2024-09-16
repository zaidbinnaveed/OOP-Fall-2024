#include<iostream>
using namespace std;

class Office {
private:
    string Location;
    int SeatingCapacity;
    string Furniture[3];

public:
    Office(string loc = " ", int capacity = 0, string furniture1 = "", string furniture2 = "", string furniture3 = "")
        : Location(loc), SeatingCapacity(capacity) {
        Furniture[0] = furniture1;
        Furniture[1] = furniture2;
        Furniture[2] = furniture3;
    }

    void display() {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture: " << Furniture[0] << ", " << Furniture[1] << ", " << Furniture[2] << endl;
    }
};

int main() {
    Office office1;
    Office office2("Downtown", 100);
    Office office3("City Center", 50, "Desk", "Chair", "Table");

    cout << "Office 1 Details:" << endl;
    office1.display();
    
    cout << "\nOffice 2 Details:" << endl;
    office2.display();
    
    cout << "\nOffice 3 Details:" << endl;
    office3.display();

    return 0;
}
