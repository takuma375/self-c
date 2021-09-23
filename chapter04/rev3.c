#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Cで扱える最大の整数
    printf("%llu\n", ULLONG_MAX);

    // Cで扱える最小の整数
    printf("%lli\n", LLONG_MIN);

    return 0;
}
