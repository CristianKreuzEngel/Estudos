#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double a,b,c,calcTrian, calcQuadrado, calcCir, calcTrapezio, calcRetan;
	scanf("%lf %lf %lf", &a, &b, &c);
	calcCir = (c * c) * 3.14159;
	calcQuadrado = b * b;
	calcRetan = a * b;
	calcTrian = (a * c) / 2;
	calcTrapezio = ((a+b)*c)/2;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", calcTrian,calcCir,calcTrapezio,calcQuadrado,calcRetan);
}