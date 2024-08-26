#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1, d = 1;
    float soma = 0;

    while (d <= 50) {
        soma += (float)n / d;
        n += 2;
        d++;
    }

    printf("A soma e: %.2f\n", soma);

    return 0;
}
