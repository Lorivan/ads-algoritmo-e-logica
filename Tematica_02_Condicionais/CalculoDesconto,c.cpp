	#include<stdio.h>
	int main (){
		float precoAtual;
		float precoFinal;
		float desconto;
		float porcentagem;
		
		printf("Digite o valor do produto R$: ");
		scanf("%f",&precoAtual);
		
		printf("Informe o percentual de Desconto %: ");
		scanf("%f",&porcentagem);
		
		desconto = precoAtual * (porcentagem / 100);
		precoFinal = precoAtual - desconto;
		
		printf("Valor do Produto R$ %.2f\n",precoAtual);
		printf("Percentual de  desconto %.2f\n",porcentagem);
		printf("Valor do desconto R$  %.2f\n",desconto);
		printf("Valor final R$ %.2f\n",precoFinal);
			
		return 0;
	}
