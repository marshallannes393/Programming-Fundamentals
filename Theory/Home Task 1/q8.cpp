#include <iostream>
using namespace std;

int main() {
    int vegprice, fruitprice, totalrps;
    int vegkgs, fruitkgs;
    cout<<"enter veg price,fruitprice amount of vegetables and fruits in respective order:";
    cin >> vegPrice >> fruitPrice >> vegKgs >> fruitKgs;
    
    totalRps = ((vegPrice * vegKgs) + (fruitPrice * fruitKgs)) / 1.94;
    cout << totalRps << endl;
    return 0;
}