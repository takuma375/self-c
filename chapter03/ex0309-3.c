#include <stdio.h>
#include <limits.h>

int main(void)
{
    int i;
    unsigned int u;
    long li;
    unsigned long lu;
    long long lli;
    unsigned long long llu;

    i = INT_MAX;
    u = UINT_MAX;
    li = LONG_MAX;
    lu = ULONG_MAX;
    lli = LONG_LONG_MAX;
    llu = ULONG_LONG_MAX;

    printf("%i\n", i);
    printf("%u\n", u);
    printf("%li\n", li);
    printf("%lu\n", lu);
    printf("%lli\n", lli);
    printf("%llu\n", llu);

    return 0;
}