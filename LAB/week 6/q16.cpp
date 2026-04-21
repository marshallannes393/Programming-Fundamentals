#include <iostream>
using namespace std;

int main() {
    double change[4];
    double totalDue, totalMoney = 0;

    cout << "Enter change [quarters, dimes, nickels, pennies]: ";
    cin >> change[0] >> change[1] >> change[2] >> change[3];
    
    cout << "Enter total due: ";
    cin >> totalDue;

    totalMoney = (change[0] * 0.25) + (change[1] * 0.10) + (change[2] * 0.05) + (change[3] * 0.01);

    if(totalMoney >= totalDue) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}