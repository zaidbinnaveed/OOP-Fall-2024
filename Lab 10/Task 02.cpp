#include<iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    Number& operator--() {
        value *= 4;
        return *this;
    }

    Number operator--(int) {
        Number temp = *this;
        value /= 4;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(8);
    num.display();

    --num;
    num.display();

    num--;
    num.display();

    return 0;
}
