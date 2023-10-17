/*El programa siguiente muestra por pantalla la cantidad total de caracteres de una secuencia leida desde
el teclado y finalizada en el caracter punto ('.'). La cantidad total de caracteres no incluye el caracter punto*/

#include <stdio.h>

int main()
{
    int carac=0;
    char letra;

    printf("Introduzca secuencia de caracteres finalizada en punto: ");
    scanf("%c", &letra);

    while (letra != '.')
    {
        printf("int carac = %d\n", carac);
        carac=carac+1;
        scanf("%c", &letra);
    }
    printf("\nint carac final = %d\n", carac);
    scanf("%*c");   //eliminas el '.' del buffer de entrada ya que el programa no lee el '.' porque finalizo antes en el while
    printf("La cantidad de caracteres de la secuencia es: %d\n", carac);

    return 0;
}