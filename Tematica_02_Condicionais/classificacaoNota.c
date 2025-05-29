#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da

int main() {

	float nota; // Declara uma vari�vel do tipo float para armazenar a nota do aluno

	// Solicita ao usu�rio que digite a nota
	printf("Digite a nota: ");
	scanf("%f", &nota); // L� a nota digitada pelo usu�rio e armazena na vari�vel 'nota'
	
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

