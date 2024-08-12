#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, r;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    r = base * altura;
    printf("A area do retangulo e %d\n", r);

    return 0;
}
