// 加算式を直接printfの引数に指定する例
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("使用法: %s 数値1 数値2", argv[0]);
        return 0;
    }
    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
    return 0;
}