#include<iostream>
using namespace std;

int main() {
    char going;
    cout << "Are your friends going? (Press y for yes): "; 
    cin >> going; 

    if (going == 'y') { 
        cout << "You are also going!" << endl; 
    } else { 
        cout << "You are not going!" << endl; 
    }

    return 0;
}