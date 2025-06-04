// Desafio unidade tematica 01

#include <stdio.h>    // Biblioteca para funções de entrada e saída (ex: printf, scanf)

// Função principal
int main() {
    // -----------------------------
    // DECLARAÇÃO DAS VARIÁVEIS
    // -----------------------------
    char nomeProduto[100]; // Variável para armazenar o nome do produto
    float valorAtual; // Valor atual do produto (sem desconto)
    float percentualDesconto; // Percentual de desconto informado pelo usuário
    float desconto; // Valor calculado do desconto em reais
    float valorFinal; // Valor final do produto após aplicar o desconto

    // -----------------------------
    // ENTRADA DE DADOS
    // -----------------------------
    printf("Digite o nome do produto: ");
    scanf("%s", &nomeProduto); // Lê o nome do produto (atenção: lê apenas até o primeiro espaço)

    printf("Digite o valor do produto R$: ");
    scanf("%f", &valorAtual); // Lê o valor atual do produto

    printf("Digite o percentual de desconto : ");
    scanf("%f", &percentualDesconto); // Lê o percentual de desconto a ser aplicado

    // -----------------------------
    // PROCESSAMENTO
    // -----------------------------
    desconto = valorAtual * (percentualDesconto / 100); // Calcula o valor do desconto
    valorFinal = valorAtual - desconto; // Calcula o valor final do produto com desconto
    printf("\n");
    // -----------------------------
    // SAÍDA DE DADOS
    // -----------------------------
    printf("Nome do produto, %s\n", nomeProduto); // Exibe o nome do produto
    printf("Valor atual do produto R$ %.2f\n", valorAtual); // Exibe o valor atual do produto
    printf("Desconto concedido em percentual %.2f\n", percentualDesconto); // Exibe o percentual de desconto
    printf("Valor do desconto concedido R$ %.2f\n", desconto); // Exibe o valor em reais do desconto
    printf("Valor final do produto R$ %.2f", valorFinal); // Exibe o valor final do produto
    return 0; // Finaliza o programa
}
