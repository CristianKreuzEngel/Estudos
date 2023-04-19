#include <stdio.h>
 
int main() {
	double x,y,soma;
	char nome;
	scanf("%s", &nome);
	scanf("%lf",&x);
	
	scanf("%lf",&y);
	soma=(y*0.15)+x;
	printf("TOTAL = R$ %.2lf\n",soma);
	
    return 0;
}