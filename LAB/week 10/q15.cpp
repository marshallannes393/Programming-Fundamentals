#include <iostream>
#include <string>
using namespace std;

string calculatePoolState(int V, int P1, int P2, double H) {
    double waterP1 = P1 * H;
    double waterP2 = P2 * H;
    double totalWater = waterP1 + waterP2;

    if (totalWater <= V) {
        int poolPercent = (totalWater / V) * 100; 
        int p1Percent = (waterP1 / totalWater) * 100;
        int p2Percent = (waterP2 / totalWater) * 100;
        
        return "The pool is " + to_string(poolPercent) + "% full. Pipe 1: " + 
               to_string(p1Percent) + "%. Pipe 2: " + to_string(p2Percent) + "%.";
    } else {
        double overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " + to_string(overflow) + " liters.";
    }
}

int main() {
    int V, P1, P2;
    double H;
    cout << "Enter V, P1, P2, and H: ";
    cin >> V >> P1 >> P2 >> H;
    cout << calculatePoolState(V, P1, P2, H) << endl;
    return 0;
}