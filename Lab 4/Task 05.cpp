#include<iostream>
using namespace std;

class Office {
private:
    string Location;
    int SeatingCapacity;
    string* Furniture;
    int FurnitureSize;

public:
    Office(string loc = " ", int capacity = 0, int furnitureSize = 0)
        : Location(loc), SeatingCapacity(capacity), FurnitureSize(furnitureSize) {
        Furniture = new string[FurnitureSize];
    }

    void setFurniture(int index, string item) {
        if (index >= 0 && index < FurnitureSize) {
            Furniture[index] = item;
        }
    }

    void display() {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture: ";
        for (int i = 0; i < FurnitureSize; i++) {
            cout << Furniture[i];
            if (i != FurnitureSize - 1) cout << ", ";
        }
        cout << endl;
    }

    ~Office() {
        delete[] Furniture;
    }
};

int main() {
    Office* office = new Office("City Center", 50, 3);
    office->setFurniture(0, "Desk");
    office->setFurniture(1, "Chair");
    office->setFurniture(2, "Table");

    office->display();

    delete office;

    return 0;
}
