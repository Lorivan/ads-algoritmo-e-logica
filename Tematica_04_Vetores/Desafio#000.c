#include <stdio.h>
int main() {
    int notas[30];
    float media;
for (int i = 0; i < 30; i++) {
    printf("Digite a nota : %d",i+1);
    scanf("%d", &notas[i]);
}
for (int i = 0; i < 30; i++) {
    media = (notas[i] + notas[i + 1]) / 2;
}
    printf("Media = %.2f", media);
 return 0;
}