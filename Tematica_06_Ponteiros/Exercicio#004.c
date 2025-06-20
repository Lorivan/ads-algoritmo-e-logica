#include <stdio.h>
int main() {
        int arr [5] = {10, 20, 30, 40, 50};
        int *prt = arr;
        int soma = 0;
        for (int i = 0; i < 5; i++) {
            soma += *(prt+i);
            printf("%d ", soma);
        }
        printf("\n");
        return 0;
    }
