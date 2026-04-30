#include <iostream>
using namespace std;

void countEvens(int nums[], int n) {
    int evens = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) evens++;
    }
    cout << evens << endl;
}

int main() {
    int n;
    cin >> n;
    int nums[100];
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    countEvens(nums, n);
    return 0;
}