#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    int temp = n;
    if (temp == 0) {
        count = 1;
    } else {
        for(int i = temp; i > 0; i = i / 10) {
            count = count + 1;
        }
    }
    cout << "Total Number of Digits: " << count << endl;
    return 0;
}