#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    do {
        printf("Ingrese un numero (0 para terminar): ");
        scanf("%d", &numero);

        suma = suma + numero;

    } while (numero != 0);

    printf("La suma total es: %d\n", suma);

    return 0;
}