#include<iostream>
using namespace std;

class Shape {
private:
    double length;
    double width;

public:
    Shape(double l, double w) : length(l), width(w) {}

    double Area() {
        return length * width;
    }

    Shape operator+(const Shape& other) {
        double totalArea = this->Area() + other.Area();
        return Shape(0, totalArea); // For simplicity, we set length as 0 and total area as width
    }

    void display() {
        cout << "Area: " << Area() << endl;
    }
};

int main() {
    Shape shape1(5, 4);
    Shape shape2(3, 6);

    shape1.display();
    shape2.display();

    Shape shape3 = shape1 + shape2;
    shape3.display();

    return 0;
}
