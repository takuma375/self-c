// コマンドライン引数で与えた2つの数値の積を表示するプログラム
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int product = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", product);
    
    return 0;
}