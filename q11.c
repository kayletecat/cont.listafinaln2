#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario=0;
    float salario_liquido=0;
    float valor_da_aula = 0;
    int numero_de_aulas = 0;
    float desconto = 0;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valor_da_aula);
    printf("Digite o numero de aulas: ");
    scanf("%d", &numero_de_aulas);
    printf("Digite o desconto do INSS: ");
    scanf("%f", &desconto);

    salario = valor_da_aula*numero_de_aulas;
    salario_liquido = salario-(salario*desconto);

    printf("O salário liquido de um professor é: ");
    scanf("%f", &salario_liquido);

    return 0;
}