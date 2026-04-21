#include <iostream>
using namespace std;

int main() {
    int n;
    double arr[100];
    double totalResistance = 0;

    cout << "Enter number of resistors: ";
    cin >> n;

    cout << "Enter resistance values:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        totalResistance += arr[i];
    }

    cout << "Total Resistance: " << totalResistance << " ohms" << endl;
    return 0;
}