/*Escriba un programa que lea desde el teclado dos números enteros positivos y muestre por pantalla el valor del porcentaje
que representa el segundo número sobre el primero. Por ejemplo, si los números leídos son, respectivamente, 5 y 2, entonces
por pantalla se mostrará el mensaje: 2 es el 40.0% de 5

Ejemplo de ejecución:
    Introduzca dos numeros enteros positivos (separados por espacio): 8 3
    3 es el 37.5% de 8
    */

#include <stdio.h>
main()
{
    int a, b;
    printf("Introduzca dos numeros enteros positivos (separados por espacio):");
    scanf("%d %d", &a, &b);

    float c;
    c= ((float)b/(float)a)* 100;
    printf("%d es el %.2f%% de %d\n", b, c, a);
    return 0;
}