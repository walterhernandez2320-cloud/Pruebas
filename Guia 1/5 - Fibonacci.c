#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, siguiente;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);

        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return 0;
}