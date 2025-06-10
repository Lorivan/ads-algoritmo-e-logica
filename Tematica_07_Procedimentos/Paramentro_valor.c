#include <stdio.h>
int altera (int num) {
    num = num * 2;
    printf("O  valor do numero dentro do procedimento %d\n", num);
}
int main() {
    int num = 19;
    printf("O numero antes do procedimento e %d\n", num);
    altera (num);
    printf("O numero depois do procedimento e %d\n", num);
}

