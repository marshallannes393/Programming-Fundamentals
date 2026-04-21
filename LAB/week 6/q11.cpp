#include <iostream>
using namespace std;

void printReverseArray(int arr[], int n) {
    cout << "Reversed Array: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    int arr[100];
    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printReverseArray(arr, n);
    return 0;
}