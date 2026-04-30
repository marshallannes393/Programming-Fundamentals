#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[4];
    float prices[4];
    int qty[4];

    for (int i = 0; i < 4; i++) {
        cin >> names[i];
        cin >> prices[i];
        cin >> qty[i];
    }

    for (int i = 0; i < 4; i++) {
        float tot = prices[i] * qty[i];
        cout << names[i] << ": $" << prices[i] << ", " << qty[i] 
             << " in stock, Total value: $" << tot << endl;
    }

    return 0;
}