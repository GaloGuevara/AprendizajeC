/*Escriba un programa en el lenguaje C que realice el intercambio del valor de dos variables
enteras llamadas a y b, cuyos valores iniciales se leen por teclado. Muestre por pantalla los
valores iniciales de las variables y los valores después de realizar el intercambio*/

#include <stdio.h>
int main()
{
    int a,b;

    printf("Ingrese las dos variables enteras, separadas por un espacio (var1_espacio_var2): ");
    scanf("%d %d", &a, &b);
    printf("Las variables ingresadas son: %d y %d\n", a,b);

    int c;//Creamos una tercera variable para cambiar los datos
    c=a;
    a=b;
    b=c;

    printf("Las variables intercambiadas son: %d y %d\n", a,b);

    return 0;
}