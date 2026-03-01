#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
    int add, mult, sub, finalresult;

    cout << "Enter 15 numbers: " << endl;
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10>>n11>>n12>>n13>>n14>>n15;

    add = n1 + n2 + n3 + n4 + n5;
    mult = n6 * n7 * n8 * n9 * n10;
    sub = n11 - n12 - n13 - n14 - n15;

    finalresult = (add + mult) - sub;
    cout << "The final result is: " << finalresult << endl;
    return 0;
}