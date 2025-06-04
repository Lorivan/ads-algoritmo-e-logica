#include <stdio.h>

int main() {
    int numero = 0;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    while (numero != 0) {
        soma = soma + numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }
    printf("A soma dos numeros digitados e %d", soma);
    return 0;
}
