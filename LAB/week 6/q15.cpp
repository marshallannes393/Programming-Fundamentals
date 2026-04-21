#include <iostream>
using namespace std;

int main() {
    int arr1[2], n;
    int arr2[100], result[102];

    cout << "Enter 2 elements for the first array: ";
    cin >> arr1[0] >> arr1[1];

    cout << "Enter size of second array: ";
    cin >> n;
    cout << "Enter elements for second array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    result[0] = arr1[0];
    
    
    for(int i = 0; i < n; i++) {
        result[i + 1] = arr2[i];
    }
    
    
    result[n + 1] = arr1[1];

    cout << "Result: [";
    for(int i = 0; i < n + 2; i++) {
        cout << result[i] << (i < n + 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}