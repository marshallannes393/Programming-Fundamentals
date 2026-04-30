#include <iostream>
using namespace std;

float calcTax(char t, float p) {
    float r = 0.0f;
    
    switch(t) {
        case 'M': r = 0.06f; break;
        case 'E': r = 0.08f; break;
        case 'S': r = 0.10f; break;
        case 'V': r = 0.12f; break;
        case 'T': r = 0.15f; break;
        default: return p;
    }
    
    return p + (p * r);
}

int main() {
    char type;
    float price;

    cin >> type >> price;

    float finalP = calcTax(type, price);

    cout << "The final price on a vehicle of type " << type 
         << " after adding the tax is $" << finalP << "." << endl;

    return 0;
}