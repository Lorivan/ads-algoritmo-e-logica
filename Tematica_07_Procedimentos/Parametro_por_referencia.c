#include <stdio.h>
int altera (int *p) {
    *p = *p * 2;
    printf("O  valor do numero dentro do procedimento %d\n", *p);
}
int main() {
    int num = 19;
    int *p= &num;
    printf("O numero antes do procedimento e %d\n", num);
    altera (p);
    printf("O numero depois do procedimento e %d\n", num);
}

