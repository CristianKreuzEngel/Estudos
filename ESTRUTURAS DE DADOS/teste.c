int menu () {
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

int main(int argc, char *argv[]) {
    register int i;
    int j,valor, tam,op,cont,control ;


    printf("Qual o tamanho do vetor?\n");
    scanf("%d",&tam);
    int vetor[tam];

    cont = -1;
    do {
        op= menu();

        switch(op) {
            case 1:

                if(cont == tam-1) {
                    printf("O vetor ja esta cheio!\n");
                } else {
                    cont++;
                    printf("Digite o valor:\n");
                    scanf("%d", &vetor[cont]);
                }

                break;

            case 2:
                if(cont < 0) {
                    printf("O vetor ja esta vazio!\n");
                } else {
                    printf("Valor retirado:%d\n",vetor[cont]);
                    cont--;
                }

                break;

            case 3:
                if(cont == tam) {
                    printf("O vetor esta cheio!\n");
                }
                break;
            case 4:
                if(cont < 0) {
                    printf("O vetor esta vazio!\n");
                } else {
                    for (i = 0; i<tam; i++) {
                        for (j = i; j<tam; j++) {
                            if(vetor[i]>vetor[j]) {
                                control = vetor[i];
                                vetor[i] = vetor[j];
                                vetor[j] = control;
                            }
                        }
                    }
                }
                break;

            case 5:
                for (i = 0; i<cont+1; i++) {
                    printf("%d\t",vetor[i]);
                }
                break;

        }


    } while(!(op == 0));


    return 0;

}