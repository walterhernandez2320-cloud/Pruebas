// multiplicar dos numeros

#include <stdio.h>
int main () {
int numero1;
int numero2;
int mult;
printf("ingresa el valor 1\n");
scanf ("%d", &numero1);
printf("ingresa el segundo valor\n");
scanf ("%d", &numero2);
mult = numero1 * numero2 ;
printf("la multiplicacion de los dos numeros da %d" , mult);
return 0;
}