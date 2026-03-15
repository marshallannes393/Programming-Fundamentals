#include <iostream>
#include <string>
using namespace std;

int main() {
    string country;
    double price, finalPrice;

    cout << "Enter Country: "; cin >> country;
    cout << "Enter Ticket Price: "; cin >> price;

    if (country == "Ireland") {
        finalPrice = price - (price * 0.10); // 10% discount [cite: 317]
    } else {
        finalPrice = price - (price * 0.05); // 5% discount [cite: 317]
    }

    cout << "Discounted Price: " << finalPrice << endl;
    return 0;
}