#include <stdio.h>

/**
 *  %d -vel decimális számot
 *  %f -el float-ot (de double-re is jó)
 *  %lf -el double-t
 *  %c -vel karaktert
 *  %x bármi
 *  %.1  1 tizedesjegyig írja ki a számot
*/

int main() {

    int a = 5;
    float b = 2.5;
    double c = 6.15;
    long double bovitett = 3.14159265359;
    char e = 'c';
    long int sok = 12414235235;

    printf("\nEz egy sima decimalis szam: %d\n", a);
    printf("Ez egy egyszeru lebegopontos szam: %.1f\n", b);
    printf("Ez egy dupla pontossagu l.pontos szam: %.2f\n", c);
    printf("Ez egy bovitett pontossagu l.pontos szam: %.11Lf\n", bovitett);
    printf("Ez egy tarolt karakter: '%c'\n", e);
    printf("Ez egy long int: %ld\n", sok);


    return 0;
}