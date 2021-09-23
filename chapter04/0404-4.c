#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        puts("no arguments");
        return 1;
    }

    int argnum = atoi(argv[1]);

    if ( argnum % 15 == 0 ) {
        puts("FizBaz");
    } else if ( argnum % 3 == 0 ) {
        puts("Fiz");
    } else if ( argnum % 5 == 0 ) {
        puts("Baz");
    } else {
        printf("%d\n", argnum);
    }

    return 0;
}
