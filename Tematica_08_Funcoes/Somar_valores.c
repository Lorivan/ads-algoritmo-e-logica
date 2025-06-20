#include <stdio.h>

int somarValores(int num1, int num2) {
    int resultado = (num1 + num2);
    return resultado;
}

int main() {
    printf("%d", somarValores(9, 2));
    return 0;
}
