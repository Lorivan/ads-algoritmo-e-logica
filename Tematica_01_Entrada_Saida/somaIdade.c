#include<stdio.h>

int main () {
int idade1;
int idade2;
int soma;

printf("Digite a idade 01: ");
scanf("%d",&idade1);

printf("Digite a idade 02: ");
scanf("%d",&idade2);

soma = idade1 + idade2;

printf("A soma das idades e de %d anos\n", soma);
return 0;
}
