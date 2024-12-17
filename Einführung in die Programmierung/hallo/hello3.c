// Unser drittes Programm: Hallo mit Ausgabe eines oder mehrerer Namen
//
// Aufruf: hello3 name1 name2 ...
//
// Klaus Kusche, 2010

#include <stdio.h>

int main(int argc, const char *argv[])
{
    if (argc == 1) {
        printf("Hallo, ich bin %s, wer bist du?\n", argv[0]);
    } else if(argc <= 11)  {
        for (int i = argc-1; i > 0; --i) {
            if(i == 1) {
                printf("Hallo, %s, du bist Erster!\n", argv[i]);
            } else  {
            printf("Hallo, %s, %d. Platz!\n", argv[i], i);
            }
        }
        if(argc > 2) {
            printf("Ihr seid %d Personen!\n", argc-1);
        } else {
            printf("Du bist allein... :(\n");
        }
    } else {
        printf("Hallo an alle!\n");
    }

    return 0;
}
