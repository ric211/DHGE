// Unser drittes Programm: Hallo mit Ausgabe eines oder mehrerer Namen
//
// Aufruf: hello3 name1 name2 ...
//
// Klaus Kusche, 2010

#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("Hallo, ");
    if (argc == 1) {
        printf("wer bist du?\n");
    } else if(argc == 2) {
        printf("%s\n", argv[1]);
    } else {
        for (int i = 1; i < argc-1; ++i) {
            if(i == argc-2) {
                printf("%s ", argv[i]);
            } else {
                printf("%s, ", argv[i]);
            }
        }
        printf("und %s\n", argv[argc-1]);
    }

    return 0;
}
