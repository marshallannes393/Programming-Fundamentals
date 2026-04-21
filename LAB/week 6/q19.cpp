#include <iostream>
using namespace std;

bool isSpecialArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(i % 2 == 0 && arr[i] % 2 != 0) return false; 
        if(i % 2 != 0 && arr[i] % 2 == 0) return false; 
    }
    return true;
}

int main() {
    int n, arr[100];
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    if(isSpecialArray(arr, n)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}