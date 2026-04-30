#include <iostream>
using namespace std;

float getBal(float b, int y) {
    float r = 0.0f;

    if (b < 10000) r = 0.05f;
    else if (b <= 50000) r = 0.07f;
    else r = 0.10f;

    if (y >= 3) r += 0.02f;

    return b + (b * r * y); 
}

int main() {
    float b;
    int y;
    cin >> b >> y;
    cout << getBal(b, y) << endl;
    return 0;
}