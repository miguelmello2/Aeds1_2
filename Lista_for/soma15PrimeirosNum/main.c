#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float numerador = 1, denominador = 1, soma = 0;

    for (i = 1; i <= 15; i++) {

        soma += numerador / denominador;

        numerador += 2;
        denominador += 1;
    }


    printf("A soma dos 15 primeiros termos da sequencia e: %.2f\n", soma);

    return 0;
}
