#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool even(int n)
{
    return (n % 2 == 0) ? true : false;
}

int main(int argc, char *argv[])
{
    int argnum = atoi(argv[1]);

    printf("%i\n", even(argnum));

    return 0;
}
