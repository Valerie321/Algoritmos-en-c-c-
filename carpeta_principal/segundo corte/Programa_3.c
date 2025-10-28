//Programa_3.
//  Valerie Hernandez
// Soffia Yañez
//17 de octubre del 2025
// Declaración de variables

#include <stdio.h> // sirve para  mostrar cosas en pantalla o leer datos. 
int main() { //Aquí empieza el programa.
short enteroNumero1 = 115;//Es un numero entero
signed int enteroNumero2 = 55;//Para  números que pueden ser positivos o negativos.
unsigned long enteroNumero3 = 789;//Guarda el número 789 en una cajita grande que solo acepta números positivos.
char caracterA = 65;//Asigna una cadena de caracteres
char caracterB = 'B';//
float puntoFlotanteNumero1 = 89.8;// Muestra decimales
 double puntoFlotanteNumero2 = 238.2236;
//Funciones de salida de datos en  pantalla
printf("enteroNumero1: %i\n", enteroNumero1);
printf("enteroNumero2: %i\n", enteroNumero2);
printf("enteroNumero3: %lu\n", enteroNumero3);
printf("caracterA: %c\n", caracterA);
printf("caracterB: %c\n", caracterB);
printf("puntoFlotanteNumero1: %.2f\n", puntoFlotanteNumero1);
printf("puntoFlotanteNumero2: %.4lf\n", puntoFlotanteNumero2);
printf("enteroNumero1 octal: %o, hex: %X\n", enteroNumero1, enteroNumero1);
printf("puntoFlotanteNumero1 precisión: %5.2f\n", puntoFlotanteNumero1);
printf("puntoFlotanteNumero2 precisión: %8.4lf\n", puntoFlotanteNumero2);
printf("caracterB como entero: %d\n", caracterB);
return 0;
}
