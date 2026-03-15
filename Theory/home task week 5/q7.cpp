#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of Fibonacci series: ";
    cin >> length;

    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= length; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}