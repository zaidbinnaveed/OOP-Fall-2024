#include <iostream>
#include <string>
using namespace std;

class ValidateString {
    string input_string;

public:
    ValidateString(string str) : input_string(str) {}

    bool is_valid() const {
        for (char ch : input_string) {
            if (!isalpha(ch)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    ValidateString str1("HelloWorld");
    ValidateString str2("Hello123");
    ValidateString str3("!Welcome");

    cout << "Is 'Hello World' valid? " << (str1.is_valid() ? "Yes" : "No") << endl;
    cout << "Is 'Hello123' valid? " << (str2.is_valid() ? "Yes" : "No") << endl;
    cout << "Is '!Welcome' valid? " << (str3.is_valid() ? "Yes" : "No") << endl;

    return 0;
}
    // The const keyword ensures that the function doesn't modify any member variables.
    // This is important when we want to guarantee that the function is read-only.
