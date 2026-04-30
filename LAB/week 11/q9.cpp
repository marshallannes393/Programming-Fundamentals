#include <iostream>
using namespace std;

int countMatches(int data[][3], int rows) {
    int ans = 0;
    for (int i = 0; i < rows; i++) {
        bool match = false;
        for (int j = 0; j < rows; j++) {
            if (i == j) continue;
            if (data[i][0] == data[j][0] && data[i][1] == data[j][1] && data[i][2] == data[j][2]) {
                match = true;
                break;
            }
        }
        if (match) ans++;
    }
    return ans;
}

int main() {
    int data[4][3] = {{0, 0, 0}, {0, 1, 2}, {0, 0, 0}, {2, 1, 0}};
    cout << countMatches(data, 4) << endl;
    return 0;
}