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
    printf("Voce tem %d anos \n", idade);

    return 0;
}
