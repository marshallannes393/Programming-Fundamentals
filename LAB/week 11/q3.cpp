#include <iostream>
using namespace std;

void showCars(int cars[][5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) cout << cars[i][j] << " ";
        cout << endl;
    }
}

void findToyotaBlue(int cars[][5], int rows) {
    for (int i = 0; i < rows; i++) {
        if (cars[i][0] == 1 && cars[i][1] == 1) {
            cout << "Toyota Blue at row " << i << endl;
        }
    }
}

int countRed(int cars[][5], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][1] == 2) count++;
    }
    return count;
}

int countNissan(int cars[][5], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][0] == 2) count++;
    }
    return count;
}

int colorSum(int cars[][5], int rows, int color) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        if (cars[i][1] == color) sum++;
    }
    return sum;
}

void flipMatrix(int cars[][5], int rows) {
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < rows; i++) cout << cars[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int list[3][5] = {{1, 1, 10, 15, 20}, {2, 2, 5, 10, 12}, {1, 2, 8, 5, 4}};
    showCars(list, 3);
    findToyotaBlue(list, 3);
    cout << countRed(list, 3) << endl;
    cout << countNissan(list, 3) << endl;
    cout << colorSum(list, 3, 2) << endl;
    flipMatrix(list, 3);
    return 0;
}