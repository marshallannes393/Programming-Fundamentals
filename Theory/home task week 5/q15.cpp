#include <iostream>
using namespace std;

int main() {
    int choice;
    double n1, n2;
    while (true) {
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Clear Screen\n6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> n1 >> n2;
        }

        if (choice == 1) cout << "Sum: " << n1 + n2 << endl;
        else if (choice == 2) cout << "Difference: " << n1 - n2 << endl;
        else if (choice == 3) cout << "Product: " << n1 * n2 << endl;
        else if (choice == 4) {
            if (n2 != 0) cout << "Result: " << n1 / n2 << endl;
            else cout << "Error: Division by zero!" << endl;
        } else if (choice == 5) cout << "Screen cleared." << endl;
        else cout << "Invalid choice!" << endl;
    }
    return 0;
}