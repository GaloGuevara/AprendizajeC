/*Escribir un programa que pida 4 cadenas por teclado y las muestre por la saluda separadas por un "-"*/
#include <stdio.h>
int main()
{
    char cadena1[100], cadena2[100], cadena3[100], cadena4[100];
    printf("Ingrese la cadena 1: ");
    gets(cadena1);
    printf("Ingrese la cadena 2: ");
    gets(cadena2);
    printf("Ingrese la cadena 3: ");
    gets(cadena3);
    printf("Ingrese la cadena 4: ");
    gets(cadena4);

    printf("%s-%s-%s-%s\n", cadena1, cadena2, cadena3, cadena4);
}