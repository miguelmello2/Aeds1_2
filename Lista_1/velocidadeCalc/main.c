#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, d, t;

    printf("Digite a distancia percorrida em KM: \n");
    scanf("%f", &d);

    printf("Digite o tempo gasto em horas: \n");
    scanf("%f", &t);

    v = d / t ;
    printf("A velocidade do deslocamento e: %.2f km/h\n", v);


    return 0;
}
