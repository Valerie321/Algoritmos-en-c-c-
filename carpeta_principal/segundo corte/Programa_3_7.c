//Valerie Hernandez-20241135037
//24_10_2025
//Condiciones con a y b


#include <stdio.h>   // Librería estándar para entrada/salida
int main()
{
int a, b;   // Declaración de variables enteras
// Pedimos al usuario que ingrese los valores
printf("Ingrese el valor de a: ");
scanf("%d", &a);   // Lee el valor de 'a' ingresado por el usuario
printf("Ingrese el valor de b: ");
scanf("%d", &b);   // Lee el valor de 'b' ingresado por el usuario
 if (a > b)// Estructura condicional para mostrar la respuesta contraria
 {
 printf("\ta (%d) NO es mayor que b (%d).\n", a, b);// Si 'a' es mayor, mostramos lo contrario
 }
 else if (a < b)
 {
printf("\ta (%d) NO es menor que b (%d).\n", a, b);// Si son iguales, también decimos lo contrario
 }
 else
 {
 printf("\ta (%d) y b (%d) NO son iguales.\n", a, b);// Si son iguales, también decimos lo contrario
    }
printf("\tEl programa sigue su flujo.\n");
return 0;  
}
