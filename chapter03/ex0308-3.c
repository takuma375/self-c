#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t x = -10;
    uint16_t y = x;

    printf("x...%d\n", x);
    printf("y...%d\n", y);

    return 0;
}