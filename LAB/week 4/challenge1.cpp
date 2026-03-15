#include<iostream>
using namespace std;

int main() {
    int number, remainder;
    cout << "Please Enter the number: ";
    cin >> number;

    remainder = number % 2; 

    if (remainder == 0) {
        cout << "The number is even" << endl; 
    } else {
        cout << "The number is odd" << endl; 
    }

    return 0;
}