#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance, angleDegrees, angleRadians, height;
    
    cout << "Enter horizontal distance to the tree (in feet): ";
    cin >> distance;
    cout << "Enter angle of elevation (in degrees): ";
    cin >> angleDegrees;

   
    angleRadians = angleDegrees / 57.2958;

    height = distance * tan(angleRadians);

    cout << "The height of the tree is approximately: " << height << " feet." << endl;
    return 0;
}