#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
    int valor, ano, resto, mes, dia;
    scanf("%d", &valor);
    ano = valor / 365;
    resto = valor % 365;
    mes = resto / 30;
    resto %= 30;
    dia = resto;;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

}
