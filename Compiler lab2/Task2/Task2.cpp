
#include <iostream>
#include <string>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%'|| c=='=';
}

int main() {
    string n;

    cout << "Enter input: ";
    cin>>n;

    int operatorCount = 0;

    cout << "Operators in the input:\n";
    for (char c : n) {
        if (isOperator(c)) {
            cout << "Operator " << operatorCount++ << " : " << c << endl;
        }
    }

    return 0;
}
