#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    double temp;
    double media;
    double soma = 0.0;
    double maiorNota, menorNota;
    int aprovados, reprovados;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &N);
    double notas[N];
    for (int i = 0; i < N; i++)
        do {
        printf("Digite a nota do aluno: ", i+1);
        scanf("%lf", &notas[i]);
        if (notas[i] < 0 ||  notas[i] > 10)
            printf("Nota invalida! Digite uma numero de 0 a 10: \n");
    }  while (notas[i] < 0 || notas[i <10);
        soma += notas[i];
    }
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1; j++) {
            if (notas[j] > notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
    media = soma / N;
    printf("\n Notas ordenadas: %.2lf\n", notas);
    for (int i = 0; i < N; i++) {
        printf("\n Notas: %.2lf\n", notas[i]);
    }
    printf("\n Media das notas dos  aluno(s) : %.2lf\n", media);
    return 0;
}
