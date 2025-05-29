#include<stdio.h>
#include<stdlib.h> // Necess�rio para system

int main() {
    int N;
    int i;
    int x;
    int soma;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

    soma = 0;
    for (i = 1; i <= N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }
    printf("\n");
    printf("SOMA = %d\n", soma);
    return 0;
}
