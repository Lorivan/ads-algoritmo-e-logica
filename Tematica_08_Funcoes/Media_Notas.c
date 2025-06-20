#include <stdio.h>
float calcularMedia(float nota1,float nota2,float nota3) {
   return ( nota1+ nota2+nota3) / 3;
}
int main() {
    float media = calcularMedia (8.4, 9.4, 7.7);
      printf("Media = %.2f",media);
return 0;
}