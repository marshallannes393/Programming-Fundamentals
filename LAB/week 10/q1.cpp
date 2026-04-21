#include <iostream>
using namespace std;

void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    printSum(num1, num2);
    return 0;
}