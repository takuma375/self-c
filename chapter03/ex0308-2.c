#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t i16 = -10;
    int32_t i32 = i16;

    printf("uint16_t...%d\n", i16);
    printf("int32_t...%d\n", i32);

    return 0;
}