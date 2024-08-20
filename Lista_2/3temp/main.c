#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, media;

    printf("Digite uma temperatura? \n");
    scanf("%d", &x);

    printf("Digite outra temperatura? \n");
    scanf("%d", &y);

    printf("Digite mais uma temperatura? \n");
    scanf("%d", &z);

   media = (x + y +z) / 3;

    if(media <= 10 ){
        printf("Esta uma media de %d graus fazendo muito frio!", media);
    } else if (media > 10 && media <= 20){
        printf("Esta uma media de %d graus fazendo frio!", media);
    } else if (media > 20 && media <= 30) {
       printf("Esta uma media de %d graus esta quente!", media);
    } else {
       printf("Esta uma media de %d graus esta muito quente!", media);
    }
    return 0;
}
