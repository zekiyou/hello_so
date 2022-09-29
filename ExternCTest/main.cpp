#include <iostream>
using namespace std;

extern "C" {
    extern int add(int a, int b);
    extern int sub(int a, int b);
}

int main(int argc, char const *argv[])
{
    std::cout << add(1,3) << std::endl;
    return 0;
}
