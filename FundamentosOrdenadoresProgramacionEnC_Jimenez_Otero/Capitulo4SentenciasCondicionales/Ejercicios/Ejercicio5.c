/*Escriba un programa que lea desde el teclado un caracter y muestre un mensaje en pantalla que indique si el caracter es una 
vocal en letra minuscula, si el caracter es una vocal en letra mayuscula o si el caracter introducino no es una vocal

Ejemplo de ejecucion1:

    Introduzca un caracter: x
    El caracter x no es una vocal

Ejemplo de ejecucion2:

    Introduzca un caracter: A
    El caracter A es una vocal en letra mayuscula
*/
#include <stdio.h>
main()
{
    printf("Introduzca un caracter: ");
    char car;
    scanf("%c%*c", &car);
    
    //Vamos a usar los codigos ASCII de las vocales con if y condicional or

    if ((car==97)||(car==101)||(car==105)||(car==111)||(car==117))
    {
        printf("El caracter %c es una vocal en letra minuscula\n", car);
    }
    else if ((car==65)||(car ==69)||(car==73)||(car==79)||(car==85))
    {
        printf("El caracter %c es una vocal en letra mayuscula\n", car);
    }
    else
        printf("El caracter %c no es una vocal\n", car);
}