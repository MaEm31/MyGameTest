#include <iostream>
#include "Character.h"
#include "generalFunctions.h"
int main() {
    Character garthuar {"Garthuar"};
    std::cout << garthuar;
    for (int i = 0 ; i < 6 ; i++)
        garthuar.walk('D');
    for (int i = 0 ; i < 5 ; i++)
        garthuar.walk('A');
    return 0;
}

// next step: define & implement an enemy class
