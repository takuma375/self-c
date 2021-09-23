#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);
bool odd(int n);

int main(int argc, char *argv[])
{
    if ( odd(atoi(argv[1])) ) {
        puts("odd");
    } else {
        puts("even");
    }

    return 0;
}

bool odd(int n)
{
    return (n % 2 != 0) ? true : false;
}
