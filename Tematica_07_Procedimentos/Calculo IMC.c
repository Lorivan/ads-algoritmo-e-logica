#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Digite o peso em (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura em (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC e: %.2f\n", imc);

    if (imc <18.5){
        printf("Classificacao: Abaixo do peso:\n");
    } else if (imc < 25){
        printf("Classificacao: Peso normal:\n");
    } else if (imc < 30){
        printf("Classificacao: Sobrepeso:\n");
    }else if (imc < 35){
        printf("Classificacao: Obesidade grau 1:\n");
    }else if (imc < 40){
        printf("Classificacao: Obesidade grau 2:\n");
    }else {
        printf("Classificacao: Obesidade grau 3 (morbida):\n");
    }
    return 0;
}







