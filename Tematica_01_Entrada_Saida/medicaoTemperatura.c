#include <stdio.h>

int main() {
    int temperatura;

    printf("Insira um temperatura: ");
    scanf("%d", &temperatura);
    if (temperatura >30) {
        printf("Esta quente, use roupas leves\n");
    } else {
        if (temperatura >=15) {
            printf("A temperatura esta amena!\n");
        }
        else {
            printf("Esta frio, use roupas quentes");
        }
    }
    return 0;
}
