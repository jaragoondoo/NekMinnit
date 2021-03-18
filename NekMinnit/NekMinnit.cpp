#include <iostream>
using namespace std;

#include "Scooter.h"
int main()
{
    cout << "I parked my scooter outside the dairy\n";

    Scooter* scootPtr = new Scooter(5);

    cout << "Nek minnit\n";

    delete scootPtr;
}
