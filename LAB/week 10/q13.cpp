#include <iostream>
#include <string>
using namespace std;

string timeTravel(int hours, int minutes) {
    minutes += 15;
    
    if (minutes >= 60) {
        minutes -= 60;
        hours += 1;
    }
    if (hours >= 24) {
        hours -= 24;
    }
    
    return to_string(hours) + ":" + to_string(minutes);
}

int main() {
    int h, m;
    cout << "Enter current time (hh mm): ";
    cin >> h >> m;
    cout << timeTravel(h, m) << endl;
    return 0;
}