#include "stdio.h" // Inclui a biblioteca padr�o de entrada e sa�da

int main() {

    float nota; // Declara uma vari�vel do tipo float para armazenar a nota do aluno

    // Solicita ao usu�rio que digite a nota
    printf("Digite a nota: ");
    scanf("%f", &nota); // L� a nota digitada pelo usu�rio e armazena na vari�vel 'nota'

    // Verifica se a nota � suficiente para aprova��o
    if (nota >= 70) {
        printf("Aprovado!"); // Aluno aprovado
    } 
    // Verifica se a nota est� na faixa de recupera��o
    else if (nota >= 50) {
        printf("Em recuperacao!"); // Aluno em recupera��o
    } 
    // Caso a nota seja inferior a 50, o aluno est� reprovado
    else {
        printf("Reprovado!"); // Aluno reprovado
    }

    return 0; // Indica que o programa terminou com sucesso
}

