/*Escriba la declaracion de dos variables enteras, llamadas a y b, una variable de tipo caracter, llamada c y
una variable de tipo real, llamada d*/

#include <stdio.h>

int main()
{
    int a,b;
    char c;
    float d;

    printf("Ingrese las dos variables enteras, poniendo un espacio entre ambas tal que (variable_espacio_variable): ");
    scanf("%d %d", &a, &b);
    printf("Las variables enteras ingresadas son: %d y %d\n", a, b);

    // Consume el carácter de nueva línea en el búfer de entrada
    while (getchar() != '\n');

    printf("Ingrese la variable carácter: ");
    scanf("%c", &c);
    printf("La variable ingresada es: %c\n", c);

    while (getchar() != '\n');
    
    printf("Ingrese la variable real: ");
    scanf("%f", &d);
    printf("La variable ingresada es: %f\n", d);

    return 0;
}