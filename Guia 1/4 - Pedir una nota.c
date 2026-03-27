#include <stdio.h>

int main() {
    int nota;

    do {
        printf("Ingrese una nota (0 a 10): ");
        scanf("%d", &nota);
    } while (nota < 0 || nota > 10);

    printf("Nota valida: %d\n", nota);

    return 0;
}