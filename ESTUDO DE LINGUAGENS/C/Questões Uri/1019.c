#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
    int valor, hora, resto, minutos, segundos;
    scanf("%d", &valor);
    hora = valor / 3600;
    resto = valor % 3600;
    minutos = resto/60;
    segundos = (resto % 60);
    printf("%d:%d:%d\n", hora,minutos,segundos);
}
