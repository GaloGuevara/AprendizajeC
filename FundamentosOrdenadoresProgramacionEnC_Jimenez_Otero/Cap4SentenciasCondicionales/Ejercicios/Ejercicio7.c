/*Escriba un programa que muestre por pantalla el maximo de tres numeros enteros leidos desde el teclado.

Ejemplo de ejecucion:

    Introduzca tres numeros enteros (separados por un espacio): -71 11 -2
    El maximo es: 11*/ 
#include <stdio.h>
main()
{
    printf("Introduzca tres numeros enteros (separados por un espacio): ");
    int a,b,c;
    scanf("%d %d %d%*c", &a, &b, &c);
    
    if (a > b && a > c)
    {
        printf("El maximo es: %d", a);
    } else if (b>a && b >c)
    {
        printf("El maximo es: %d", b);
    } else if (c>b && c>a)
    {
        printf("El maximo es: %d", c);
    } else
    {
        printf("No existe un solo numero que sea el maximo, por tanto no se lo muestra en pantalla\n");
    }
}