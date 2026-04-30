#include <iostream>
using namespace std;

bool isGoal(char field[7][16]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 16; j++) {
            if (field[i][j] == '0') return true;
        }
    }
    return false;
}

int main() {
    char field[7][16] = {
        "       #  #    ",
        "       # 0#    ",
        "       #  #    ",
        "       ####### ",
        "       #       ",
        "       #       ",
        "       #       "
    };
    if (isGoal(field)) cout << "True\n";
    else cout << "False\n";
    return 0;
}