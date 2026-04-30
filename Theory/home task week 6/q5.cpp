#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string names[100];
    
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    
    char letter;
    cin >> letter;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (names[i][0] == letter) cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}