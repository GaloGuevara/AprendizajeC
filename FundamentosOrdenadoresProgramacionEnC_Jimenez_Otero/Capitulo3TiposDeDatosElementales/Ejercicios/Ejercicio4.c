/*Escriba un programa que lea desde el teclado un numero natural (utilizando el especificador de formato %d en la instruccion scanf)
comprendido entre 0 y 127, y muestre por pantalla el caracter que dicho numero representa en la tabla ASCII

Ejemplo de ejecución:

    Introduzca un valor entero entre 0 y 127: 77
    El caracter en la tabla ASCII correspondiente al valor 77 es M
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Introduzca un valor entero entre 0 y 127: ");
    scanf(" %d", &num);

    char car;
    car = (char) num;

    printf("El caracter en la tabla ASCII correspondiente al valor %d es '%c'\n", num, car); //Notar que añades '%c' entre ' ' 

    return 0;
}