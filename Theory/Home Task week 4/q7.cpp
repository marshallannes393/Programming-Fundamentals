#include <iostream>
#include <string>
using namespace std;

int main() {
    string type;
    cout << "Type: "; 
cin >> type;

    if (type == "square") {
        double s; 
cin >> s; 
cout << s * s << endl; 
    } else if (type == "rectangle") {
        double l, w;
 cin >> l >> w;
 cout << l * w << endl; 
    } else if (type == "circle") {
        double r; 
cin >> r; 
cout << 3.14159 * r * r << endl; 
    } else if (type == "triangle") {
        double b, h;
 cin >> b >> h;
 cout << 0.5 * b * h << endl; 
    }
    return 0;
}