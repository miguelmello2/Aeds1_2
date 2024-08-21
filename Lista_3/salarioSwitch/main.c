#include <stdio.h>
#include <stdlib.h>

int main()
{
    float atual, novo;
    int opcao;

    printf("Qual o salario atual?\n");
    scanf("%f",&atual);

    printf("Escolha o calculo que quer fazer em seu salario\n");
    printf("(1) Aumento de 8%% no salario\n");
    printf("(2) Aumento de 11%% no salario\n");
    printf("(3) Aumento fixo no salario\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        novo = atual * 1.08;
        printf("Seu novo salario com aumento de %8 e de %.2f reais \n", novo);
        break;

    case 2:
        novo = atual * 1.11;
        printf("Seu novo salario com aumento de %11 e de %.2f reais \n", novo);
        break;

    case 3:
            if (atual <= 1000) {
                 novo = atual + 350;
            } else {
                novo = atual + 200;
            }
            printf("Novo salario com aumento fixo: %.2f\n", novo);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}
