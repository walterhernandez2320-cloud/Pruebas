// operar entre numeros

#include <stdio.h>
int main() { 
int valor1;
int valor2;
int suma;
printf ("ingrese el primer valor");
scanf("%d",&valor1);
printf("ingrese el segundo valor");
scanf("%d", &valor2);
printf ("ingresaste los valores: %d y %d\n" , valor1 , valor2);
suma = valor1 + valor2;
printf ("la suma es %d", suma);
return 0; 
}