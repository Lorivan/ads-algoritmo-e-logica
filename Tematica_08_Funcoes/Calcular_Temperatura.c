#include <stdio.h>

float celsiusParaFahrenheit(float c, float f) {
    float temperatura = (c * 9 / 5) + 32;
    return temperatura;
}

int main() {
    printf("Temperatura: %.2f C\n", celsiusParaFahrenheit(12, 44));
    return 0;
}
