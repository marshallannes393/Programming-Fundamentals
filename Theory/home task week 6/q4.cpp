#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> names[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }
    
    return 0;
}