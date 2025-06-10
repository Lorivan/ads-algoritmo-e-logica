#include <stdio.h>

// Procedimento que converte Celsius para Fahrenheit
void celsiusParaFahrenheit(float c);

// Procedimento que converte Fahrenheit para Celsius
void fahrenheitParaCelsius(float f);

int main() {
    int opcao;          // Armazena a opção escolhida pelo usuário no menu
    float temperatura;  // Armazena a temperatura digitada pelo usuário

    // Laço principal que exibe o menu até o usuário escolher sair
    do {
        // Menu de opções
        printf("=== Conversor de Temperatura ===\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);  // Lê a opção escolhida

        // Verifica qual foi a opção escolhida e executa a função correspondente
        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);  // Lê temperatura em Celsius
                celsiusParaFahrenheit(temperatura);  // Converte e exibe
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);  // Lê temperatura em Fahrenheit
                fahrenheitParaCelsius(temperatura);  // Converte e exibe
                break;

            case 3:
                printf("Saindo do programa...\n");  // Encerra o programa
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 3);  // Repete até o usuário escolher sair

    return 0;
}

// Procedimento que recebe temperatura em Celsius e converte para Fahrenheit
void celsiusParaFahrenheit(float c) {
    float f = (c * 9 / 5) + 32;
    printf("Resultado: %.2f °C = %.2f °F\n", c, f);
}

// Procedimento que recebe temperatura em Fahrenheit e converte para Celsius
void fahrenheitParaCelsius(float f) {
    float c = (f - 32) * 5 / 9;
    printf("Resultado: %.2f °F = %.2f °C\n", f, c);
}
