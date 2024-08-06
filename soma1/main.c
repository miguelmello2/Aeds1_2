#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, s;

    printf("\nDigite o valor do Primeiro Numero? ");
    scanf("%d", &n1);

    printf("\nDigite o valor de Segundo Numero? ");
    scanf("%d",&n2);

    s=n1+n2;

    printf("\n A soma dos numeros eh %d", s );

    return 0;
}
