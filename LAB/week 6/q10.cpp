#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for(int i = 0; i < word.length(); i++) {
        if(word[i] == 'z') {
            word[i] = 'a';
        } else if(word[i] == 'Z') {
            word[i] = 'A';
        } else {
            word[i] = word[i] + 1;
        }
    }

    cout << "Output: " << word << endl;
    return 0;
}