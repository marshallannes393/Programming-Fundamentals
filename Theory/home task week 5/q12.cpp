#include <iostream>
using namespace std;

int main() {
    int age, toyPrice, toys = 0;
    double machinePrice, totalMoney = 0, moneyGift = 10;
    cin >> age >> machinePrice >> toyPrice;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            totalMoney = totalMoney + (moneyGift - 1);
            moneyGift = moneyGift + 10;
        } else {
            toys++;
        }
    }
    totalMoney = totalMoney + (toys * toyPrice);

    if (totalMoney >= machinePrice) {
        cout << "Yes! " << totalMoney - machinePrice << endl;
    } else {
        cout << "No! " << machinePrice - totalMoney << endl;
    }
    return 0;
}