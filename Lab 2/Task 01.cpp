#include <iostream>
using namespace std;

void recursiveSwap(int &m, int &n, int step = 0) {
    if (step == 3) return;

    if (step == 0) {
        m = m + n;
    } else if (step == 1) {
        n = m - n;
    } else if (step == 2) {
        m = m - n;
    }

    recursiveSwap(m, n, step + 1);
}

int main() {
    int p , q ;
    cout << "Enter value for p : ";
    cin >> p;
    cout << "Enter value for q : ";
    cin >> q;
    
    cout << "Before swapping: p = " << p << ", q = " << q << endl;

    recursiveSwap(p, q);

    cout << "After swapping: p = " << p << ", q = " << q << endl;

    return 0;
}
