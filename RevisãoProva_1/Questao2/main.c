#include <stdio.h>
#include <stdlib.h>
int main() {
    int escolha, n, p, i;
    int fatorial_n, fatorial_p, fatorial_n_p;

    do {
        printf("Escolha o cálculo combinatório:\n");
        printf("1. Arranjo Simples A(n, p)\n");
        printf("2. Combinação C(n, p)\n");
        printf("3. Permutação P(n)\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        if (escolha == 4) {
            break;
        }

        printf("Digite o valor de n: ");
        scanf("%d", &n);

        if (escolha == 1 || escolha == 2) {
            printf("Digite o valor de p: ");
            scanf("%d", &p);
        }

        fatorial_n = 1;
        for (i = 1; i <= n; i++) {
            fatorial_n *= i;
        }

        if (escolha == 1 || escolha == 2) {
            fatorial_p = 1;
            for (i = 1; i <= p; i++) {
                fatorial_p *= i;
            }

            fatorial_n_p = 1;
            for (i = 1; i <= (n - p); i++) {
                fatorial_n_p *= i;
            }
        }

        switch (escolha) {
            case 1:
                printf("Arranjo Simples A(%d, %d) = %d\n", n, p, fatorial_n / fatorial_n_p);
                break;
            case 2:
                printf("Combinação C(%d, %d) = %d\n", n, p, fatorial_n / (fatorial_p * fatorial_n_p));
                break;
            case 3:
                printf("Permutação P(%d) = %d\n", n, fatorial_n);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\n");

    } while (escolha != 4);

    printf("Programa encerrado.\n");
    return 0;
}
