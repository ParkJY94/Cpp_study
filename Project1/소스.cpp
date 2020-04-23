#include <iostream>
#include "ns1.h"
#include "ns2.h"

int main() 
{
    std::cout << "Hello, World" << std::endl;

    ns1::print();
    ns2::print();

    return 0;
}