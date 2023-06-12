#include <stdio.h>
#include <stdlib.h>

int main(){
    float produto=0;
    float venda=0;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    if(produto<20){
        venda=(produto+(produto*0.45));
        printf("Voce vendera o produto por %f", venda);
    }
    else{
        venda = (produto+(produto*0.3));
        printf("Voce vendera o produto por %f", venda);
    }

    return 0;
}