#include <stdio.h>
#include <stdlib.h>

/* ESTRUTURAS */

// Estrutura da Árvore para fazer os nós 
typedef struct no{
    int valor;
    struct no *direita, *esquerda;
}noArv;

/* FUNÇÕES */

// Função de inserção de dados I;
noArv* inserirDados_1(noArv *raiz, int num){
    // If que verifica se a raiz está nula
    if(raiz == NULL){
        noArv *aux = malloc(sizeof(noArv));
        aux->valor = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    }else{// procedimento que faz a inserção para direita ou esquerda;
        if(num < raiz->valor)
            raiz->esquerda = inserirDados_1(raiz->esquerda, num);
        else
            raiz->direita = inserirDados_1(raiz->direita, num);

        return raiz;
    }
}

 

// Função menu
int menu (){
	int op;
	puts ("\n\tEscolha a opcao\n\t");
	puts ("\t1-Inserir elemento\t");
	puts ("\t2-Retirar elemento\t");
	puts ("\t3-Imprimir arvore\t");
	puts ("\t4-Imprimir arvore ordenada\t");
	puts ("\t5-Verificar raiz\t");
	puts ("\t9-sair");
	scanf ("%d", &op);
 return op;
}

/* PROCEDIEMENTOS */

// Procedimento de impressão
void imprimirDados_1(noArv *raiz){
    if(raiz){
        printf("%d ", raiz->valor);
        imprimirDados_1(raiz->esquerda);
        imprimirDados_1(raiz->direita);
    }
}
// Procedimento de impressão ordenado da árvore binária
void imprimirDados_2(noArv *raiz){
    if(raiz){
        imprimirDados_2(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirDados_2(raiz->direita);
    }
}
// Procedimento de inserção
void inserirDados_2(noArv **raiz, int num){
    if(*raiz == NULL){
       *raiz = malloc(sizeof(noArv));
       (*raiz)->valor = num;
       (*raiz)->direita = NULL;
       (*raiz)->esquerda = NULL;
    }else{
        if(num < (*raiz)->valor)
            inserirDados_2(&((*raiz)->esquerda), num);
        else
            inserirDados_2(&((*raiz)->direita), num);
    }
}

// Procedimento de inserção 3
void inserirDados_3(noArv **raiz, int num){
    noArv *aux = *raiz;
    while(aux){
        if(num < aux->valor)
            raiz = 
    }
    aux = malloc (sizeof(noArv));
    aux->valor = num;
    aux->direita = NULL;
    aux->esquerda = NULL;
    *raiz = aux;
}

int main(){
    noArv *raiz = NULL;
    int op, valor;

    do{
        op = menu();
        switch (op)
        {
        case 1:
            printf("\n Digite um valor\n");
            scanf("%d", &valor);
            //raiz = inserirDados_1(raiz, valor);
            inserirDados_2(&raiz, valor);
            break;
        case 3:
            printf("\n\t Primeira impressao\n\t");
            imprimirDados_1(raiz);
            printf("\n\t Segunda impressao\n\t");
            imprimirDados_2(raiz);
            break;
        
        default:
            if(op != 9)
                printf("\nOPCAO INVALIDA!!!\n");
            break;
        }
    }while(op != 9);
}