#include<iostream>
#include<string>
using namespace std;

int main() {
    string password = "Pass@123!";
    string enter;

    cout << "Enter the password: ";
    cin >> enter;

    if (enter == password) {
        cout << "Wow! You have cracked the code!" << endl; 
    } else {
        cout << "It is not that simple, Try Again" << endl; 
    }

    return 0;
}