#include <iostream>
#include <string>

extern void world();

void hello()
{
    std::cout << "hello" << std::endl;
    world();
}