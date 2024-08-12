#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar, euro, cd, ce;

    printf("Digite o valor em reais: \n ");
    scanf("%f", &real);

    printf("Digite o valor atual do dolar: \n ");
    scanf("%f", &cd);

    printf("Digite o valor atual do euro: \n ");
    scanf("%f", &ce);

    dolar = real / cd ;
    euro = real / ce ;

    printf("Valor convertido para dolar: %.2f \n", dolar);
    printf("Valor convertido para euro: %.2f \n", euro);

    return 0;
}
