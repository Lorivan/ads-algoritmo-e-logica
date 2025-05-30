#include<stdio.h>
int main(){
float valorCompra;
float desconto = 0.0;
float valorFinal;
int  tipoPagamento;

printf("Digite o valor da compra: ");
scanf("%f", &valorCompra);
printf("Digite o tipo de pagamento (1 - A vista | 2 - Parcelado):  " );
scanf("%d", &tipoPagamento);

if(valorCompra > 500.0 && tipoPagamento == 1 ){
 desconto= valorCompra * 0.10; // 10% por cento
 }  else if(valorCompra > 500 && tipoPagamento == 2){
  desconto = valorCompra * 0.05; // 5% por cento
} else if(valorCompra <= 500.0 && tipoPagamento == 1 ){
 desconto = valorCompra * 0.05; // 10% por cento
 } else if (valorCompra <= 500 && tipoPagamento == 2){
  desconto = valorCompra * 0.02; // 5% por cento
}
valorFinal = valorCompra - desconto ;

printf("Resumo da Compra\n");
printf("O valor original R$: %.2f\n", valorCompra);
printf(" valor do desconto a vista R$ %.2f\n", desconto);
printf("O valor do desconto parcelado R$: %.2f\n", desconto);
printf(" valor final R$ %.2f", valorFinal);

return 0;
}
