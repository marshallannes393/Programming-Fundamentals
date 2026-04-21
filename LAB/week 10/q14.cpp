#include <iostream>
#include <string>
using namespace std;

string numberToText(int num) {
    if (num < 1 || num > 99) return "Out of range";

    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                     "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 20) {
        return ones[num];
    } else {
        int tenDigit = num / 10;
        int oneDigit = num % 10;
        return tens[tenDigit] + ones[oneDigit];
    }
}

int main() {
    int num;
    cout << "Enter a number [1...99]: ";
    cin >> num;
    cout << numberToText(num) << endl;
    return 0;
}