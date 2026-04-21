#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << pow(base, exponent) << endl;
    return 0;
}