#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, soma;

    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &x);

    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &y);

    printf("Digite o valor do terceiro numero: \n");
    scanf("%d", &z);

    soma = x + y + z;
    printf("A soma dos numeros e: %d \n", soma);

    return 0;
}
