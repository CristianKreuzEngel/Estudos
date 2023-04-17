#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int qtde;
typedef struct carro {
    char nomeCar[25];
    char tipo[20];
    int ano;
    int potencia;
    int velMax;
} jao;
    
jao lerval[5];


int menu(){
    int op;
    puts ("| CADASTRO DE CARRO |");
    puts ("| 1 - CADASTRAR CARRO |");
    puts ("| 2 - Ver CARRoS CADASTRADOS |");
    puts ("| 3 - TROCAR CARRO |");
    puts ("| 9 - SAIR |");
    scanf ("%d", &op);
    system ("cls");
    return op;
}

void cadastro () {
    int i;
    for (i = 0; i < qtde; i++){
        printf("Digite o nome do carro? \n");
        gets(lerval[i].nomeCar);
    
        printf("Qual o tipo do carro?\n");
        gets(lerval[i].tipo);
    
        printf("QUal o ano do carro?\n");
        scanf("%d", &lerval[i].ano);
    
        printf("QUal a potencia do carro em CV's'?\n");
        scanf("%d", &lerval[i].potencia);
    
        printf("QUal o Velocidade maxima do carro?\n");
        scanf("%d", &lerval[i].velMax);
    }
}


int imprime(){
    int i;
    for (i = 0; i < qtde; i++){
        printf("O carro %s eh um %s do ano de %d com potencia de %d cavalos e uma velocidade maxima de %d km/h!\n", lerval[i].nomeCar, lerval[i].tipo, lerval[i].ano, lerval[i].potencia, lerval[i].velMax);
    }
}
int main(int argc, char *argv[]) {
	printf("| QUAL A QUANTIDADE DE CADASTRO A SER REALIZADOS? |\n");
    scanf("%d", qtde);
    
    int op;
    
    do {
        op = menu(); 
            switch (op) {
                case 1 :
                    cadastro();
                    break;
                case 2 : 
                    imprime();
                    break;
            }
        
    } while (!(op == 9));
	return 0;
}
