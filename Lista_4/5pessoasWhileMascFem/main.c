#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int gen, h = 0, m = 0;
    float peso, soma = 0, media;

    while (i < 5) {
        printf("Pessoa %d: \n", i + 1);

        printf("Digite (1) para genero masculino e (2) para genero feminino: \n");
        scanf("%d", &gen);

        if (gen == 1) {
            h++;
        } else if (gen == 2) {
            m++;
        } else {
            printf("Valor invalido, insira apenas (1) para genero masculino e (2) para genero feminino \n");
            continue;
        }

        printf("Digite o peso: \n");
        scanf("%f", &peso);

        soma += peso;
        i++;
    }

    media = soma / 5;

    printf("Numero de homens no grupo: %d \n", h);
    printf("Numero de mulheres no grupo: %d \n", m);
    printf("Media do peso dos integrantes do grupo: %.2f \n", media);

    if (h > m) {
        printf("O genero que teve a maior ocorrencia e o masculino \n");
    } else {
        printf("O genero que teve a maior ocorrencia e o feminino \n");
    }

    return 0;
}
