#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, soma = 0;

    while(i <= 49){
        soma += i;
        i += 2;
    }

    printf("A soma dos n�meros �mpares de 1 a 49 �: %d\n", soma);

    return 0;
}
