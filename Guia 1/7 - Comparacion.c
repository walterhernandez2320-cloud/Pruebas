#include <stdio.h>

int main() {
    int numero;
    int max, min;

    // Pedimos el primer numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    max = numero;
    min = numero;

    // Pedimos los otros 4
    for (int i = 1; i < 5; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero > max) {
            max = numero;
        }

        if (numero < min) {
            min = numero;
        }
    }

    printf("Maximo: %d\n", max);
    printf("Minimo: %d\n", min);

    return 0;
}