#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
        printf("Digite um numero inteiro\n");
        scanf("%d", &x);

        printf("Digite um numero inteiro diferente do anterior informado\n");
        scanf("%d", &y);

        if(x > y){
            printf("O numero %d e maior que o numero %d", x, y);
        } else {
            printf("O numero %d e menor que o numero %d", x, y);
        }
    return 0;
}
