#include <stdio.h>
#include <stdlib.h>
int main() {
    int numero = 42;
    int * ptr;
    ptr = &numero;
    printf("Valor: %d", *ptr);
    return 0;
}