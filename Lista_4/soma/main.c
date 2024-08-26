#include <stdio.h>
#include <stdlib.h>

int main() {
    int d = 1;
    float soma = 0;

    while (d <= 10) {
        soma += 1.0 / d;
        d++;
    }

    printf("A soma e: %.2f\n", soma);

    return 0;
}
