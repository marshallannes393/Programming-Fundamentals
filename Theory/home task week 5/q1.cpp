#include <iostream>
using namespace std;

int main() {
    char input = ' ';
    while (input != 'n') {
        cout << "I am happy" << endl;
        cout << "Enter any key to continue or 'n' to stop: ";
        cin >> input;
    }
    return 0;
}