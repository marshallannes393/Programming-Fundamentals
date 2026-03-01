#include <iostream>
using namespace std;

int main() {
    int minutes, fps, totalframes;
    cout << "Enter the length of the video in minutes: ";
    cin >> minutes;
    cout << "Enter the frames per second: ";
    cin >> fps;
    totalframes = minutes * 60 * fps;
    cout << "Total number of frames: " << totalframes << endl;
    return 0;
}