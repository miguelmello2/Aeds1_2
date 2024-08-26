#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;

    while(i < 5){
        printf("Digite um numero: \n");
        scanf("%d", &n);

        if(n % 3 == 0){
            printf("O numero %d e divisivel por 3 \n", n);

        } else {
            printf("O numero %d nao e divisivel por 3 \n", n);
        }

        i++;
    }

    return 0;
}
