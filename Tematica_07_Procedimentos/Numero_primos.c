#include <stdio.h>

void verificarPrimos(int numero) {
    int i, contador = 0;

    if (numero <= 1) {
        printf("%d Noa e numero primo\n", numero);
        return;
    }
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    if (contador == 2) {
        printf("%d Numero primo\n", numero);
    } else {
        printf("%d Numero nao e numero primo\n", numero);
    }
}

int main() {
    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    verificarPrimos(n);
    return 0;
}
