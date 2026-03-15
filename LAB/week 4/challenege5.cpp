#include <iostream>
using namespace std;

int main() {
    double bill;
    cout << "Enter your bill: "; cin >> bill;

    if (bill <= 5000) {
        cout << "Your discounted bill is: " << bill * 0.95;
    } else {
        cout << "Your discounted bill is: " << bill * 0.90;
    }
    return 0;
}