#include <stdio.h>

int main(int argc, char *argv[])
{
    if ( (argc - 1) == 2 ) {
        puts("Bingo!");
    } else {
        puts("Oops!");
    }

    return 0;
}
