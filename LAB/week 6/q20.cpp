#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string chords[100];

    cout << "How many chords? ";
    cin >> n;
    
    cout << "Enter chords:\n";
    for(int i = 0; i < n; i++) {
        cin >> chords[i];
    }

    cout << "Result: [";
    for(int i = 0; i < n; i++) {
        // Check if the string already ends with '7'
        if(chords[i].back() != '7') {
            chords[i] += "7";
        }
        cout << "\"" << chords[i] << "\"" << (i < n - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}