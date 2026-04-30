#include <iostream>
using namespace std;

bool isId(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && mat[i][j] != 1) return false;
            if (i != j && mat[i][j] != 0) return false;
        }
    }
    return true;
}

int main() {
    int mat[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> mat[i][j];
    }
    if (isId(mat)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}