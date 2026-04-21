#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    cout << "Halting execution for 200 milliseconds..." << endl;
    Sleep(200);
    cout << "Execution resumed!" << endl;
    return 0;
}