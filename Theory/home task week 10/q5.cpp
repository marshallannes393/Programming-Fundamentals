#include <iostream>
using namespace std;

float getSal(float b, int s, int exp) {
    float pct = 0.0f;

    if (s >= 90) pct = 0.20f;
    else if (s >= 75) pct = 0.10f;
    else pct = 0.05f;

    if (exp >= 5) pct += 0.05f;

    return b + (b * pct);
}

int main() {
    float b;
    int s, exp;
    cin >> b >> s >> exp;
    cout << getSal(b, s, exp) << endl;
    return 0;
}