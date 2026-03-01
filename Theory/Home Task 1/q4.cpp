#include <iostream>
using namespace std;

int main() {
    float i, p;
    int chance;
    cout << "Enter Imposter count: ";
    cin >> i;
    cout << "Enter Player count: ";
    cin >> p;
    chance = 100 * (i / p);
    cout << "Chance of being an imposter: " << chance << "%" << endl;
    return 0;
}