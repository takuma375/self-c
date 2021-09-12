// 最初のCプログラム

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        puts("Hello world!");
    } else {
        int sum = 0;
        // インデックス0は無視する
        for (int i = 1; i < argc; i++) {
            sum += atoi(argv[i]);
        }
        printf("sum = %d\n", sum);
    }
    return 0;
}