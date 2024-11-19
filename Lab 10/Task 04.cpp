#include<iostream>
using namespace std;

class PrintClass;

class Perimeter {
private:
    double length;
    double breadth;

public:
    Perimeter(double l, double b) : length(l), breadth(b) {}

    double calculatePerimeter() {
        return 2 * (length + breadth);
    }

    friend class PrintClass;
};

class PrintClass {
public:
    void displayPerimeter(Perimeter &p) {
        cout << "Perimeter: " << p.calculatePerimeter() << endl;
    }
};

int main() {
    Perimeter p(10, 5);
    PrintClass print;
    
    print.displayPerimeter(p);

    return 0;
}
