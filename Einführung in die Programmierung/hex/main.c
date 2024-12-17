#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Bitte immer eine Hexzahl eingeben.\n");
        return 1;
    }

    int sl = strlen(argv[1]);
    printf("sl: %d\n", sl);
    int erg = 0;
    int wert = 0;

    for(int i = sl-1; i >= 0; i--)
    {
        printf("i = %d, ", i);
        if(argv[1][i] >= '0' && argv[1][i] <= '9')
        {
            wert = argv[1][i]-48;
            printf("z, ");
        }
        else if(argv[1][i] >= 'a' && argv[1][i] <= 'f')
        {
            wert = argv[1][i] - 87;
            printf("kb, ");
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'F')
        {
            wert = argv[1][i] - 55;
            printf("gb, ");
        }
        else
        {
            printf("gib eine vernünftige hexzahl ein...\n");
            return 1;
        }
        printf("feddich\n");
        erg += wert * pow(16,sl-i-1);
        printf("Ergebnis: %d\n", erg);
    }
}
