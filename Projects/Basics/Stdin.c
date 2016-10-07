#include <stdio.h>


int main() {

    /**
     * az inputnal a & jellel foglal le helyet a memóriában a változónak
     * Fontos! különben le***rja hogy adni akarsz neki értéket :D
     *
     * Amúgy a második esetben hiába várunk space-t a két szám között,
     * enternél se hisztizik
     */

    int a, b;
    printf("Add meg az elso egesz szamot!\n");
    scanf("%d", &a);
    printf("Add meg a masoik egesz szamot!\n");
    scanf("%d", &b);
    printf("Ennek a ket szamnak az osszege: %d\n", a + b);

    printf("Na akkor most egy space-el elvalasztva add meg azt a ket szamot: ");
    scanf("%d %d", &a, &b);
    printf("Ezuttal a ket szam osszege: %d\nA szorzatuk pedig %d", a + b, a * b);


    return 0;
}