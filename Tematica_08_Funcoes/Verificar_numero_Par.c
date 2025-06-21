#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    if (ehPar(valor)) {
        printf("O numero %d eh PAR\n", valor);
    } else {
        printf("O numero %d eh IMPAR\n", valor);
    }
    return 0;
}
