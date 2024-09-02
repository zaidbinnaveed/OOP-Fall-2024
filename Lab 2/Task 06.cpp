#include <iostream>
using namespace std;

int calculateGCD(int x, int y) {
    if (y == 0) return x;
    return calculateGCD(y, x % y);
}

int calculateLCM(int x, int y) {
    return (x * y) / calculateGCD(x, y);
}

int main() {
    int num1, num2;
    
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    int gcdResult = calculateGCD(num1, num2);
    int lcmResult = calculateLCM(num1, num2);

    cout << "GCD: " << gcdResult << endl;
    cout << "LCM: " << lcmResult << endl;

    return 0;
}
