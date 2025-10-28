//Valerie Hernandez 
//20241135037
//24_10_2025
//Validar si el número es par o impar

#include <stdio.h>
int main()
{                    // Se abre el bloque del programa.
int num;             // Se crea un espacio para guardar un número que el usuario escribirá.
printf("Ingrese un número:\n");   // Muestra un mensaje pidiendo al usuario que escriba un número.
scanf("%d", &num);   // Espera a que el usuario escriba un número y lo guarda en "num".
if ( num % 2 == 0 )  // al dividir el número entre 2, el resto es 0
printf("El número %d es par.\n", num);  // Si el resto es 0, se muestra que el número es par.
else                 // Si no se cumple lo de arriba
printf("El número %d es impar.\n", num); // Se muestra que el número es impar.
return 0;
}

