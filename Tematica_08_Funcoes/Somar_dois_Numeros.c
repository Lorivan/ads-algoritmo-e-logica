#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num01, num02, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num01);
    printf("Digite o segundo numero: ");
    scanf("%d", &num02);
    resultado = soma(num01, num02);
    printf("A Soma de %d + %d e de %d\n",num01,num02, resultado);
    return 0;
}
