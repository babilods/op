#include <stdio.h>

int main() {
    float A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    printf("Digite o valor de D: ");
    scanf("%f", &D);

    // Encontrar o maior valor
    float maior = A;
    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }
    if (D > maior) {
        maior = D;
    }

    // menor valor
    float menor = A;
    if (B < menor) {
        menor = B;
    }
    if (C < menor) {
        menor = C;
    }
    if (D < menor) {
        menor = D;
    }

    // resultados
    printf("O maior valor e: %f\n", maior);
    printf("O menor valor e: %f\n", menor);
}
