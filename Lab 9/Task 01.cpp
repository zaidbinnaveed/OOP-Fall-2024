#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

class Shape {
public:
    double area(double radius) { return PI * radius * radius; }
    double area(double length, double width) { return length * width; }
    double area(double base, double height, bool isTriangle) { return 0.5 * base * height; }
    
    double perimeter(double radius) { return 2 * PI * radius; }
    double perimeter(double length, double width) { return 2 * (length + width); }
    double perimeter(double side1, double side2, double side3) { return side1 + side2 + side3; }
};

int main() {
    Shape shape;
    double circleRadius = 15, rectangleLength = 10, rectangleWidth = 15, triangleBase = 10, triangleHeight = 5;
    double triangleSide1 = 10, triangleSide2 = 10, triangleSide3 = 5;

    cout << "Circle Area: " << shape.area(circleRadius) << "\n";
    cout << "Circle Perimeter: " << shape.perimeter(circleRadius) << "\n";
    cout << "Rectangle Area: " << shape.area(rectangleLength, rectangleWidth) << "\n";
    cout << "Rectangle Perimeter: " << shape.perimeter(rectangleLength, rectangleWidth) << "\n";
    cout << "Triangle Area: " << shape.area(triangleBase, triangleHeight, true) << "\n";
    cout << "Triangle Perimeter: " << shape.perimeter(triangleSide1, triangleSide2, triangleSide3) << "\n";

    return 0;
}
