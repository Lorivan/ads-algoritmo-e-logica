#include <stdio.h>
int main() {
    float num1, num2, resultado;
    char operador;

    printf("Insira o operador: (  *, + , - , / , ) :  ");
    scanf("%c", &operador);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("A soma = %.2f", resultado);    break;
        case '*':
            resultado = num1 * num2;
            printf("A multiplicacao = %.2f", resultado);   break;
        case '-':
            resultado = num1 - num2;
            printf("A subtracao = %.2f", resultado);      break;
        case '/':
            if (num2  != 0)  {
                resultado = num1 / num2;
                printf("Divisao = %.2f", resultado);    break;
            } else  {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default: printf("Operador invalido\n");
    }
    return 0;
}
