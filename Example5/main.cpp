//main.cpp
#include <iostream>
#include "CRadius.h"
using namespace std;

int main() {
    CRadius CR1; // автоматичний об'єкт
    volatile CRadius CR2; // непостійний об'єкт
    double d;
    // автоматичний об'єкт
    CR1.SetRadius(5.5);
    d = CR1.GetRadius2(); // d = 5.5
    cout << d << " ";
    // непостійний об'єкт
    CR2.SetRadius(6.7);
    d = CR2.GetRadius2(); // d = 6.7
    cout << d << " ";
    system("pause");
    return 0;
}
