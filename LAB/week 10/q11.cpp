#include <iostream>
using namespace std;

bool IsSymmetrical(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    
    if (IsSymmetrical(num)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}