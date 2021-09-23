#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    // int型の最大値・最小値
    printf("int max: %i\n", INT_MAX);
    printf("int min: %i\n", INT_MIN);

    // double型の最大値・最小値
    printf("double max: %f\n", DBL_MAX);
    printf("double min: %f\n", -DBL_MAX);

    return 0;
}
