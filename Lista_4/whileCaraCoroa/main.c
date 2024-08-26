#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n;
    int coroa = 0, cara = 0;

    while(i < 5){
        printf("Digite (1) para coroa e (2) para cara: \n ");
        scanf("%d", &n);

        if(n == 1){
            coroa++;
        } else if (n == 2){
            cara++;
        } else {
            printf("Valor inválido, insira apenas (1) para coroa e (2) para cara\n");
            continue;
        }

        i++;

    }
    printf("Resultado: cara = %d, coroa = %d\n", cara, coroa);

    if (coroa > cara) {
        printf("Maior ocorrencia: Coroa \n");
    } else {
        printf("Maior ocorrencia: Cara \n");
    }

    return 0;
}
