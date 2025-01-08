#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define LOTTOZAHLEN 48

int main() {
    srand(time(NULL));

    bool lottozahlen[LOTTOZAHLEN];

    for(int i=0; i<=LOTTOZAHLEN; ++i) {
        lottozahlen[i] = false;
    }

    for(int i=0; i<6; ++i) {
        int zahl = rand() % 48;

        if(!lottozahlen[zahl]) {
            lottozahlen[zahl] = true;
        }

        printf("i: %d zahl: %d\n", i, zahl);
    }

    printf("Die heutigen Lottozahlen lauten:");

    for(int i=0; i<=LOTTOZAHLEN; ++i) {
        if(lottozahlen[i]) {
            printf(" %d;", i);
        }
    }

    return 0;
}
