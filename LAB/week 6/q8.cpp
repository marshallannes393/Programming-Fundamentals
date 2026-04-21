#include <iostream>
using namespace std;

void displayLocations(char arr[]) {
    cout << "Character locations:\n";
    for(int i = 0; arr[i] != '\0'; i++) {
        cout << "'" << arr[i] << "' is at index " << i << endl;
    }
}

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    
    displayLocations(word);
    return 0;
}