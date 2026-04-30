#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float getVol(float l, float w, float h, string u) {
    float v = (l * w * h) / 3.0f;
    
    if (u == "millimeters") v *= pow(10.0f, 9.0f);
    else if (u == "centimeters") v *= pow(10.0f, 6.0f);
    else if (u == "kilometers") v *= pow(10.0f, -9.0f);

    return v;
}

int main() {
    float l, w, h;
    string u;
    cin >> l >> w >> h >> u;
    
    float ans = getVol(l, w, h, u);
    cout << ans << " cubic " << u << endl;
    
    return 0;
}