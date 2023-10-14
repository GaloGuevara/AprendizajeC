/*Escriba un programa que lea desde el teclado dos numeros enteros. Si el primer numero es menor que el segundo, el programa
muestra en pantalla el mensaje "Arriba". Si el primer numero es mayor que el segundo, el programa muestra en pantalla el
mensaje "Abajo". Si los numeros son iguales, el programa muestra en pantalla el mensaje "Igual". Supongase que los numeros
leidos dede el teclado son validos

Ejemplo de ejecucion:

    Introduzca dos numeros enteros separados por un espacio: 14 - 89
    Arriba*/

#include <stdio.h>
main ()
{
    printf("Introduzca dos numeros enteros separados por un espacio: ");
    int a,b;
    scanf("%d %d%*c", &a, &b);
    printf("Los numeros ingresados son: %d y %d\n",a,b);
    if (a<b)
    {
        printf("Arriba\n");
    }
    else if (a>b)
    {
        printf("Abajo\n");
    }
    else
        printf("Igual");
    
    
}