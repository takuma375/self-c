#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ( (argc - 1) != 1 ) {
        puts("specify a number");
    } else {
        int argnum = atoi(argv[1]);

        if (argnum <= 10) {
            puts("too small");
        } else if( argnum == 15 ) {
            puts("good");
        } else if (argnum > 20) {
            puts("too large");
        } else {
            puts("OK");
        }
    }
}
