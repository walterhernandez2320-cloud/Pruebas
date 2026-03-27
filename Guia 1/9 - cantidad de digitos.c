#include <stdio.h>

int main() {

    int numero, contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        numero = numero / 10;
        contador++;
    }

    printf("Cantidad de digitos: %d\n", contador);

    return 0;
}