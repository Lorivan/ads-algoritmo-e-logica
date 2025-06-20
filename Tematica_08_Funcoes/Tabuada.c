#include <stdio.h>
void mostrarTabuada(int numero)
{
    printf("Tabuada do numero %d \n",numero);
    for (int i = 1;i<=10;i++) {
    printf("%d X %d = %d \n", numero, i, numero * i);
    }
}
int main() {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    mostrarTabuada(valor);
}

