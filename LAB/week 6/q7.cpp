#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    char target;
    bool found = false;

    cout << "Enter a string: ";
    getline(cin, text);
    
    cout << "Enter character to find: ";
    cin >> target;

    for(int i = 0; i < text.length(); i++) {
        if(text[i] == target) {
            found = true;
            break; 
        }
    }

    if(found) cout << "Character found!" << endl;
    else cout << "Character not found." << endl;

    return 0;
}