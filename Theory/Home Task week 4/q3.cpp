#include <iostream>
using namespace std;

int main() {
    int t1, t2, diff;
    cout << "Temperature City 1: "; 
cin >> t1;
    cout << "Temperature City 2: "; 
cin >> t2;

    diff = t1 - t2;
    if (diff < 0) { diff = -diff; } 
    if (diff > 10) {
        cout << "Difference is too Big" << endl; 
    }
    cout << "Program Ends" << endl;
    return 0;
}