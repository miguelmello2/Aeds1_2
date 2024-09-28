#include <stdio.h>
#include <stdlib.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("Tabela de conversão de Fahrenheit para Celsius\n");
    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = 50; fahrenheit <= 100; fahrenheit += 5) {
        // Calcula a temperatura em Celsius
        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}
