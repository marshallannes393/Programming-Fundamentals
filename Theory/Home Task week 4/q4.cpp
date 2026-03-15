#include<iostream>
using namespace std;

int main() {
    int cost;
    cout << "Enter the cost of the dress: "; 
    cin >> cost; 

    if (cost < 1500) { 
        cout << "Buy the dress" << endl; 
    } else { 
        cout << "Do not buy the dress" << endl; 
    }

    return 0;
}