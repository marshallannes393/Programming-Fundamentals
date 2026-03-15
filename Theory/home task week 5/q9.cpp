#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, count = 0;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the digit: ";
    cin >> digit;

    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number = number / 10;
    }
    cout << "Frequency of " << digit << " is: " << count << endl;
    return 0;
}