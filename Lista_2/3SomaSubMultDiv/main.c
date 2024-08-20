#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int operacao;
    float resultado;

    printf("Digite um numero:\n");
    scanf("%f", &x);

    printf("Digite outro numero:\n");
    scanf("%f", &y);

    printf("Qual operacao voce deseja realizar?\n");
    printf("(1) Soma\n");
    printf("(2) Subtracao\n");
    printf("(3) Divisao\n");
    printf("(4) Multiplicacao\n");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = x + y;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            if (y != 0) {
                resultado = x / y;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao e permitida.\n");
            }
            break;
        case 4:
            resultado = x * y;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        default:
            printf("Operacao invalida. Por favor, escolha 1, 2, 3 ou 4.\n");
            break;
    }

    return 0;
}
