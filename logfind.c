#include <stdio.h>
#include "dbg.h"

int main(int argc, const char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    return 0;
}
