#include <stdio.h>
int main() {
    int vetor[10];
    int i;
    printf("Digite numeros inteiro do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor  %d: ", i+i);
        scanf("%d", &vetor[i]);
    }
    printf("\nnumeros impares encontrados:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ",  vetor[i]);
        }
}
    printf("\n");
return 0;
}