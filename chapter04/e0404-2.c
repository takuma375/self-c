#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ( (argc - 1) != 1 ) {
        puts("specify a number");
        return 0;
    }

    int argnum = atoi(argv[1]);

    if ( argnum == 123 ) {
        puts("Bingo!");
    } else if (argnum > 123) {
        puts("greater");
    } else if (argnum < 123) {
        puts("less");
    }

    return 0;
}
