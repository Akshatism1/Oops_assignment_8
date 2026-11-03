
#include <iostream>
using namespace std;

class LibraryAccount {
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int amount) {
        try {
            if (amount > availableBooks) {
                throw amount;
            }

            availableBooks -= amount;
            cout << "Books issued successfully." << endl;
            cout << "Available books = " << availableBooks;
        }
        catch (int x) {
            cout << "Error: Not enough books available.";
        }
    }
};

int main() {
    int books, amount;

    cout << "Enter available books: ";
    cin >> books;

    cout << "Enter books to issue: ";
    cin >> amount;

    LibraryAccount obj(books);
    obj.issueBook(amount);

    return 0;
}
