/*Escribe un programa que realice la conversion euros a pesetas.
Para ello, pedirá al usuario que introduzca los euros a convertir y
mostrará por consola la equivalencia en pesetas de dicha cantidad*/
#include <stdio.h>
int main()
{
    // Considerando que 1 euro equivale a 166.3860 pesetas
    double euro, peseta;
    printf("Introduzca el valor de euros: ");
    scanf("%lf%*c", &euro);
    peseta = euro * 166.3860;
    printf("El valor en pesetas es: %.2lf", peseta);
}