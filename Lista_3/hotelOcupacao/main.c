#include <stdio.h>
#include <stdlib.h>

int main() {
    float diariaNormal, diariaPromocional, totalArrecadadoPromocional, totalArrecadadoNormal, diferencaArrecadacao;
    int apartamentosOcupadosPromocao, apartamentosOcupadosNormal;

    printf("Digite o valor normal da diaria (em reais): ");
    scanf("%f", &diariaNormal);

    diariaPromocional = diariaNormal * 0.75;

    apartamentosOcupadosPromocao = 75 * 0.80;

    totalArrecadadoPromocional = apartamentosOcupadosPromocao * diariaPromocional;

    apartamentosOcupadosNormal = 75 * 0.50;

    totalArrecadadoNormal = apartamentosOcupadosNormal * diariaNormal;

    diferencaArrecadacao = totalArrecadadoPromocional - totalArrecadadoNormal;

    printf("Valor da diaria promocional: R$ %.2f\n", diariaPromocional);
    printf("Valor total arrecadado com 80%% de ocupacao e diaria promocional: R$ %.2f\n", totalArrecadadoPromocional);
    printf("Valor total arrecadado com 50%% de ocupacao e diaria normal: R$ %.2f\n", totalArrecadadoNormal);
    printf("Diferenca entre os dois valores: R$ %.2f\n", diferencaArrecadacao);

    return 0;
}
