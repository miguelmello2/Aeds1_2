#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, idade;

    printf("Em qual ano estamos? \n");
    scanf("%d", &x);

    printf("Em qual ano voce nasceu?\n ");
    scanf("%d", &y);

    idade = x - y;

    if(idade <= 10 ){
        printf("Voce e uma crianca de %d anos de idade", idade);
    } else if (idade > 10 && idade <= 17){
        printf("Voce e um adolescente de %d anos de idade", idade);
    } else {
        printf("Voce e um adulto de %d anos de idade", idade);
    }

    return 0;
}
