
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0-4): ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw index;
        }

        cout << "Element = " << arr[index];
    }
    catch (int x) {
        cout << "Error: Index out of range.";
    }

    return 0;
}