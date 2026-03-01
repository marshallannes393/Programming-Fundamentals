#include <iostream>
#include <string>
using namespace std;

int main() {
    string moviename;
    float adultprice, childprice, totalearned, donation, remaining;
    int adultsold, childsold, percentage;

    cout << "Enter movie name: ";
    cin >> movieName;
    cout << "Enter adult ticket price: ";
    cin >> adultprice;
    cout << "Enter child ticket price: ";
    cin >> childprice;
    cout << "Enter number of adult tickets sold: ";
    cin >> adultsold;
    cout << "Enter number of child tickets sold: ";
    cin >> childsold;
    cout << "Enter percentage of revenue to donate: ";
    cin >> percentage;

    totalEarned = (adultprice * adultsold) + (childprice * childsold);
    donation = totalearned * (percentage / 100.0);
    remaining = totalearned - donation;

    cout << "Movie: " << moviename << endl;
    cout << "Total Amount Generated: " << totalearned << endl;
    cout << "Donation to Charity: " << donation << endl;
    cout << "Remaining Amount: " << remaining << endl;
    return 0;
}