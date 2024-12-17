#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// rechenzeichen +, -, x, /, p


int main(int argc, char *argv[]) {
    double ergebnis = 0;
    double zwischenerg = atof(argv[1]);

    for(int i=2; i<argc; i+=2) {
        char rz = argv[i][0];
        double stelle = atof(argv[i+1]);

        switch(rz) {
        case '+':
            zwischenerg+=stelle;
            break;
        case '-':
            zwischenerg-=stelle;
            break;
        case 'x':
            zwischenerg*=stelle;
            break;
        case '/':
            zwischenerg/=stelle;
            break;
        case 'p':
            zwischenerg=pow(zwischenerg,stelle);
            break;
        default:
            printf("default\n");
            return 1;
        }
    }
    ergebnis = zwischenerg;
    printf("Ergebnis: %f\n\n", ergebnis);
    return 0;
}
