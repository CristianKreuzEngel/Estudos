#include <stdio.h>
 
int main() {
	int alc,gas,die,valor;
	alc=0;
	gas=0;
	die=0;
	while(valor != 4){
		scanf("%d", &valor);
		if(valor == 1){
			alc=alc+1;
		}
		if(valor == 2){
			gas=gas+1;
		}
		if(valor == 3){
			die=die+1;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alc);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",die);
	
    return 0;
}