// コマンドライン引数で3個の数を受け付けるプログラムをswitch文を使って作成する
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int ret_value = 0;

    if (argc != 4) {
        return 1;
    } else {
        switch (atoi(argv[1])) {
            case 0:
                ret_value = atoi(argv[2]) + atoi(argv[3]);
                break;
            case 1:
                ret_value = atoi(argv[2]) - atoi(argv[3]);
                break;
            case 2:
                ret_value = atoi(argv[2]) * atoi(argv[3]);
                break;
            case 3:
                if ( atoi(argv[3]) == 0 ) {
                    printf("0除算はできません\n");
                    return 1;
                } else {
                    ret_value = atoi(argv[2]) / atoi(argv[3]);
                    break;
                }
            defalut:
                puts("1st argument should be 0 to 3");
                return 2;
        }
    }
    printf("calculated value: %d\n", ret_value);
    return 0;
}
