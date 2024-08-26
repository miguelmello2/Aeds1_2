#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int n, media, soma = 0;

    while (i < 10) {
        printf("Digite a nota\n");
        scanf("%d", &n);
        soma += n;
        i++;
    }

    media = soma / 10;
    printf("A média das 10 notas é: %d \n", media);
    return 0;
}
