#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ( (argc - 1) != 1 ) {
        puts("specify a number");
        return 1;
    }

    int argnum = atoi(argv[1]);

    if (argnum % 30 == 0) {
        puts("C");
    } else if (argnum % 3 == 0) {
        puts("B");
    } else if (argnum % 10 == 0) {
        puts("A");
    } else {
        puts("D");
    }

    return 0;
}
