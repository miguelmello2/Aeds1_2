#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoA, anoN, idade, opcao;

    printf("Digite o ano em que voce nasceu\n");
    scanf("%d", &anoN);

    printf("Digite o ano atual\n");
    scanf("%d", &anoA);

    idade = anoA - anoN ;

    printf("Voce ja fez aniversario esse ano?\n (1)Sim\n (2)Nao\n");
    scanf("%d", &opcao);

    if(opcao == 2){
        idade--;
    }
    printf("Voce tem %d anos de idade\n",idade);

    if(idade >= 18){
        printf("Voce tem idade para tirar carteira de habilitacao\n");
    } else {
        printf("Voce nao tem idade para tirar carteira de habilitacao \n");
    }
    return 0;
}
