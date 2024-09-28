#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0, idade, homensEntre20e30 = 0, maiorIdade = 0;
    float peso, menorPeso = -1, somaPesoHomens = 0, somaIdadeMulheres = 0;
    int totalHomens = 0, totalMulheres = 0;
    int genero;

    printf("Quantas pessoas deseja inserir? ");
    scanf("%d", &n);

    while (i < n) {
        printf("\nPessoa %d:\n", i + 1);

        printf("Digite o genero (1 para Masculino, 2 para Feminino): ");
        scanf("%d", &genero);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (menorPeso == -1 || peso < menorPeso) {
            menorPeso = peso;
        }

        if (genero == 1) {
            totalHomens++;
            somaPesoHomens += peso;
            if (idade >= 20 && idade <= 30) {
                homensEntre20e30++;
            }
        } else if (genero == 2) {
            totalMulheres++;
            somaIdadeMulheres += idade;
        }

        i++;
    }

    printf("\nResultados:\n");
    printf("1. Quantidade de homens com idade entre 20 e 30 anos: %d\n", homensEntre20e30);
    printf("2. A maior idade do grupo: %d\n", maiorIdade);
    printf("   O menor peso encontrado: %.2f\n", menorPeso);

    if (totalHomens > 0) {
        printf("3. A média dos pesos dos homens: %.2f\n", somaPesoHomens / totalHomens);
    } else {
        printf("3. Não há homens no grupo.\n");
    }

    if (totalMulheres > 0) {
        printf("4. A média das idades das mulheres: %.2f\n", somaIdadeMulheres / totalMulheres);
    } else {
        printf("4. Não há mulheres no grupo.\n");
    }

    return 0;
}
