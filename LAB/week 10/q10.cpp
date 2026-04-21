#include <iostream>
#include <string>
using namespace std;

string checkAlphabetCase(char c) {
    if (c>=65 && c<=90) {
        return "You have entered Capital letter";
    } else if (c>=97 && c<=122) {
        return "You have entered small letter";
    }
    return "Invalid Input";
}

int main() {
    char ch;
    cout << "Enter your letter: ";
    cin >> ch;
    cout << checkAlphabetCase(ch) << endl;
    return 0;
}