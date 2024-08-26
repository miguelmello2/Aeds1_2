#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0, soma=0;

    while(i < 51){
        soma+=i;
        i++;
    }

    printf("A soma dos numeros de 0 a 50 e: %d\n", soma);

    return 0;
}
