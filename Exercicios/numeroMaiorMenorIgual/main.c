#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y ;

    printf("Digite um Numero\n");
    scanf("%d", &x);

    printf("Digite outro Numero!\n");
    scanf("%d", &y);

    if (x > y){
            printf("O numero %d eh maior que o numero %d", x, y);
    }else if (x < y){
            printf("O numero %d eh menor que o numero %d", x, y);
    }else {
            printf("O numero %d eh igual ao numero %d", x,y);
    }
    return 0;
}
