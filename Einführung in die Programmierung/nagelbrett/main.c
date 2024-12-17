#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if(argc!=3) {
        printf("error1");
        return 1;
    }

    int fach[(atoi(argv[1])+1)];
    int reihen = atoi(argv[1]);
    int kugeln = atoi(argv[2]);
    int fachnr = 0;

    for(int i=0; i<kugeln; ++i){
        for(int j=0; j<reihen; ++j){
            fachnr += rand() % 2;
        }
        ++(fach[fachnr]);
    }

    for(int i=0; i<fach; ++i) {
        printf("Fach %d: %d Kugeln", fach, fach[i]);
    }
}
