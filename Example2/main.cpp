//main.cpp
#include <iostream>
#include "CRadius.h"
using namespace std;

int main() {
    CRadius CR;
    double d;
    d = CR.GetRadius2(); // d = 1.0 - виклик функції з константним this
    cout << d << " ";
    d = CR.GetRadius(); // d = 1.0 - виклик звичайної функції-члена
    cout << d << " ";
    system("pause");
    return 0;
}
