#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1, n2, n3;
    int a1, a2, a3;
    cout << "Brother 1 info: ";
    cin >> n1 >> a1;
    cout << "Brother 2 info: ";
    cin >> n2 >> a2;
    cout << "Brother 3 info: "; 
    cin >> n3 >> a3;

    if (a1 < a2 && a1 < a3) { cout << n1 << " is youngest"; }
    else if (a2 < a1 && a2 < a3) { cout << n2 << " is youngest"; }
    else { cout << n3 << " is youngest"; }
    return 0;
}