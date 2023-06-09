#include <stdio.h>
#include <stdlib.h>

/* ESTRUTURAS */
typedef struct no{
    int valor;
    struct no *esquerdo, *direito;
    short altura; //Short por ocupar 2 bytes de memória   
}noArv;

/* FUNÇÕES */
// Função que cria um novo nó
noArv* novoNo(int x){
    noArv *novo = malloc(sizeof(noArv));  
    if(novo){
        novo->valor = x;
        novo->esquerdo = NULL;
        novo->direito = NULL;
        novo->altura = 0;
    }else
        printf("\nERRO ao alocar no em novoNo!\n");

    return novo;
}

// Função que cálcula a maior altura da árvore
short maior(short a, short b){
    return (a > b)? a: b;
}

// Função que cácula a altura da árvore
short alturaDoNo(noArv *no){
    if(no == NULL)
        return -1;
    else
        return no->altura;
}

//Função de Balanceamento
short fatorDeBalanceamento(noArv *no){
    if(no)
        return (alturaDoNo(no->esquerdo) - alturaDoNo(no->direito));
    else
        return 0;
}

// Função de menu
int menu (){
	int op;
	puts ("\n\tEscolha a opcao\n\t");
	puts ("\t1-Inserir elemento\t");
	puts ("\t2-remover elemento\t");
	puts ("\t3-Imprimir arvore\t");
	puts ("\t9-sair");
	scanf ("%d", &op);
 return op;
}
// Função de rotação à esquerda
noArv* rotacaoEsquerda(noArv *r){
    noArv *y, *f;

    y = r->direito;
    f = y->esquerdo;

    y->esquerdo = r;
    r->direito = f;

    f->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito)) + 1;
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito)) + 1;

    return y;
}

// Função de rotação à direita
noArv* rotacaoDireita(noArv *r){
    noArv *y, *f;

    y = r->esquerdo;
    f = y->direito;

    y->direito = r;
    r->esquerdo = f;

    f->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito)) + 1;
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito)) + 1;

    return y;
}

// Função rotação dupla direita esquerda
noArv* rotacaoDireitaEsquerda(noArv *r){
    r->direito = rotacaoDireita(r->direito);
    return rotacaoEsquerda(r);  
}

// Função rotação dupla esquerda direita
noArv* rotacaoEsquerdaDireita(noArv *r){
    r->esquerdo = rotacaoEsquerda(r->esquerdo);
    return rotacaoDireita(r);  
}

//Função de balancear
noArv* balancear(noArv *raiz){
    short fb = fatorDeBalanceamento(raiz);

    //rotação a esquerda
    if(fb < -1 && fatorDeBalanceamento(raiz->direito) <= 0)
        raiz = rotacaoEsquerda(raiz);

    //rotação direita
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) >= 0)
        raiz = rotacaoDireita(raiz);

    //rotação esquerda para direita
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) < 0)
        raiz = rotacaoEsquerdaDireita(raiz);
    
    //rotação direita para esquerda
    else if(fb < -1 && fatorDeBalanceamento(raiz->direito) > 0)
        raiz  = rotacaoDireitaEsquerda(raiz);
    
    return raiz;
}
//Função de inserir
noArv* inserir(noArv *raiz, int x){
    if(raiz == NULL)//árvore vazia
        return novoNo(x);
    else{
        if(x < raiz->valor)
            raiz->esquerdo = inserir(raiz->esquerdo, x);
        else if(x > raiz->valor)
            raiz->direito = inserir(raiz->direito, x);
        else
            printf("\nInsercao nao realizada!\nO elemento %d ja existe!\n", x);
    }

    //Recalcula a altura de todos os nós entre a raiz e o novo nó inserido
    raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) + 1;

    // verifica a necessidade de rebalancear a árvore
    raiz = balancear(raiz);

    return raiz;
}

//Função de remoção
noArv* remover(noArv *raiz, int chave){
    if(raiz == NULL){
        printf("\nValor nao encontrado\n");
        return NULL;
    }else {//procura o nó a remover
        if(raiz->valor == chave) {
            //remove nós folhas (nós sem filhos)
            if(raiz->esquerdo == NULL && raiz->direito == NULL){
                free(raiz);
                printf("Elemento folha removido: %d !\n", chave);
                return NULL;
            }else{
                //remover nós que possuem 2 filhos
                if(raiz->esquerdo == NULL && raiz->direito != NULL){
                    noArv *aux = raiz->esquerdo;
                    while(aux->direito != NULL)
                        aux = aux->direito;
                    raiz->valor = aux->valor;
                    aux->valor = chave;
                    printf("Elemento trocado: %d !\n", chave);
                    raiz->esquerdo = remover(raiz->esquerdo, chave);
                    return raiz;
                }else{
                    // remover nós que possuem apenas 1 filho
                    noArv *aux;
                    if(raiz->esquerdo != NULL)
                        aux = raiz->esquerdo;
                    else
                        aux = raiz->direito;
                    free(raiz);
                    printf("Elemento com 1 filho removido: %d !\n", chave);
                    return aux;
                }   
            }
        }else{
            if(chave < raiz->valor)
                raiz->esquerdo = remover(raiz->esquerdo, chave);
            else
                raiz->direito = remover(raiz->direito, chave);
        }

        //recalcula a altura de todos os nó entre a raiz e o novo nó inserido
        raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) + 1;

        //verifica a necessidade de rebalancear a árvore
        raiz = balancear(raiz);

        return raiz;
    }
}


/* PROCEDIMENTO */
//Procedimento de impressão
void imprimir(noArv *raiz, int nivel){
    int i;
    if(raiz){
        imprimir(raiz->direito, nivel + 1);
        printf("\n\n");

        for(i = 0; i < nivel; i++)
            printf("\t");
        printf("%d", raiz->valor);
        imprimir(raiz->esquerdo, nivel + 1);

    }
}

int main(){
noArv *raiz = NULL;
    int op, valor;

    do{
        op = menu();
        switch (op){
        case 1:
            printf("\n\tDigite um valor a ser inserido ");
            scanf("%d", &valor);
            raiz = inserir(raiz, valor);
            break;
        case 2:
            printf("\n\tDigite um valor a ser removido ");
            scanf("%d", &valor);
            raiz = remover(raiz, valor);
            break;
        case 3:
            imprimir(raiz, 1);
            break;
        default:
            if(op != 9)
                printf("\nOPCAO INVALIDA!!!\n");
            break;
        }
    }while(op != 9);
}
