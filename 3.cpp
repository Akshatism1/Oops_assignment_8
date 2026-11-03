
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    try {
        if (num < 0) {
            throw 1;
        }
        else if (num > 100) {
            throw 2;
        }

        cout << "Number is valid.";
    }
    catch (int x) {
        if (x == 1) {
            cout << "Error: Number cannot be negative.";
        }
        else if (x == 2) {
            cout << "Error: Number cannot be greater than 100.";
        }
    }

    return 0;
}
