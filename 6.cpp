
#include <iostream>
using namespace std;

class Student {
    int marks[5];

public:
    void inputMarks() {
        int sum = 0;

        try {
            cout << "Enter marks of 5 subjects:" << endl;

            for (int i = 0; i < 5; i++) {
                cin >> marks[i];

                if (marks[i] < 0 || marks[i] > 100) {
                    throw marks[i];
                }

                sum += marks[i];
            }

            float average = sum / 5.0;

            cout << "Average marks = " << average;
        }
        catch (int x) {
            cout << "Error: Marks must be between 0 and 100.";
        }
    }
};

int main() {
    Student s;
    s.inputMarks();

    return 0;
}
