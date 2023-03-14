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

int main() {
	setlocale(LC_ALL, "");
	int tam, op, cont, valor, i;
	printf("\nQual o tamanho do vetor?\n");
	scanf("%d", &tam);
	int vetor[tam];
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
				  	for(i = 0; i < cont+1; i++){
				  		
					  }
				  }
              	
              case 3 :

			  case 4: 
			 	break;
			  case 5:
            	for(i = 0; i < cont+1; i++){
            		printf("%d\t", vetor[i]);
				}
				break;              	
			    			              
       }
    } while (!(op == 0));
	
	return 0;
}
