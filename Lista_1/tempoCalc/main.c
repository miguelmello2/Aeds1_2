#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, d, t;

    printf("Digite a distancia que foi percorrida em Km \n ");
    scanf("%f", &d);

    printf("Digite a velocidade de deslocamento \n");
    scanf("%f", &v);

    t = d / v;
    printf("A tempo de deslocamento e de %2.f horas \n", t);

    return 0;
}
