#include <stdio.h>

// Função que exibe o menu principal da calculadora
void exibirMenu();

// Procedimentos (funções do tipo void) para operações matemáticas
void somar(float a, float b);
void multiplicar(float a, float b);
void dividir(float a, float b);
void subtracao(float a, float b);

int main() {
    int operacao;
    float num01, num02;

    // Laço principal que mantém o programa em execução até o usuário escolher sair
    do {
        exibirMenu();  // Mostra o menu de opções
        printf("Digite sua operacao: ");
        scanf("%d", &operacao);

        // Solicita os dois números apenas se a operação for válida (1 a 4)
        if (operacao >= 1 && operacao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num01);
            printf("Digite o segundo numero: ");
            scanf("%f", &num02);
        }

        // Chama a função correspondente à operação escolhida
        switch (operacao) {
            case 1: somar(num01, num02); break;
            case 2: multiplicar(num01, num02); break;
            case 3: dividir(num01, num02); break;
            case 4: subtracao(num01, num02); break;
            case 5: printf("Saindo...\n"); break; // Encerra o programa
            default: printf("Operacao invalida!\n"); // Caso a entrada não seja reconhecida
        }
    } while (operacao != 5);  // Repete até que o usuário escolha "Sair"

    return 0;
}

// Mostra o menu com as opções de operação disponíveis
void exibirMenu() {
    printf("\n=== Calculadora ===\n");
    printf("1 - Somar\n");
    printf("2 - Multiplicar\n");
    printf("3 - Dividir\n");
    printf("4 - Subtracao\n");
    printf("5 - Sair\n");
}

// Realiza a operação de soma e imprime o resultado
void somar(float a, float b) {
    printf("Resultado: %.2f\n", a + b);
}

// Realiza a multiplicação e imprime o resultado
void multiplicar(float a, float b) {
    printf("Resultado: %.2f\n", a * b);
}

// Realiza a divisão e trata o caso de divisão por zero
void dividir(float a, float b) {
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Erro: divisao por zero!\n");
    }
}

// Realiza a subtração e imprime o resultado
void subtracao(float a, float b) {
    printf("Resultado: %.2f\n", a - b);
}
