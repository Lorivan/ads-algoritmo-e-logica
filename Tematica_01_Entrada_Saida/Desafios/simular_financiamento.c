#include <stdio.h>
int main() {
    int idade;
    float valorRenda;
    char restricao;

    printf("Digite a idade: ");
    scanf("%d",&idade);
    printf("Digite o valor da renda mensal: ");
    scanf("%f",&valorRenda);
    printf("Possui restricao no nome? ");
    scanf(" %c",&restricao);

    if (idade >= 18 && valorRenda >= 3600.0 && (restricao == 'n' || restricao == 'N')) {
        printf("Financiamento Aprovado\n");
    } else if (idade < 18) {
        printf("Financiamento reprovado: idade menor que 18 anos\n");
    } else if (valorRenda < 3600.00) {
        printf("Financiamento recusado: renda insuficiente! \n");
    } else {
        printf("Financiamento reprovado: cliente com restricao! ");
    }
    return 0;
}
