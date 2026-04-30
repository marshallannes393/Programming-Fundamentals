#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

bool checkStrong(int n) {
    int old = n;
    int sum = 0;

    while (n > 0) {
        sum += fact(n % 10);
        n /= 10;
    }

    return sum == old;
}

int main() {
    int n;
    cin >> n;
    cout << checkStrong(n) << endl;
    return 0;
}