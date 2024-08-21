#include <stdio.h>
#include <stdlib.h>

int main() {
    int velomax, velo, veloDif, multa;

    printf("Digite a velocidade maxima permitida em km/h \n");
    scanf("%d", &velomax);

    printf("Digite a velocidade com que o motorista estava dirigindo km/h \n ");
    scanf("%d", &velo);

    veloDif = velo - velomax;

    if (veloDif <= 0) {
        printf("Motorista respeitou a lei.\n");
    } else {
        if (veloDif <= 10) {
            multa = 50;
        } else if (veloDif <= 30) {
            multa = 100;
        } else {
            multa = 200;
        }

        printf("Motorista ultrapassou a velocidade permitida.\n");
        printf("Valor da multa: R$ %d,00\n", multa);
    }

    return 0;
}
