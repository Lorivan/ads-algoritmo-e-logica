// Desafio unidade tematica 01

#include <stdio.h>    // Biblioteca para fun��es de entrada e sa�da (ex: printf, scanf)

// Fun��o principal
int main() {
    // -----------------------------
    // DECLARA��O DAS VARI�VEIS
    // -----------------------------
    char nomeProduto[100]; // Vari�vel para armazenar o nome do produto
    float valorAtual; // Valor atual do produto (sem desconto)
    float percentualDesconto; // Percentual de desconto informado pelo usu�rio
    float desconto; // Valor calculado do desconto em reais
    float valorFinal; // Valor final do produto ap�s aplicar o desconto

    // -----------------------------
    // ENTRADA DE DADOS
    // -----------------------------
    printf("Digite o nome do produto: ");
    scanf("%s", &nomeProduto); // L� o nome do produto (aten��o: l� apenas at� o primeiro espa�o)

    printf("Digite o valor do produto R$: ");
    scanf("%f", &valorAtual); // L� o valor atual do produto

    printf("Digite o percentual de desconto : ");
    scanf("%f", &percentualDesconto); // L� o percentual de desconto a ser aplicado

    // -----------------------------
    // PROCESSAMENTO
    // -----------------------------
    desconto = valorAtual * (percentualDesconto / 100); // Calcula o valor do desconto
    valorFinal = valorAtual - desconto; // Calcula o valor final do produto com desconto
    printf("\n");
    // -----------------------------
    // SA�DA DE DADOS
    // -----------------------------
    printf("Nome do produto, %s\n", nomeProduto); // Exibe o nome do produto
    printf("Valor atual do produto R$ %.2f\n", valorAtual); // Exibe o valor atual do produto
    printf("Desconto concedido em percentual %.2f\n", percentualDesconto); // Exibe o percentual de desconto
    printf("Valor do desconto concedido R$ %.2f\n", desconto); // Exibe o valor em reais do desconto
    printf("Valor final do produto R$ %.2f", valorFinal); // Exibe o valor final do produto
    return 0; // Finaliza o programa
}
