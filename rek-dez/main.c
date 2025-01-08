#include <stdio.h>
#include <stdlib.h>

void rek(int zahl) {
    if(zahl>9) {
        rek(zahl/10);
    }
    putchar(zahl%10 + '0');
    return;
}

int main(int argc, const char *argv[]) {
    if(!argc > 0) {
        printf("error");
        return 1;
    }

    rek(atoi(argv[1]));
}
