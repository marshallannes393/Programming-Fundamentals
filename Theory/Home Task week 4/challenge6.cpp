#include <iostream>
using namespace std;

int main() {
    int salary = 10000, laptop = 50000;
    int advance = (salary * 0.5) * 6;

    if (advance >= laptop) {
        cout << "Ali can buy the laptop";
    } else {
        cout << "Months required: " << laptop / salary;
    }
    return 0;
}