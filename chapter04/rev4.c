#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t i8 = -1;
    int16_t i16 = i8;
    int32_t i32 = i16;
    int64_t i64 = i32;

    printf("int8: %i\n", i8);
    printf("int16: %i\n", i16);
    printf("int32: %i\n", i32);
    printf("int64: %lli\n", i64);

    return 0;

}
