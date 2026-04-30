#include <iostream>
using namespace std;

void showWorld(char world[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cout << world[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void setGrav(bool &currentGrav, bool status) {
    currentGrav = status;
}

void tick(char world[5][5], bool grav, bool hole, int steps) {
    if (!grav) return;
    for (int s = 0; s < steps; s++) {
        for (int i = 4; i >= 0; i--) {
            for (int j = 0; j < 5; j++) {
                if (world[i][j] == '#') {
                    if (i == 4 && hole) {
                        world[i][j] = '-';
                        world[0][j] = '#';
                    } else if (i < 4 && world[i + 1][j] == '-') {
                        world[i + 1][j] = '#';
                        world[i][j] = '-';
                    }
                }
            }
        }
    }
}

int main() {
    char world[5][5] = {
        {'-', '#', '#', '-', '#'},
        {'#', '-', '-', '#', '-'},
        {'-', '#', '-', '-', '-'},
        {'#', '-', '#', '-', '#'},
        {'#', '-', '-', '-', '-'}
    };
    
    bool grav = false;
    bool hole = false;

    hole = true;
    showWorld(world);
    setGrav(grav, true);
    tick(world, grav, hole, 3);
    showWorld(world);
    
    return 0;
}