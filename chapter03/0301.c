// 加算結果を一度変数に設定する例
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("使用法: %s 数値1 数値2", argv[0]);
        return 0;
    } 

    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", sum);

    return 0;
}