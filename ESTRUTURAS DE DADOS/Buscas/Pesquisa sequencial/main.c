#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 5

/*ESTRUTURAS*/
// Estrutura vetor;
struct Meuvetor{
	int vetor[TAM_MAX];
	int fim;
};

/*PROCEDIMENTO*/
// Procedimento de cadastro
void cadastro(struct Meuvetor *vetor){
    int valor;
    if(cheio(vetor)){
    }else{
        scanf("%d", &valor);
        vetor->fim++;
        vetor->vetor[vetor->fim] = valor;
        ordenarInsertionSort(vetor);
        printf("\nValor inserido com sucesso\n");
    }
}
// Procedimento de remoção
void remover(struct Meuvetor *vetor){
    int i, valor, escolha, aux;
    if(vazio(vetor)){
    }else{
        printf("\nTu queres remover um valor especifico?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &escolha);
        if(escolha == 1){
            printf("\nQual valor?\n");
            valor = pesquisar(vetor);
            for(i = valor; i < vetor->fim; i++){
                vetor->vetor[i] = vetor->vetor[i+1];
            }
            vetor->fim--;
        }else{
            vetor->fim--;
        }
        printf("\nValor removido com sucesso\n");
    }
}
// Procedimento de impressão
void imprimir(struct Meuvetor *vetor){
    int i;
    if(vazio(vetor)){
    }else{
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
// Função de busca
int pesquisar(struct Meuvetor *vetor){
    int valor, i;
    int indice = -1;
    if(vazio(vetor)){
    }else{
        scanf("%d", &valor);
        for(i = 0; i < vetor->fim+1; i++){
            if(vetor->vetor[i] == valor){
                indice = i;
                break;
            }
        }
        return indice;
    }
}

int main(){
    struct Meuvetor vetor;
    int op, valor;
    vetor.fim = -1;
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
            valor = pesquisar(&vetor);
            if(valor == -1){
                printf("\nValor nao encontrado\n");
                imprimir(&vetor); 
            }else{
                printf("\nO valor desejado se encontra na posicao %d\n", valor);
            }
            break;
        case 4:
            imprimir(&vetor);
            break;
        default:
            if(op != 9)
                printf("\n Opcao invalida\n");
            break;
        }
    }while(op != 9);
}
