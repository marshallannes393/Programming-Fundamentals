#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter lower case character: "; cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "It is a number";
    } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "It is a vowel";
    } else {
        cout << "It is a consonant";
    }
    return 0;
}