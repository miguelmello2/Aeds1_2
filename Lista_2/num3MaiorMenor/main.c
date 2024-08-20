#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y ,z ;
    int maior, menor ;

        printf("Digite um numero\n");
        scanf("%d", &x);

        printf("Digite outro numero\n");
        scanf("%d", &y);

        printf("Digite mais um numero\n");
        scanf("%d", &z);

        //maior
        if(x > y && x > z){
            maior = x;
        } else if (y > x && y > z){
            maior = y;
        } else {
             maior = z;
        }

        //menor
        if(x < y && x < z){
            menor = x;
        } else if (y < x && y < z){
            menor = y;
        } else {
            menor = z;
        }

        printf("O maior numero e o %d \n", maior);
        printf("O menor numero e o %d \n", menor);

    return 0;
}
