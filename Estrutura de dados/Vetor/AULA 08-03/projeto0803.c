#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu (){
    int op;   
    puts ("\n\n-----ESCOLHA UMA OPÇÃO-----\n");
    puts ("---1-Inserir um valor no vetor;");
    puts ("---2-Retirar um valor do vetor;");
    puts ("---3-Verificar se o vetor está cheio;");
    puts ("---4-Ordenar o vetor;");
    puts ("---5-Imprimir o vetor;"); 	    
    puts ("-----0-SAIR-----");
    scanf ("%d", &op);  
    return op;  
}
void ordena(int vetor[], int tamanho){
    
}
int main() {
	setlocale(LC_ALL, "");
	register int i, j;
	int tam, op, cont, valor, contador = 0, troca, copia;
	printf("\nQual o tamanho do vetor?\n");
	scanf("%d", &tam);
	int vetor[tam], ordenado[tam];
	cont = -1;
	do { 
       op = menu();
       switch (op) {
       	
              case 1 :
              	if(cont == tam-1){
              		printf("\nVetor está cheio\n");
              		break;
				  }else{
				 	cont++;				  	
			 		printf("\nDigite um valor!\n");
			 		scanf("%d", &valor);			 		
			 		vetor[cont] = valor;
				 	break;
				  }
				
              case 2 :
              	if(cont < 0){
              		printf("\nVetor está vazio!\n");
              		break;
				  }else{
				  	printf("\nValor Retirado: %d\n", vetor[cont]);
				  	cont--;
				  }
              	
              case 3 :
              	if(cont == tam-1){
              		printf("\nVetor está cheio\n");
              		break;
				  }else{
				  	printf("\nVetor não está cheio\n");
				  }
			  case 4: 
			  	if(cont < 0){
			  		printf("\nVetor está vazio!\n");
			  		break;
				  }else{
				  	printf("\nOriginal: ");
				  	for(i = 0; i < cont+1; i++){
            			printf("%d\t", vetor[i]);
					}
					for(i = 0; i < tam; i++){
        				for (j = i; j < tam; j++){
            				if (vetor[i] > vetor[j]){
                				int temp = vetor[i];
                				vetor[i] = vetor[j];
                				vetor[j] = temp;
            				}
        				}
    				}
					ordena(vetor, tam);
					printf("\nOrdenado: ");
				  	for(i = 0; i < cont+1; i++){
            			printf("%d\t", vetor[i]);
					}
				  }
			 	break;
			  case 5:
			  	if(cont < 0){
			  		printf("\nVetor está vazio!\n");
				  }else{
				  	printf("\nVetor: ");
				  	for(i = 0; i < cont+1; i++){
            			printf("%d\t", vetor[i]);
					}
				  }
            	
				break;              	
			    			              
       }
    } while (!(op == 0));
	
	return 0;
}
