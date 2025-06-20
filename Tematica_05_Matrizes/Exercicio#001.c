#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    // Declaração e inicialização da matriz 3x3
    int matriz[3][3] = {{12, 16}, {15, 19}, {23, 29}};
    // A matriz é de 3 linhas e 3 colunas, mas apenas 2 colunas foram inicializadas em cada linha.
    // O compilador automaticamente preenche os valores não informados com 0.

    // Laço externo percorre as linhas da matriz (0 a 2)
    for (int i = 0; i <= 2; i++) {
        // Laço interno percorre as colunas da matriz (0 a 1) — ou seja, só imprime as 2 primeiras colunas
        for (int j = 0; j <= 1; j++) {
            printf("%d  ", matriz[i][j]);  // Imprime o valor na posição [i][j]
        }
        printf("\n");  // Pula para a próxima linha após imprimir uma linha da matriz
    }

    return 0;  // Finaliza o programa
}
