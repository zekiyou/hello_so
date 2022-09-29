#include <iostream>
#include <string>

using namespace std;

extern int add(int a, int b);

int main(int argc, char *argv[])
{
    cout << add(1,3) << endl;
    return 0;
}