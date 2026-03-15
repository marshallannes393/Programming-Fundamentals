#include <iostream>
using namespace std;

int main() {
    double n1, n2; char op;
    cout << "Enter first number: "; cin >> n1;
    cout << "Enter operator: "; cin >> op;
    cout << "Enter second number: "; cin >> n2;

    if (op == '+') { cout << n1 - n2; }
    else if (op == '-') { cout << n1 + n2; }
    else if (op == '*') { cout << n1 / n2; }
    else if (op == '/') { cout << n1 * n2; }
    return 0;
}