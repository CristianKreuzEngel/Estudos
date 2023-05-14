#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_FILA 2

/* Estrutura que ir� conter a pilha de informa��es */
struct aquelaFila{
	int frente,tras;
	int itens[TAMANHO_FILA];
};

int empty(struct aquelaFila *fila){
	//se o inicio for igual ao final, fila estar� vazia;
	if(fila->frente == fila->tras){
		return 1;
	}
	return 0;
}

int inserir(struct aquelaFila *fila, int x){
	if(fila->tras + 1 > TAMANHO_FILA){
		printf("\nEstouro da capacidade da fila");
		return 0;
	}
	fila->itens[fila->tras++] = x;
	return 1;
}

int remover(struct aquelaFila * fila){
	int x;
	if(empty(fila) ){
		printf("\nFila vazia");
		return -999999;
	}
	x = fila->itens[fila->frente];
 		fila->frente++;
 	return x;
}

int size(struct aquelaFila *fila){
	return (fila->tras - fila->frente);
}

int proximo(struct aquelaFila * fila){
	return fila->itens[fila->frente];
}

int menu (){
	int op;
	puts ("\n\nEscolha a opcao\n");
	puts ("1-Inserir elemento fila");
	puts ("2-Retirar elemento fila");
	puts ("3-Verificar fila cheia");
	puts ("4-Verificar fila vazia");
	puts ("5-Verificar proximo elemento fila");
	puts ("6-sair");
	scanf ("%d", &op);
 return op;
}

int main(int argc, char *argv[]) {
	struct aquelaFila filenha;
	filenha.frente = 0;
	filenha.tras = 0;
	int op,aux = 0, valor = 0;
	do{
		op = menu();
		switch(op){
			case 1:
				if(aux == TAMANHO_FILA){
					printf("Fila esta cheia!");
					break;
				}else{
					printf("\nDigite o valor a ser inserido: ");
					scanf("%d", &valor);
					inserir(&filenha, valor);
					aux++;
					break;
				}
				
			case 2:
				if(empty(&filenha)){
					printf("Fila esta vazia");
					break;
				}else{
					valor = remover(&filenha);
					printf("Valor removido: %d", valor);
					break;
				}
			case 3:
				if(aux == TAMANHO_FILA){
					printf("\nFila esta cheia");
					break;
				}else{
					printf("\nFila nao esta cheia");
					break;
				}
			case 4:
				if(empty(&filenha)){
					printf("\nFila esta vazia");
					break;
				}else{
					printf("\nFila nao esta vazia");
					break;
				}
			case 5:
				if(empty(&filenha)){
					printf("\nFila esta vazia");
					break;
				}else{
					printf("O proximo elemento a sair eh: %d", proximo(&filenha));
					break;
				}
				
		}
	}while(!(op == 6));

}
