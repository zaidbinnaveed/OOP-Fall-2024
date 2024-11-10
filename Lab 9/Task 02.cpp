#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void displayProperties() const = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return PI * radius * radius; }
    double perimeter() const override { return 2 * PI * radius; }
    void displayProperties() const override {
        cout << "Circle Area: " << area() << "\n";
        cout << "Circle Perimeter: " << perimeter() << "\n";
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
    double perimeter() const override { return 2 * (length + width); }
    void displayProperties() const override {
        cout << "Rectangle Area: " << area() << "\n";
        cout << "Rectangle Perimeter: " << perimeter() << "\n";
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

class Triangle : public Shape {
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter() const override { return side1 + side2 + side3; }
    void displayProperties() const override {
        cout << "Triangle Area: " << area() << "\n";
        cout << "Triangle Perimeter: " << perimeter() << "\n";
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}
};

int main() {
    Shape* shape = nullptr;
    int choice;
    cout << "Select Shape: 1. Circle 2. Rectangle 3. Square 4. Triangle\n";
    cin >> choice;
    if (choice == 1) {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        shape = new Circle(radius);
    } else if (choice == 2) {
        double length, width;
        cout << "Enter length and width: ";
        cin >> length >> width;
        shape = new Rectangle(length, width);
    } else if (choice == 3) {
        double side;
        cout << "Enter side: ";
        cin >> side;
        shape = new Square(side);
    } else if (choice == 4) {
        double s1, s2, s3;
        cout << "Enter three sides: ";
        cin >> s1 >> s2 >> s3;
        shape = new Triangle(s1, s2, s3);
    }
    shape->displayProperties();
    delete shape;
    return 0;
}
