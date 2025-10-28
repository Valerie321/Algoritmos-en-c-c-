// Valerie Jireth Hernandez Pardo-20241135037
//23-10-2025
// manipular números a nivel de bits

#include <stdio.h>   // Permite usar printf para mostrar texto en pantalla

int main()            // Inicio del programa
{
 short ocho, cinco, cuatro, tres, dos, uno;  // Se crean variables para guardar números pequeños

ocho = 8;      // Guardamos el número 8
 cinco = 5;     // Guardamos el número 5
 cuatro = 4;    // Guardamos el número 4
 tres = 3;      // Guardamos el número 3
 dos = 2;       // Guardamos el número 2
 uno = 1;       // Guardamos el número 
 printf("Operadores aritméticos\n");   // Mostramos un título
 printf("5 modulo 2 = %d\n", cinco % dos);  // Muestra el resto de dividir 5 entre 2 (resultado: 1)
 printf("Operadores lógicos\n");       // Otro título para la siguiente parte
 printf("8 >> 2 = %d\n", ocho >> dos); // Desplaza los bits de 8 dos lugares a la derecha (divide entre 4 → 2)
 printf("8 << 1 = %d\n", ocho << 1);   // Desplaza los bits de 8 un lugar a la izquierda (multiplica por 2 → 16)
 printf("5 & 4 = %d\n", cinco & cuatro); // Compara los bits de 5 y 4, solo deja los que coinciden (resultado: 4)
 printf("3 | 2 = %d\n", tres | dos);     // Compara los bits de 3 y 2, une los que tienen 1 (resultado: 3)
 printf("\n");   // Salto de línea para separar la salida
 return 0;       // Termina el programa sin errores
}
