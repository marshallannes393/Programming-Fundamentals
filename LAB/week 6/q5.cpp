#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}