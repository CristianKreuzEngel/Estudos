#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM_MAX 10

/*ESTRUTURAS*/
// Estrutura vetor;
struct Meuvetor{
	int vetor[TAM_MAX];
	int fim;
    int ordenado;
};

/*PROCEDIMENTO*/

// Procedimento de cadastro
void cadastro(struct Meuvetor *vetor){
    int valor;
    if(!cheio(vetor)){
        scanf("%d", &valor);
        if(vetor->vetor[vetor->fim] <= valor){
            if(vetor->ordenado = 1)
                vetor->ordenado = 1;     
        }else
            vetor->ordenado = 0;
        vetor->fim++;
        vetor->vetor[vetor->fim] = valor;
        printf("\nValor inserido com sucesso\n");
    }
}

// Procedimento de remoção
void remover(struct Meuvetor *vetor){
    int i, valor, escolha, aux;
    if(!vazio(vetor)){
        printf("\nQual valor?\n");
        scanf("%d", &escolha);
            valor = pesqBinaria(vetor->vetor, 0, vetor->fim+1, escolha);
            if(valor >= 0){
                for(i = valor; i < vetor->fim; i++){
                vetor->vetor[i] = vetor->vetor[i+1];
            }
            vetor->fim--;
            printf("\nValor removido com sucesso\n");
            }else{
                printf("\nvalor nao encontrado\n");
            }
    }
}

// Procedimento de impressão
void imprimir(struct Meuvetor *vetor){
    int i;
    if(!vazio(vetor)){
        for(i=0; i < vetor->fim+1; i++){
            printf("%d\t", vetor->vetor[i]);
        }
    }
}

// Procedimento de ordenação
void ordenarInsertionSort(struct Meuvetor *vetor){
   int i, j, aux;
   for (i = 0; i < vetor->fim+1; i++){
    aux = vetor->vetor[i];
    //enquanto não chegar na posição 0 e aux menor que o item
    for(j = i - 1; j>=0 && aux < vetor->vetor[j]; j--){
        vetor->vetor[j+1] = vetor->vetor[j];
    }
    vetor->vetor[j+1] = aux;
   }
   vetor->ordenado = 1;
   return;
}

/*FUNÇÕES*/

// Função menu de interação
int menu (){
    int op;    
    puts ("\nEscolha a opcao\n");
    puts ("1-Inserir elemento");
    puts ("2-Retirar elemento");
    puts ("3-Buscar valor"); 
	puts ("4-Imprimir");  
	puts ("5-Ordenar");  
    puts ("9-sair");
    scanf ("%d", &op);  
    return op;  
}

// Função de vazio
int vazio(struct Meuvetor *vetor){
   if(vetor->fim == -1){
        printf("\nVetor vazio!\n");
        return 1;
   }else{
        return 0;
   }
}

// Função de cheio
int cheio(struct Meuvetor *vetor){
    if(vetor->fim+1 == TAM_MAX){
        printf("\nVetor cheio!\n");
        return 1;
    }else{
        return 0;
    }
}

// Função de busca binária
int pesqBinaria(struct Meuvetor *vetor, int inicio, int fim, int valor){
    int meio;
    if(!vetor->ordenado)
        ordenarInsertionSort(vetor);
    while(inicio <= fim){
        meio = floor((inicio + fim)/2);
        if(vetor->vetor[meio] == valor){
            return meio;
        }
        if(vetor->vetor[meio] < valor){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return -1;
}
int main(){
    struct Meuvetor vetor;
    int op, valor, index;
    vetor.fim = -1;
    vetor.ordenado = 0;
    do{
        op = menu();

        switch (op){
        case 1:
            cadastro(&vetor);
            break;
        case 2:
            remover(&vetor);
            break;
        case 3:
            printf("\nDigite o valor que tu queres buscar?\n");
            scanf("%d", &valor);
            index = pesqBinaria(&vetor, 0, vetor.fim+1, valor);
            if(index == -1){
                printf("\nValor nao encontrado\n");
                imprimir(&vetor); 
            }else{
                printf("\nO valor desejado se encontra na posicao %d\n", index);
            }
            break;
        case 4:
            imprimir(&vetor);
            break;
        case 5:
            ordenarInsertionSort(&vetor);
            break;
        default:
            if(op != 9)
                printf("\nOpcao invalida\n");
            break;
        }
    }while(op != 9);
}
