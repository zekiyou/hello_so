#include <stdio.h>

extern int add(int a, int b);
extern int sub(int a, int b);

int main(int argc, char const *argv[])
{
    printf("%d\n", add(3,1));
    return 0;
}
