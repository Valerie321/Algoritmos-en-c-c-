//Valerie Hernandez 
//24_10_2025
//comprueba que las condiciones son numéricas 0 → falso, ≠ 0 → verdadero

#include<stdio.h>
int main()
{
if (0)              // Es falso porque es cero 
{
printf("Esta instrucción nunca se ejecuta\n");   // Este mensaje nunca se mostrará.
printf("porque la condición siempre es falsa (0).\n");  // Este tampoco se mostrará.
}

if (45)            //  45  es  verdadero porque es diferente de cero
printf("Esta instrucción siempre se ejecuta.\n");  // Este mensaje sí se mostrará en pantalla.

return 0;
 }

