#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    cout << "Please Enter your name: "; 
    cin >> name;

    if (name == "ali") {
        cout << "Welcome " << name << endl; 
    } else { 
        cout << "Try again!" << endl; 
    }

    return 0;
}