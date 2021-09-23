#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool even(int n)
{
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char *argv[])
{
    int argnum = atoi(argv[1]);

    printf("%i\n", even(argnum));

    return 0;
}
