#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade<16){
        printf("Sua classe eleitoral é: nao eleitor.");
    }
    else if(idade>=18 && idade<=65){
        printf("Sua classe eleitoral é: Eleitor obrigatorio.");
    }
    else if(idade>=16 && idade<18){
        printf("Sua classe eleitoral é: eleitor facultativo.");
    }
    else if(idade<0){
        printf("Não pode colocar idade negativa.");
    }
    else{
        printf("Sua classe eleitoral é: eleitor facultativo.");
    }
    
    return 0;
}