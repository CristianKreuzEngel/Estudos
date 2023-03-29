#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//scanf para INTEIRO, gets para CHAR, %s(struct)
struct morador{
  char nome[50],fone[15],email[40];
  bool emprego;
  int  apto[5],idade[3];
  float renda[10];
};
int main (void){
setlocale(LC_ALL,"");
    struct morador morador_novo;
 
    printf("Informe o nome completo do Inquilino:\n ");
    scanf("%s", morador_novo.nome);
    
    printf("Qual telefone para contato:\n");
    scanf ("%s", morador_novo.fone);
    
    printf("Informe um email:\n");
    scanf ("%s", morador_novo.email);
    
    printf("Qual a ") ;   
    return 0;
}
