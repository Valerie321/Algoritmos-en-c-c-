// VALERIE HERNNADEZ
//24 DE OCTUBRE DEL 2025
//ESTRUCTURA DE SELECCIÓN

#include<stdio.h>
int main ()
{
     int a, b;
     printf("Ingrese el valor de a: "); //Le pide al usuario que ingrese un numero entero 
     scanf("%d", &a);//lee el dato ingresado 
     printf("Ingrese el valor de b: ");// El usuario ingresa un segundo numero 
     scanf("%d", &b);// Lee el segundo dato 
     
    if (a > b) //Evaluo si a es mayor que b 
{
    printf("\ta (%d) es mayor a b (%d).\n",a,b);// Si se cumple mostrar el número 
}
   printf("\tEl programa sigue su flujo.\n");
   return 0;
}
