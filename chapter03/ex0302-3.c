// コマンドライン引数で与えた2つの数値の商と余りを表示するプログラム
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (atoi(argv[2]) == 0) {
        printf("0で除算はできません\n");
        return 1;
    }
    int quotient = atoi(argv[1]) / atoi(argv[2]);
    int remainder = atoi(argv[1]) % atoi(argv[2]);

    printf("%d...%d", quotient, remainder);

    return 0;
}