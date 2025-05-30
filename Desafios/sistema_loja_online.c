#include<stdio.h>
int main(){
float valorCompra;
float descontoA = 0.0;
float descontoP = 0.0;
float valorFinal1;
float valorFinal2;
int  tipoPagamento;

printf("Digite o valor da compra\n: ");
scanf("%f", &valorCompra);
printf("Digite o tipo de pagamento (1 - À vista | 2 - Parcelado)\n:  " );
scanf("%d", &tipoPagamento);

if(valorCompra > 500.0 && tipoPagamento == 1 ){
 descontoA = valorCompra * 0.10; // 10% por cento
 }
 if(valorCompra <= 500 && tipoPagamento == 2){
  descontoP = valorCompra * 0.05; // 5% por cento
}
valorFinal1 = descontoA - valorCompra;
valorFinal2 = descontoP - valorCompra;

printf("\n Resumo da Compra\n");
printf("O valor original R$: %.2f", valorCompra);
printf(" valor do desconto a vista R$ %.2f", descontoA);
printf("O valor do desconto parcelado R$: %.2f", descontoP);
printf(" valor do final R$ %.2f", valorFinal1);
return 0;
}
