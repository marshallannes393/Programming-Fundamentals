#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float weight;
    int days;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the weight you want to lose: ";
    cin >> weight;
    days = weight * 15;
    cout << name << ", you will need " << days << " days to lose " << weight << " KGs." << endl;
    return 0;
}