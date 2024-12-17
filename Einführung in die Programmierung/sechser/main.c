#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    for(int i = 1;;++i) {
        int wurf1 = rand() % 6 + 1;
        int wurf2 = rand() % 6 + 1;

        if(wurf1 == 6 && wurf2==6) {
            printf("Drei aufeinanderfolgende Wuerfe sind nach %d sechs.\n", i);
            return 0;
        }
    }
}
