#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
    int valor, cem, resto, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &valor);


    cem = valor / 100;
    resto = valor % 100;
    cinquenta = resto / 50;
    resto = resto % 50;
    vinte = resto / 20;
    resto = resto % 20;
    dez = resto / 10;
    resto = resto % 10;
    cinco = resto / 5;
    resto = resto % 5;
    dois = resto / 2;
    resto = resto % 2;
    um = resto / 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
}
