#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1, p2, p3, media ;

    printf("Digite a idade da primeira pessoa:\n");
    scanf("%d", &p1);

    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &p2);

    printf("Digite a idade da terceira pessoa:\n");
    scanf("%d", &p3);

    media = (p1 + p2 + p3) / 3;
    printf("A media das idades e: %d\n", media);

    return 0;
}
