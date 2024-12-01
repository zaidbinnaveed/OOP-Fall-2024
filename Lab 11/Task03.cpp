#include <iostream>
#include<string>
using namespace std;

template <typename T>
class Pair
{
    T value1, value2;
    public:
    Pair(T val1, T val2) : value1(val1), value2(val2) {}
    T getFirst()
    {
        return value1;
    }
    T getSecond()
    {
        return value2;
    }
    void print_data()
    {
        cout << "Value 1: " << value1 << endl;
        cout << "Value 2: " << value2 << endl;
    }
};

int main()
{
    Pair<int> pair1(25, 37);
    pair1.print_data();
    Pair<double> pair2(23.9876, 25.6784);
    pair2.print_data();
    return 0;
}
