#include <stdio.h>

int main() {
    int notas[5] = {7, 8, 9, 6, 5};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
        printf("Soma = %d\n", soma);
    }
    return 0;
}
