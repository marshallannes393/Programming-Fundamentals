#include <iostream>
using namespace std;

void getExtremes(int vals[], int n) {
    int big = vals[0];
    int small = vals[0];
    
    for (int i = 1; i < n; i++) {
        if (vals[i] > big) big = vals[i];
        if (vals[i] < small) small = vals[i];
    }
    
    cout << "Largest: " << big << endl;
    cout << "Smallest: " << small << endl;
}

int main() {
    int n;
    cin >> n;
    int vals[100];
    
    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }
    
    getExtremes(vals, n);
    return 0;
}