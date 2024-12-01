#include <iostream>
#include<string>
using namespace std;

template <typename T>
void swapValues(T &value1, T &value2)
{
    T temp = value1;
    value1 = value2;
    value2 = temp;
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
}

int main()
{
    int value1 = 12;
    int value2 = 2;
    swapValues(value1, value2);
    string name1 = "Zaid";
    string name2 = "Ayan";
    swapValues(name1, name2);
    double num1 = 12.675;
    double num2 = 2.453;
    swapValues(num1, num2);
    return 0;
}
