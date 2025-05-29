#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {

	float nota; // Declara uma variável do tipo float para armazenar a nota do aluno

	// Solicita ao usuário que digite a nota
	printf("Digite a nota: ");
	scanf("%f", &nota); // Lê a nota digitada pelo usuário e armazena na variável 'nota'
	
	if (nota >= 9.0) {
		printf("Excelente!\n"); // Aluno aprovado com louvor
	} else if (nota  >= 7.0 && nota < 9.0) {
		printf("Boa!\n"); // Nota boa, aluno aprovado
	} else if (nota >= 5.0  && nota  < 7.0 ) {
		printf("Regular\n"); // Aprovado com nota baixa
	} else {
		printf("Insuficiente!"); // Aluno reprovado
	}

	return 0; // Indica que o programa terminou com sucesso
}

