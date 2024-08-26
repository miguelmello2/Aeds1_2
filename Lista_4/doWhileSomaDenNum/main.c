#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1, d = 1;
    float soma = 0;

    do {
        soma += (float)n / d;
        d++;
    }while(d <= 40);

    printf("A soma e: %.2f\n", soma);

    return 0;
}
