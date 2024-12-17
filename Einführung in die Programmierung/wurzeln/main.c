#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    if(argc != 2) {
        printf("Bitte eine ganze Zahl angeben\n");
        return 1;
    }
    if(atof(argv[1]) < 0) {
        printf("Negative Zahlen haben keine Wurzel\n");
        return 1;
    }

    double ursprung = atof(argv[1]);
    double naeherung = atof(argv[1]);
    double mittelwert = 0;

    while(fabs(naeherung*naeherung) - ursprung >= fabs(ursprung*1e-10)) {
        mittelwert = ((naeherung + (ursprung/naeherung)) / 2);
        printf("%.10f\n", mittelwert);
        naeherung = mittelwert;
    }
}
