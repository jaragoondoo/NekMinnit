#include <iostream>
#include "Scooter.h"
int main()
{
    std::cout << "I parked my scooter outside the dairy\n";

    Scooter* scootPtr = new Scooter(5);

    std::cout << "Nek minnit\n";

    delete scootPtr;
}
