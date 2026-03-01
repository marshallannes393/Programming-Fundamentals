#include <iostream>
using namespace std;

int main() {
    float initialvelocity, acceleration, time, finalvelocity;
    cout << "Enter Initial Velocity: ";
    cin >> initialvelocity;
    cout << "Enter Acceleration: ";
    cin >> acceleration;
    cout << "Enter Time: ";
    cin >> time;
    finalvelocity = (acceleration * time) + initialvelocity;
    cout << "Final Velocity: " << finalvelocity << endl;
    return 0;
}