#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    if (idade >= 17) {
        printf("Acesso liberado voce e maior de idade");
    }
    else {
        printf("Acesso negado voce e menor de idade");
    }
    return 0;
}

