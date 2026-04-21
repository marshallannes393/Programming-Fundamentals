#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output = "";
    cout << "Enter a string: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++) {
        char c = tolower(input[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            output += input[i]; 
        }
    }

    cout << "Output: " << output << endl;
    return 0;
}