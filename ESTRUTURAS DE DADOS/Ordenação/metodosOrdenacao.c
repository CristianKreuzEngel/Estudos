#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM_MAX 5

//=============Função de ordenação BubleSort=============================
void ordenarBubbleSort(int vetor[]){
    int i, fim, aux;
    for(fim = TAM_MAX - 1; fim >= 0; fim--){
        for(i = 0; i <= fim-1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}

//=============Função de ordenação Selection Sort========================
void ordenarSelectionSort(int vetor[]){
    int i, j, minimo, aux, qtdElementos, cont, valor, troca;
    cont = 0;
    troca = 0;
    printf("Qual ordem?\n1 - Crescente\n2 - Decrescente\n");
    scanf("%d", &valor);
    qtdElementos = TAM_MAX;
    if(valor == 1){
        for (i = 0; i < qtdElementos-1; i++){
            minimo = i;
            for (j = i + 1; j < qtdElementos; j++){
                if (vetor[j] < vetor[minimo]){
                    minimo = j;
                }
                cont++;
            }
            aux = vetor[i];
            if(vetor[i] != vetor[minimo]){
                vetor[i] = vetor[minimo];
                vetor[minimo] = aux;
                troca++;
            }
        }
    }
    if(valor == 2){
        for (i = 0; i < qtdElementos-1; i++){
            minimo = i;
            for (j = i + 1; j < qtdElementos; j++){
                if (vetor[j] > vetor[minimo]){
                    minimo = j;
                }
                cont++;
            }
            aux = vetor[i];
            if(vetor[i] != vetor[minimo]){
                vetor[i] = vetor[minimo];
                vetor[minimo] = aux;
                troca++;
            }
                
        }
    }
    printf("Foram feitas %d trocas!\n", troca);
    printf("Foram feitas %d comparacoes!\n", cont);
}

//===============Função de ordenação Insertion Sort======================
void ordenarInsertionSort(int vetor[]){
   int i, j, aux;
   for (i = 0; i < TAM_MAX; i++){
    aux = vetor[i];
    //enquanto não chegar na posição 0 e aux menor que o item
    for(j = i - 1; j>=0 && aux < vetor[j]; j--){
        vetor[j+1] = vetor[j];
    }
    vetor[j+1] = aux;
   }
   return;
}

//================Função de ordenação Merge Sort=========================

/*Processo de ordenação usando as metade*/
void merge (int *vetor, int inicio, int meio, int fim){
    int *temp, p1,p2,tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;// definindo controladores do fim das metadades
    tamanho = fim-inicio+1;// definindo o tamanho para utilizar no vetor auxiliar
    p1 = inicio;//definindo ponto de partida da primeira metade
    p2 = meio+1;// mesmo procedimento anterior só para a metade 2;

    temp = (int *) malloc(tamanho*sizeof(int));//atribuindo o tamanho do vetor auxiliar
    if(temp != NULL){//verificação se o vetor está em estado diferente de NULL
        for(i = 0; i < tamanho; i++){
            if(!fim1 && !fim2){// verificação se as metades não chegaram no fim
            
                if(vetor[p1] < vetor[p2]){// comparação para ordenação
                    temp[i] = vetor[p1++];
                }else{
                    temp[i] = vetor[p2++];
                }

                if(p1 > meio){
                    fim1 = 1;
                }
                if(p2 > fim){
                    fim2 = 1;
                }
            }else{
                if(!fim1){
                    temp[i] = vetor[p1++];
                }else{
                    temp[i] = vetor[p2++];
                }
            }
        }
        for(j=0, k=inicio; j < tamanho; j++, k++){//atribuindo valores ordenados do auxiliar para o principal
            vetor[k] = temp[j];
        }
    }
    /*liberando ponteiro*/
    free(temp);
    
     
}
//Essa função divide o vetor em duas partes para realizar a ordenação;
void ordenarMergeSort(int *vetor, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);//definição do meio do vetor

        ordenarMergeSort(vetor,inicio,meio);//divisão do vetor até o metade
        ordenarMergeSort(vetor,meio+1,fim);//divisão do vetor da metade+1 em diante
        merge(vetor,inicio,meio,fim);//processo de ordenação utilizando o vetor, inicio, meio e fim;
    }
}


//==============Função de ordenação Quick Sort=====================
int particiona(int *vetor, int inicio, int fim){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = vetor[inicio];
    while(esq < dir){
        while(vetor[esq] <= pivo)//Avança a esquerda enquanto for menor/igual ao pivo
            esq++;
        while(vetor[dir] > pivo)//Recua a direita enquanto for maior que o pivo
            dir--;
        if(esq < dir){//realiza a troca entre esquerda e direita
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void ordenarQuickSort(int *vetor, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim);
        ordenarQuickSort(vetor, inicio, pivo);
        ordenarQuickSort(vetor, pivo+1, fim);
    }
}
//===================Procedimento Menu===========================
int menu (){
	int op;
	puts ("\n\nEscolha a opcao\n");
	puts ("1 - Inserir elementos no vetor");
	puts ("2 - Ordenar pelo metodo Bubble Sort");
	puts ("3 - Ordenar pelo metodo Selection Sort");
	puts ("4 - Ordenar pelo metodo Insertion Sort");
    puts ("5 - Ordenar pelo metodo Merge Sort");
    puts ("6 - Ordenar pelo metodo Quick Sort");
    puts ("8 - Imprimir quantidade de troca");
	puts ("9 - Imprimir vetor");
	puts ("0-sair");
	scanf ("%d", &op);
 return op;
}

//=======Procedimento cadastro de valores no vetor===============
int cadastro(int vetor[]){
    int i, valor;
    for(int i =0; i < TAM_MAX; i++){
        scanf("%d", &valor);
        vetor[i] = valor;

    }
}

//======Procedimento de imprimir de valores no vetor=============
int imprimir(int vetor[]){
    int i;
    for(i = 0; i < TAM_MAX; i++){
		printf("%d\t", vetor[i]);
    }
}

int main(){
    int vetorzenho[TAM_MAX];
    int op, contador, valor;
    contador = 0;
    do{
        op = menu();
        switch (op){
        case 1:
            cadastro(&vetorzenho);
            break;
        case 2:
            ordenarBubbleSort(&vetorzenho);
            break;
        case 3:
            ordenarSelectionSort(&vetorzenho);
            break;
        case 4:
            ordenarInsertionSort(&vetorzenho);
            break;
        case 5:
            ordenarMergeSort(&vetorzenho, 0, TAM_MAX-1);
            break;
        case 6:
            ordenarQuickSort(&vetorzenho, 0, TAM_MAX-1);
            break;
        case 8:
            printf("total de comparacoes foi : %d", contador);
            break;
        case 9:
            imprimir(&vetorzenho);
            break;
        }
    }while(!(op == 0));
}