#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    
    double average = sum / 5.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}