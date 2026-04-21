#include <iostream>
using namespace std;

int findLargestNumber(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n, arr[100];
    cout << "How many numbers? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Largest number is: " << findLargestNumber(arr, n) << endl;
    return 0;
}