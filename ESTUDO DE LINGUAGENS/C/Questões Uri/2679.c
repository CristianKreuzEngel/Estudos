#include <stdio.h>
#include <stdlib.h>


int main() {
    int valor;
    scanf("%d", &valor);
    if(valor%2 == 0){
        printf("%d\n", valor+2);
    }else{
       printf("%d\n", valor+1); 
    }
    //valor%2 == 0 ? console.log(valor+2) : console.log(valor+1);
}