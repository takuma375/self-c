#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ( (argc - 1) != 1 ) {
        puts("specify a number");
    } else {
        int remain = atoi(argv[1]) % 5;
        switch (remain) {
            case 1:
                puts("ONE");
                break;
            case 2:
                puts("TWO");
                break;
            case 3:
                puts("THREE");
                break;
            case 4:
                puts("FOUR");
                break;
            case 0:
                puts("ZERO");
                break;
        }
    }


}
