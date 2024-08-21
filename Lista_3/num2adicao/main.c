#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,resultado;

    printf("Digite um numero inteiro\n");
    scanf("%d", &x);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &y);

    resultado = x + y;

    if(resultado >= 10){
        resultado = resultado + 5;
    } else {
        resultado = resultado + 7;
    }

    printf("O resultado e %d \n", resultado);

    return 0;
}
