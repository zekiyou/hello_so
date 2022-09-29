#include <iostream>
#include <dlfcn.h>

using namespace std;

int (*add)(int a, int b);

int main(int argc, char *argv[])
{
    void *handler = dlopen(".libadd.so", RTLD_NOW | RTLD_GLOBAL);
    char *error;

    if (!handler)
    {
        error = dlerror();
        fprintf(stderr, "%s ", error);
        return -1;
    }

    add = (int (*)(int, int))dlsym(handler, "_Z3addii");
    if (dlerror() != NULL)
    {
        error = dlerror();
        fprintf(stderr, "%s ", error);
        return -1;
    }

    cout << (*add)(1, 3) << endl;

    dlclose(handler);
    if (dlerror() != NULL)
    {
        error = dlerror();
        fprintf(stderr, "%s ", error);
        return -1;
    }

    return 0;
}