#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The greater number is: " << max(num1, num2) << endl;
    return 0;
}