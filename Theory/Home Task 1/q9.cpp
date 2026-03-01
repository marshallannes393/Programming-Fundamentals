#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a 4-digit number: ";
    cin >> num;
    
    sum += num % 10; // 4th digit
    num = num / 10;
    sum += num % 10; // 3rd digit
    num = num / 10;
    sum += num % 10; // 2nd digit
    num = num / 10;
    sum += num % 10; // 1st digit
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}