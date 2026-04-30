#include <iostream>
using namespace std;

void swapBigCol(int arr[][5], int rows) {
    int bigCol = 0;
    int maxVal = -1;

    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += arr[i][j];
        if (sum > maxVal) {
            maxVal = sum;
            bigCol = j;
        }
    }

    for (int i = 0; i < rows; i++) {
        int temp = arr[i][0];
        arr[i][0] = arr[i][bigCol];
        arr[i][bigCol] = temp;
    }
}

int main() {
    int arr[3][5] = {{1, 20, 3, 4, 5}, {1, 20, 3, 4, 5}, {1, 20, 3, 4, 5}};
    swapBigCol(arr, 3);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}