#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, number;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cout << "Enter count of numbers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number < 200) p1++;
        else if (number >= 200 && number <= 399) p2++;
        else if (number >= 400 && number <= 599) p3++;
        else if (number >= 600 && number <= 799) p4++;
        else p5++;
    }

    cout << fixed << setprecision(2);
    cout << (p1 / n) * 100 << "%" << endl;
    cout << (p2 / n) * 100 << "%" << endl;
    cout << (p3 / n) * 100 << "%" << endl;
    cout << (p4 / n) * 100 << "%" << endl;
    cout << (p5 / n) * 100 << "%" << endl;
    return 0;
}