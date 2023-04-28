#include <stdlib.h>
#include <locale.h>
#define tam_max 3

void metodoBolha(int piItem[]){
    int i, fim, aux;
    for (fim = tam_max - 1; fim >= 0; fim--){
        for (i = 0; i <= fim - 1; i++){
            if (piItem[i] > piItem[i + 1]){
                aux = piItem[i];
                piItem[i] = piItem[i + 1];
                piItem[i + 1] = aux;
            }
        }
    }
}


int menu (){
    int op;
    puts ("\n\nEscolha a opcao\n");
    puts ("1-Inserir elemento na fila");
    puts ("2-Retirar elemento fila");
    puts ("3-Verificar fila vazia");
    scanf ("%d", &op);
    return op;
}

int main(int argc, char *argv[]) {
    int vetor[tam_max];
    int valor;

    for (int i = 0; i < 5; i++){
        printf("Digite o valor que quer inserir: ");
        scanf("%d", &valor);
        vetor[i] = valor;
    }

    metodoBolha(&vetor);


    for (int i = 0; i < 5; i++){
        printf("\nValor: %d", vetor[i]);
    }

}
