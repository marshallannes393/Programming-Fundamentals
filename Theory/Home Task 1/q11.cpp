#include <iostream>
using namespace std;

int main() {
    int age, moves, avg;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter number of times you've moved: ";
    cin >> moves;
    
    avg = age / (moves + 1);
    cout << "Average years lived in a single house: " << avg << endl;
    return 0;
}