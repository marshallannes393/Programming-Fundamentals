#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, count = 0;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;

    long long temp = number;
    if (temp == 0 && digit == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            int lastDigit = temp % 10;
            if (lastDigit == digit) {
                count++;
            }
            temp = temp / 10;
        }
    }

    cout << "Frequency of " << digit << " in " << number << " is: " << count << endl;
    return 0;
}