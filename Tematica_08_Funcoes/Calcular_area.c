#include <stdio.h>
# define PI 3.14
float calcularArea(float raio) {
    float area = PI * raio * raio;
    return area;
}
int main() {
    float raio = 22;
    float area = calcularArea(raio);
    printf("Area de circulo: %.2f\n", area);
    return 0;
}
