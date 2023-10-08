/*Escriba un programa que lea desde el teclado un carácter en letra mayúscula y muestre por pantalla su carácter correspondiente
en letra minúscula*/

#include <stdio.h>

int main()
{
    char car; //No te olvides como declarar variables 
    char Mcar;

    printf("Ingrese un carácter en letra minúscula: ");
    scanf(" %c", &car); // Asegúrate de incluir un espacio antes de %c para evitar problemas con el carácter de nueva línea anterior.
    printf("El carácter ingresado es: %c\n", car);

    Mcar = car - ('a'-'A'); //Aqui conviertes de minúscula a mayúscula

    printf("El carácter ingresado convertido a mayúscula es: %c\n", Mcar);

    return 0;

}