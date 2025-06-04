#include <stdio.h>
int main() {
    int numero =0;
    while(numero<=5) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
    }
    printf("O numero digitado foi: %d\n", numero);
    return 0;
}
