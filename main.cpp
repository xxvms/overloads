#include <iostream>
#include "Person.h"

int main() {
    Person p1 ("Kate", "Gregory", 123);
    Person p2 ("Frank", "Gomez", 456);

    std::cout << "P1 is ";
    if (!(p1 < p2)){
        std::cout << "not ";
    }
    std::cout << "less then p2\n";

    std::cout << " ************************\n";

    std::cout << "p1 is ";
    if (!(p1 < 300)){
        std::cout << "not ";
    }
    std::cout << "Less then 300\n";

    std::cout << " ************************\n";

    std::cout << " 300 is ";
    if (!(300 < p1)){
        std::cout << "not";
    }
    std::cout << "less then p1\n";

    return 0;
}