#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El numero es PAR\n");
    } else {
        printf("El numero es IMPAR\n");
    }

    return 0;
}