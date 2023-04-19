#include <stdio.h>
#include <stdlib.h>


int main() {
    double a,total;
    scanf("%lf", &a);
    total = (4.0/3.0)*3.14159*(a*a*a);
    printf("VOLUME = %.3lf\n", total);
}