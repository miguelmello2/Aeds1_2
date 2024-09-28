#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, soma = 0, media;
    float maior = 0, menor = 10;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota > maior) {
            maior = nota;
        }

        if (nota < menor) {
            menor = nota;
        }

        soma += nota;
    }

    media = soma / 10;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
