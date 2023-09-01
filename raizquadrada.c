#include <stdio.h>
#include <math.h>

int main() {
    float numero, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero); 
        printf("A raiz quadrada do numero é: %f", resultado);
    } else {
        resultado = numero * numero;
        printf("O quadrado do numero é: %f", resultado);
    }
}
