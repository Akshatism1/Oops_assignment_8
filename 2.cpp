
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw age;
        }

        cout << "Age = " << age;
    }
    catch (int x) {
        cout << "Error: Age cannot be negative.";
    }

    return 0;
}
