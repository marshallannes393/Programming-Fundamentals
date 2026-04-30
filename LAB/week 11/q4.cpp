#include <iostream>
using namespace std;

void printSum(int box[][3], int r) {
    int total = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < 3; j++) total += box[i][j];
    }
    cout << total << endl;
}

int main() {
    int r;
    cin >> r;
    int box[100][3];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < 3; j++) cin >> box[i][j];
    }
    printSum(box, r);
    return 0;
}