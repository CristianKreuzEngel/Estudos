#include <stdio.h>
 
int main() {
	int x;
	double soma, litros;
	scanf("%d", &x);
	scanf("%lf", &litros);
	soma=(x/litros);
	printf("%.3lf km/l\n",soma);
 
    return 0;
}