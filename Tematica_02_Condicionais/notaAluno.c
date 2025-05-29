#include "stdio.h" // Inclui a biblioteca padrão de entrada e saída

int main() {

    float nota; // Declara uma variável do tipo float para armazenar a nota do aluno

    // Solicita ao usuário que digite a nota
    printf("Digite a nota: ");
    scanf("%f", &nota); // Lê a nota digitada pelo usuário e armazena na variável 'nota'

    // Verifica se a nota é suficiente para aprovação
    if (nota >= 70) {
        printf("Aprovado!"); // Aluno aprovado
    } 
    // Verifica se a nota está na faixa de recuperação
    else if (nota >= 50) {
        printf("Em recuperacao!"); // Aluno em recuperação
    } 
    // Caso a nota seja inferior a 50, o aluno está reprovado
    else {
        printf("Reprovado!"); // Aluno reprovado
    }

    return 0; // Indica que o programa terminou com sucesso
}

