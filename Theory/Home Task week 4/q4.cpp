#include <iostream>
using namespace std;

int main() {
    int red, white, tulips;
    double original, discounted;

    cout << "Red Rose: "; 
cin >> red;
    cout << "White Rose: "; 
cin >> white;
    cout << "Tulips: "; 
cin >> tulips;

    original = (red * 2.00) + (white * 4.10) + (tulips * 2.50);

    if (original > 200) {
        discounted = original - (original * 0.20); 
        cout << "Original Price: " << original << endl;
        cout << "Price after Discount: " << discounted << endl;
    } else {
        cout << "Original Price: " << original << endl;
    }
    return 0;
}