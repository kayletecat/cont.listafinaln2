#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade>=18 && idade<=67){
        printf("Voce pode doar sangue.");
    }
    else{
        printf("Voce nao pode doar sangue.");
    }
    return 0;
}