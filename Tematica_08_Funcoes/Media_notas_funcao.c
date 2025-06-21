#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, float media) {
    return (nota1 + nota2 + nota3) / 3.0;
}

void verificarAprovacao(float media) {
    if (media >= 7.0 && media <= 10.0) {
        printf("Aluno APROVADO  com media %.2f\n", media);
    } else {
        printf("Aluno REPROVADO com media %.2f\n", media);
    }
}

int main() {
    float media, nota1, nota2, nota3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = calculaMedia(nota1, nota2, nota3, media);
    verificarAprovacao(media);
    return 0;
}
