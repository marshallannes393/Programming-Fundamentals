#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    cout << "Enter 5 integers one by one:\n";
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];

    cout << "1st element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    return 0;
}