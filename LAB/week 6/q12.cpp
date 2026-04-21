#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == number) return true;
    }
    return false;
}

int main() {
    int n;
    int arr[100];
    int count = 0;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp;

        if(isAlreadyEntered(arr, count, temp)) {
            cout << "Already Entered\n";
            i--; 
        } else {
            arr[count] = temp;
            count++;
        }
    }
    return 0;
}