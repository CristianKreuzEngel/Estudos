#include <stdio.h>
 
int main() {
	int cod, cod1,qtd,qtd1;
	double valor,valor1,soma;
	scanf("%i %i %lf",&cod,&qtd,&valor);
	
	scanf("%i %i %lf",&cod1,&qtd1,&valor1);
	soma=(qtd*valor)+(qtd1*valor1);
    printf("VALOR A PAGAR: R$ %.2f\n",soma);
    return 0;
}