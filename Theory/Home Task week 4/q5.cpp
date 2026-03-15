#include <iostream>
using namespace std;

int main() {
    int holidays;
    cout << "Holidays: "; cin >> holidays;

    int workDays = 365 - holidays;
    int playTime = (workDays * 63) + (holidays * 127); 
    int diff = 30000 - playTime;

    if (playTime <= 30000) {
        cout << "Tom sleeps well" << endl; 
    } else {
        cout << "Tom will run away" << endl; 
    }

    if (diff < 0) { diff = -diff; }
    cout << diff / 60 << " hours and " << diff % 60 << " minutes ";
    
    if (playTime <= 30000) { cout << "less for play" << endl; }
    else { cout << "for play" << endl; }
    
    return 0;
}