#include<stdio.h>
int main(){
float valorCompra;
float descontoA;
float descontoP;
float valorFinal;
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
printf("O valor do desconto a vista R$: %.2f", descontoA);
printf("O valor do desconto parcelado R$: %.2f", descontoP);
return 0;
}
