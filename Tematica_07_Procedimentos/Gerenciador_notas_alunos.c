#include <stdio.h>

// Função que lê 3 notas e armazena nos ponteiros passados
void lerNotas(float *n1, float *n2, float *n3);

// Função que calcula a média de 3 notas e armazena no ponteiro 'media'
void calcularMedia(float n1, float n2, float n3, float *media);

// Função que mostra o resultado com base na média (aprovado ou reprovado)
void mostrarResultado(float media);

int main() {
    float n1, n2, n3, media;

    // Lê as 3 notas do aluno
    lerNotas(&n1, &n2, &n3);

    // Calcula a média e armazena na variável 'media'
    calcularMedia(n1, n2, n3, &media);

    // Mostra o resultado com base na média
    mostrarResultado(media);

    return 0;
}

// Implementação da função que lê 3 notas via ponteiros
void lerNotas(float *n1, float *n2, float *n3) {
    printf("Digite a primeira nota: ");
    scanf("%f", n1);

    printf("Digite a segunda nota: ");
    scanf("%f", n2);

    printf("Digite a terceira nota: ");
    scanf("%f", n3);
}

// Calcula a média aritmética simples das 3 notas
void calcularMedia(float n1, float n2, float n3, float *media) {
    *media = (n1 + n2 + n3) / 3;
}

// Exibe a média e informa se o aluno foi aprovado ou reprovado
void mostrarResultado(float media) {
    printf("Media = %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }
}
