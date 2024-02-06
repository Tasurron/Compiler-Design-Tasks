#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isNumericConstant(const string& input) {
    for (char c : input) {
        if (c <'0' || c>'9') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;

    cout << "Enter input: ";
    cin>>n;

    if (isNumericConstant(n)) {
        cout << "Numeric constant\n"<<endl;
    } else {
        cout << "Not numeric\n"<<endl;
    }

    return 0;
}

