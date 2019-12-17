#include <iostream>
#include "cars.h"

int HorsePower() // "nameless" namespace
{
    return 150;
}
// using namespace lamborghini;
int lamborghini::HorsePower() // lamborghini namespace
{
    return 760;
}
// using namespace porsche;
int porsche::HorsePower() // porsche namespace
{
    return 700;
}

void lamborghini::cout()
{
    std::cout << "Lamborghini" << std::endl;
}
