#include <iostream>
using namespace std;

int main() {
    float pounds, cost, area, costperpound, costpersquarefoot;
    cout << "Enter the weight of the fertilizer bag in pounds: ";
    cin >> pounds;
    cout << "Enter the cost of the bag: ";
    cin >> cost;
    cout << "Enter the area in square feet that the bag can cover: ";
    cin >> area;
    
    costperpound = cost / pounds;
    costpersquarefoot = cost / area;
    
    cout << "Cost of fertilizer per pound: " << costperpound << endl;
    cout << "Cost of fertilizing per square foot: " << costpersquarefoot << endl;
    return 0;
}