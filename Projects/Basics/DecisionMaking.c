#include <stdio.h>
#include "Headers/Numerical.h"

int main(){

    int n;
    printf("\nAdj meg egy szamot!\n");
    scanf("%d", &n);

    if (n > 0) {
        printf("A megadott szamod egy pozitiv, nem nulla szam.\n");
    } else if (n < 0) {
        printf("A megadott szamod egy negativ szam.\n");
    } else {
        printf("A megadott szamod a nulla.\n");
    }
    if (n == N){
        printf("A megadott szamod megegyezik a headerben definialt konstanssal\n");
    }

// ----------------------------------(XOR)---------------------------------- //

    int a,b;
    printf("\n\nOke, akkor nezzunk egy masik fajtat.\nAdjunk meg ket szamot:\n");
    scanf("%d %d", &a, &b);
    if (a >= 0 && b >= 0){
        printf("Mindket szamod pozitiv.\n");
    } else if (a > 0 ^ b > 0) {
        printf("Az egyik szamod nulla, vagy annal kisebb.\n");
    } else {
        printf("Mindket szamod negativ.\n");
    }

// ------------------------------------------------------------------------- //

    int d;
    char c;
    printf("\n\nNajo, akkor egy felteteles kifejezest meg a vegere.\nAdj meg egy szamot!\n");

    do{
        scanf("%d", &d);
    } while (d == 0);

    c = (char) ((d % 2 == 0) ? 'p' : 'n');
    if (c == 'p') {
        printf("A szamod paros\n");
    } else printf("A szamod paratlan\n");

    return 0;
}