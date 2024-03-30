#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao, aux;
	int lista[] = {};
	int i , valor,op2,cont = 0,index ;
	bool encontrado = false;
	
	
	do{
		printf("digite 0 para alimentar um valor no vetor. \n");
		printf("digite 1 para buscar valor no vetor. \n");
		printf("digite 2 para remover itens no vetor.\n");
		printf("digite 3 para identificar se vetor esta cheio.\n");
		printf("digite 4 para ordenar os dados no vetor.\n");
		printf("digite 5 para mostrar o vetor.\n");
		printf("digite 6 para parar.\n");
		
	    scanf("%d", &opcao);
	    
	    if(opcao == 1){
	    	printf("digita o valor a ser procurado no vetor:");
			scanf("%d" , &valor);
			for (i = 0;i<10;++i){
				if(lista[i] == valor){
					printf("O %d se encontra no vetor , na posicao: %d\n", valor, i);
					encontrado = true;
				}
			}			
			
			if(encontrado == false){
				printf("valor nao encontrado \n");
			}
		
		}
				
	
		if(opcao == 2){
			printf("digite qual valor voce quer remover da lista:");
			scanf("%d" , &op2);
			
			for(i = 0;i<10;++i){
				if (lista[i] == op2 ){
					lista[i] = 0;
				}
				
			}
		}
		
		if(opcao == 3){
			for(i=0;i<10;i++){
				if(lista[i] == 0){
					cont = cont+1;
					index = i+1;
				}		
			}
			if(cont>0){
				printf("O vetor esta vazio na posicao %d.\n",index);
			}
			if(cont == 0){
				printf("O vetor esta cheio.\n");
			}
		}
		
		if(opcao == 4){
			for(cont = 1; cont < 10;cont++){
				for(i = 0; i < 10 -1;i++){
				  if(lista[i] > lista[i + 1]){
						aux = lista[i];
						lista[i] = lista[i + 1];
						lista[i + 1] = aux;
				  }
			   }
			}
		}
		
		if(opcao == 5){
			for(i = 0;i<10;++i){
				printf("[%d]= %d\t \n",i+1, lista[i]);
			}
		}


	} while(opcao != 6);
	
	

	return 0;
}