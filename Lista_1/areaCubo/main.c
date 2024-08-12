#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aresta, area;

    printf("Digite o valor da aresta do cubo: ");
    scanf("%d", &aresta);

    area = aresta * aresta * 6;
    printf("A area total do cubo e: %d\n", area);

    return 0;
}
