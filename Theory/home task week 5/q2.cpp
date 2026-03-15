#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    while (true) {
        cout << "Enter a number: ";
        cin >> number;
        if (number < 0) break;
        sum += number;
    }
    cout << "Total Sum: " << sum << endl;
    return 0;
}