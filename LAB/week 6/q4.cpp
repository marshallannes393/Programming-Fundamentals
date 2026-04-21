#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    cout << "Enter 5 integers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "1st element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    return 0;
}