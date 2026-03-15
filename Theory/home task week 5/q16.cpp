#include <iostream>
using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "\n1. Add Books\n2. View Books\n3. Borrow Books\n4. View Books\n5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5) break;
        if (choice >= 1 && choice <= 4) cout << "Option " << choice << " selected." << endl;
        else cout << "Invalid choice!" << endl;
    }
    return 0;
}