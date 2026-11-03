
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }

        cout << "Division = " << a / b;
    }
    catch (int x) {
        cout << "Error: Denominator cannot be zero.";
    }

    return 0;
}
