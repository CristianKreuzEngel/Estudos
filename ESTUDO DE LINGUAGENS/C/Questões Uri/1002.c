#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double raio, area;
    scanf("%lf", &raio);
    area = 3.14159 * pow(raio, 2.0);
    printf("A=%.4lf\n", area);
}