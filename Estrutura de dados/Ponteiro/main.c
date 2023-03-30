#include <stdio.h>
#include <stdlib.h>


//função faz a troca com base no endereço da váriavel utilizando ponteiros
void troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char *argv[]) {
	/*
	int variavel;
	int *ponteiro;
	int valorTemp;
	
	variavel = 25;
	ponteiro = &variavel;
	
	printf("O valor da variavel eh: %d\n\n", variavel);
	printf("O valor do endereco eh: %d\n\n", &ponteiro);
	printf("O valor do registro do apontamento eh: %d\n\n", variavel);
	
	valorTemp = *ponteiro;
	
	printf("O valor da variavel temporaria eh: %d\n\n", valorTemp);
	
	*/

	int a = 19, b=28;
	
	printf("\n Valor de A antes da troca: %d", a);
	printf("\n Valor de B antes da troca: %d", b);
	
	//chamando o enderço
	troca(&a, &b);
	
	printf("\n Valor de A apos da troca: %d", a);
	printf("\n Valor de B apos da troca: %d", b);
	
	return 0;
}
