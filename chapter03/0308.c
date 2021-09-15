#include <stdio.h>
#define CONSUMPTION_TAX * 8 / 100

int main(void)
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", price1 CONSUMPTION_TAX);
    printf("%i\n", price2 CONSUMPTION_TAX);

    return 0;
}