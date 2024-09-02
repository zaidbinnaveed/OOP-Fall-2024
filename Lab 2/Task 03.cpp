#include <iostream>
using namespace std;

bool hasSubsetSum(int data[], int length, int target) {
    if (target == 0) return true;
    if (length == 0) return false;
    if (data[length - 1] > target) return hasSubsetSum(data, length - 1, target);
    return hasSubsetSum(data, length - 1, target) || hasSubsetSum(data, length - 1, target - data[length - 1]);
}

int main() {
    int items[] = {3, 34, 4, 12, 5, 2};
    int length = sizeof(items) / sizeof(items[0]);
    int goal = 9;

    if (hasSubsetSum(items, length, goal)) {
        cout << "Subset with the given sum exists." << endl;
    } else {
        cout << "No subset with the given sum exists." << endl;
    }

    return 0;
}
