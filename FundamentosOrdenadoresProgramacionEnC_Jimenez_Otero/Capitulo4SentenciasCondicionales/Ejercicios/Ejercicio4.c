/*Escriba un programa que determine, mostrando un mensaje por pantalla, si un numero entero leido desde el teclado es o
no un numero multiplo de 5 y de 7

Ejemplo de ejecucion:

    Introduzca un numero entero: -35
    -35 es un numero multiplo de 5 y 7
*/
#include <stdio.h>
main()
{
    int num;

    printf("Introduzca un numero entero: ");
    scanf("%d%*c", &num);

    if ((num%5==0)&&(num%7==0))
    {
        printf("%d es un numero multiplo de 5 y 7\n", num);
    }
    else if ((num%5==0)&&(num%7!=0))
    {
        printf("%d es numero multiplo de 5 pero no de 7\n", num);
    }
    else if ((num%5!=0)&&(num%7==0))
    {
        printf("%d es numero multiplo de 7 pero no de 5\n", num);
    }
    else
        printf("%d no es numero multiplo de 7 ni de 5\n", num);
}