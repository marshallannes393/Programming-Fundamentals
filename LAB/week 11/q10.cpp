#include <iostream>
using namespace std;

char world[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};
bool grav = false;

void showWorld() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cout << world[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void setGrav(bool status) {
    grav = status;
}

void tick(int steps) {
    if (!grav) return;
    for (int s = 0; s < steps; s++) {
        for (int i = 3; i >= 0; i--) {
            for (int j = 0; j < 5; j++) {
                if (world[i][j] == '#' && world[i + 1][j] == '-') {
                    world[i + 1][j] = '#';
                    world[i][j] = '-';
                }
            }
        }
    }
}

int main() {
    showWorld();
    setGrav(true);
    tick(3);
    showWorld();
    return 0;
}