#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    printf("Digite a sua nota\n");
    scanf("%f", &nota);

    if(nota >= 8 && nota <= 10){
        printf("Otimo!");
    } else if (nota >= 7 && nota < 8){
        printf("Bom!");
    } else if (nota >= 5 && nota < 7){
        printf("Regular");
    } else {
        printf("Irregular");
    }

    return 0;
}
