#include <iostream>
#include <string>
using namespace std;

string fire(char map[5][5], string hit) {
    int r = hit[0] - 'A';
    int c = (hit[1] - '0') - 1;
    if (map[r][c] == '*') return "BOOM";
    return "splash";
}

int main() {
    char map[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };
    string hit;
    cin >> hit;
    cout << fire(map, hit) << endl;
    return 0;
}