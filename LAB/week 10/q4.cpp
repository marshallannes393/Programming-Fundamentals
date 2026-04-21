#include <iostream>
using namespace std;

int multiplyByFive(int num) {
    return num * 5;
}

int main() {
    int number, result;
    cout << "Enter a number: ";
    cin >> number;
    result = multiplyByFive(number);
    cout << "Result: " << result << endl;
    return 0;
}