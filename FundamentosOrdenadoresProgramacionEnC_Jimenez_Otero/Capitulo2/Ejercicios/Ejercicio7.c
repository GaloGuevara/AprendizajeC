/*Escriba un programa en lenguaje C que lea desde el teclado un valor real correspondiente al radio
de una circunferencia y muestre por pantalla el area de la circunferencia*/

/*Sabemos que el area de una circunferencia es pi*r^2  */
#define PI 3.141516

#include <stdio.h>
int main()
{
    float r;
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f", &r);
    printf("El area de la circunferencia es: %f [unidades]\n", PI*r*r);
    return 0;
}