#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;

    while(i < 8){
        printf("Digite um numero inteiro \n");
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("O numero %d e par \n", n);

        } else {
            printf("O numero %d e impar \n", n);
        }

        i++;
    }


    return 0;
}
