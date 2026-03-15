#include <iostream>
using namespace std;

int main() {
    int n1, n2, a, b;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    a = n1;
    b = n2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (n1 * n2) / gcd;

    cout << "GCD is: " << gcd << endl;
    cout << "LCM is: " << lcm << endl;
    return 0;
}