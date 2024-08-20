#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, base, altura, area;
    int operacao;

    printf("Qual area voce deseja calcular?\n");
    printf("(1) quadrado\n");
    printf("(2) retangulo\n");
    printf("(3) cubo\n");
    printf("(4) triangulo retangulo\n");
    scanf("%d", &operacao);

    switch(operacao) {
        case 1:
            printf("Digite o valor do lado do quadrado:\n");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A area do quadrado e: %.2f\n", area);
            break;
        case 2:
            printf("Digite o valor da base do retangulo:\n");
            scanf("%f", &base);
            printf("Digite o valor da altura do retangulo:\n");
            scanf("%f", &altura);
            area = base * altura;
            printf("A area do retangulo e: %.2f\n", area);
            break;
        case 3:
            printf("Digite o valor do lado do cubo:\n");
            scanf("%f", &lado);
            area = 6 * (lado * lado);
            printf("A area do cubo e: %.2f\n", area);
            break;
        case 4:
            printf("Digite o valor da base do triangulo retangulo:\n");
            scanf("%f", &base);
            printf("Digite o valor da altura do triangulo retangulo:\n");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("A area do triangulo retangulo e: %.2f\n", area);
            break;
        default:
            printf("Operacao invalida. Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}
