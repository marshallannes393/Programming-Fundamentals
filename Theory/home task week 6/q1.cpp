#include <iostream>
using namespace std;

void getSum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    cout << total << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    getSum(arr, n);
    return 0;
}