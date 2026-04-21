#include <iostream>
#include <string>
using namespace std;

void printReverse(string str) {
    cout << "Reversed string: ";
    for(int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    
    printReverse(word);
    return 0;
}