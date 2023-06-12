#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float numero=0;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero>0){
        printf("A raiz quadrada desse numero e: %f", pow(numero, 0.5));
    }
    else{
        printf("Elevando o numero ao quadrado temos: %f", pow(numero, 2));
    }
    return 0;
}