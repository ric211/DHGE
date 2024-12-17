// Potenz zweier ganzer Zahlen (a hoch n)
// Programm-Skelett zur Angabe
//
// Aufruf: power a n
//
// Klaus Kusche, 2010

#include <stdio.h>
// Was steht in der Angabe zu atoi, was an dieser Stelle zu beachten ist?
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    // hat der Aufrufer �berhaupt zwei Zahlen angegeben?
    // (damit argv[1] und argv[2] nicht "ins Leere greift")
    // Wenn nein: Fehlermeldung ausgeben, mit Fehlercode aufh�ren
    if(argc == 3) {
        // argv[1] und argv[2] in Zahlen verwandeln
        // und in zwei daf�r angelegten Variablen speichern
        int basis = atoi(argv[1]);
        int exp = atoi(argv[2]);

        printf("Basis: %d, Exponent: %d\n", basis, exp);

        // jetzt sollten wir noch pr�fen,
        // ob wir es mit mathematisch sinnvollen Eingaben zu tun haben:
        // Bei ganzzahliger Rechnung k�nnen wir nur Exponenten >= 0 berechnen
        // Sonst: Fehlermeldung, aufh�ren!
        // (und "0 hoch 0" sollte auch ausgeschlossen werden, aber das sparen wir uns)
        if(exp >= 0) {
            for(exp; exp>1; --exp) {
                basis *= ;
                printf("Neue Basis: %d\n", basis);
            }
        }
        printf("1");
        return 0;
    } else {
        printf("Bitte zwei ganze Zahlen eingeben.\n");
        return 1;
    }







    // Wir brauchen eine Variable f�r das Ergebnis
    // im Ergebnis speichern wir als Anfangswert einmal 1,
    // damit wir weiter unten etwas dazumultiplizieren k�nnen

    // und dann kommt eine Schleife,
    // die von 1 bis zur zweiten Eingabe (einschlie�lich) z�hlt

    // in der Schleife multiplizieren wir jedesmal
    // die erste Eingabe zum Ergebnis dazu
    // und speichern das wieder im Ergebnis

    // nach der Schleife kommt noch die Ausgabe ...

    // ... und das Programm-Ende

}
