#include <stdio.h>

int main() {
    float A, B, C;

    //três valores
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    //ordem descendente
    if (A < B) {
        float temp = A;
        A = B;
        B = temp;
    }
    if (B < C) {
        float temp = B;
        B = C;
        C = temp;
    }
    if (A < B) {
        float temp = A;
        A = B;
        B = temp;
    }

    // Imprimir
    printf("Os valores em ordem descendente são: %f, %f, %f", A, B, C);
}
