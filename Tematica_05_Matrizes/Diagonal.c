#include <stdio.h>
int main() {
    int N;
    printf("Qual a ordem da Matriz?:  ");
    scanf("%d", &N);

    int mat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento: [%d][%d] ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n DIAGONAL PRINCIPAL :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
        }
        int qtdeNegativos = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (mat[i][j] < 0) {
                    qtdeNegativos++;
                }
            }
        }
        printf( "\nQUANTIDADE DE NUMEROS NEGATIVOS = \n", qtdeNegativos);

        return 0;
    }

