#include <stdio.h>

int main(void)
{
    int x = 1;
    printf("%d\n", x);
    x = x + 1;  // 2項演算子と単純代入演算子
    printf("%d\n", x);
    x += 1;     // 複合代入演算子
    printf("%d\n", x);
    ++x;        // 前置インクリメント演算子
    printf("%d\n", x);
    x++;        // 後置インクリメント演算子
    printf("%d\n", x);

    return 0;
}