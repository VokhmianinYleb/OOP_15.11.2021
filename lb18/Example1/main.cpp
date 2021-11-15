//main.cpp
#include <iostream>
#include "CMyPoint.h"
using namespace std;

int main() {
    CMyPoint MP1; // об'єкт класу, що містить inline-функцію
    // виклик звичайної (не inline) функції
    MP1.SetXY(25, 30);
    int tx, ty;
    tx = MP1.GetX(); // виклик не inline функції
    cout << "tx = " << tx << endl;
    ty = MP1.GetY(); // виклик inline функції
    cout << "ty = " << ty << endl;
    system("pause");
    return 0;
}
