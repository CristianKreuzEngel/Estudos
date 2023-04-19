#include <stdio.h>
 
int main() {
	double soma, x;
	int number, hora;
	scanf("%d", &number);
	scanf("%d", &hora);
	scanf("%lf", &x);
	soma=hora*x;
	printf("NUMBER = %d\n",number);
	printf("SALARY = U$ %.2lf\n",soma);
    return 0;
}