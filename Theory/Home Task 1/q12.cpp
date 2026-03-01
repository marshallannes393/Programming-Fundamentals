#include <iostream>
using namespace std;

int main() {
    int n, w, h, areaofwall, walls;
    cout << "Enter square meters you can paint: ";
    cin >> n;
    cout << "Enter width of single wall: ";
    cin >> w;
    cout << "Enter height of single wall: ";
    cin >> h;

    areaofwall = w * h;
    walls = n / areaofwall; 
    cout << "Number of complete walls you can paint: " << walls << endl;
    return 0;
}