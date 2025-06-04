#include <stdio.h>

int main() {
    int numero = 1;
    int numeroNegativos = 0;
    int numeroPositivos = 0;
    int totalPositivo, totalNegativo;

    while (numero != 0) {
        printf("Digite um numero( Ou 0 para sair): ");
        scanf("%d", &numero);
        if (numero < 0) {
            numeroNegativos++;
        } else if (numero > 0) {
            numeroPositivos++;
        }
        totalPositivo = numero + numeroPositivos;
        printf("Total numero positivos: %d\n", totalPositivo);
        totalNegativo = numero + numeroNegativos;
        printf("Total numero negativos: %d\n", totalNegativo);
    }
    return 0;
}
