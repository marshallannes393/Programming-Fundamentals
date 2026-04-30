#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string checkTime(int need, int d, int w) {
    float actDays = d * 0.9f;
    int tot = floor((actDays * 8 * w) + (d * 2 * w));
    
    if (tot >= need) {
        int left = tot - need;
        return "Yes!" + to_string(left) + " hours left.";
    } else {
        int more = need - tot;
        return "Not enough time!" + to_string(more) + " hours needed.";
    }
}

int main() {
    int need, d, w;
    cin >> need >> d >> w;
    cout << checkTime(need, d, w) << endl;
    return 0;
}