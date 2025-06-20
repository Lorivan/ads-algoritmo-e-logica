#include <stdio.h>
int main() {
    float ponteiro =95.2;
    float *prt ;
    prt = &ponteiro;
    printf("Valor: %.2f\n", *prt);
    return 0;
}
