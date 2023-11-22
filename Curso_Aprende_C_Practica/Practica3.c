/*Escribe un programa que pida al usuario el valor de la base y la altura
de un rectangulo y con ellos calcule su area.
A=b*h*/
#include <stdio.h>
int main()
{
    float A, b, h;
    printf("Ingrese el valor de la base: ");
    scanf("%f%*c", &b);
    printf("Ingrese el valor de la altura: ");
    scanf("%f%*c", &h);
    A = b * h;
    printf("El valor de su area es: %.2f", A);
}