// Hübscher Weihnachtsbaum (sehr weihnachtlich)
//
// Rico Hoppe, MMXXIV

#include "sdlinterf.h"

#include <stdlib.h>

int main(void) {
    sdlInit();

    sdlDrawCirc(400, 549, 50, 50,
                128, 64, 0);
    sdlUpdate();
    sdlMilliSleep(250);

    for(int i=540; i>0; i-=50) {
        sdlDrawCirc(400, i, i/2, 30,
                    0, 255, 0);
        sdlUpdate();
        sdlMilliSleep(250);
        printf("i=%d\n", i);
    }

    sdlMilliSleep(5000);
}
