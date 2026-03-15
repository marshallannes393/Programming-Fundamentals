#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double inheritance;
    int targetYear, age = 18;
    cin >> inheritance >> targetYear;

    for (int year = 1800; year <= targetYear; year++) {
        if (year % 2 == 0) {
            inheritance = inheritance - 12000;
        } else {
            inheritance = inheritance - (12000 + 50 * age);
        }
        age++;
    }

    cout << fixed << setprecision(2);
    if (inheritance >= 0) {
        cout << "Yes! He will live a carefree life and will have " << inheritance << " dollars left." << endl;
    } else {
        cout << "He will need " << -inheritance << " dollars to survive." << endl;
    }
    return 0;
}