#include <stdio.h>
#include <stdlib.h>

int aufrufe = 0;+

int rek(int k, int n) {
    if(k>n) return 0;
    if(k==0 || k==n) return 1;
}

int main(int argc, const char *argv[]) {
    unsigned int k = atoi(argv[1]);
    unsigned int n = atoi(argv[2]);

    rek(k,n);
}
