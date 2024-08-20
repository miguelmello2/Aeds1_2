#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, v, t;
    int operacao;

    printf("O que voce deseja calcular?\n");
    printf("(1) distancia\n");
    printf("(2) tempo\n");
    printf("(3) velocidade\n");
    scanf("%d", &operacao);

    switch(operacao) {
        case 1:
            printf("Digite o valor da velocidade em km/h: \n");
            scanf("%f", &v);

            printf("Digite o tempo em horas: \n");
            scanf("%f", &t);

            d = v * t;
            printf("A distancia e de %.2f km\n", d);

            break;
        case 2:
            printf("Digite o valor da velocidade em km/h: \n");
            scanf("%f", &v);

            printf("Digite o valor da distancia em km: \n");
            scanf("%f", &d);

            t = d / v;
            printf("O tempo e de %.2f horas\n", t);

            break;
        case 3:
            printf("Digite o valor da distancia em km: \n");
            scanf("%f", &d);

            printf("Digite o tempo em horas: \n");
            scanf("%f", &t);

            v = d / t;
            printf("A velocidade e de %.2f km/h\n", v);

            break;
        default:
            printf("Operacao invalida. Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}
