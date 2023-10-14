/*Escriba un programa que lea desde el teclado un carácter numérico (utilizando el especificador de formato %c en la intrucción
scanf) comprendido entre 0 y 9, y muestre por pantalla un mensaje que indique su valor entero equivalente y su código en la 
tabla ASCII correspondiente (utilizando el especificador de formato %d en ambos casos).

Ejemplo de ejecución (en negrita, los datos que el usuario introduce):

    Introduzca un caracter numerico entre 0 y 9: **4** 
    Su valor numerico correspondiente es: 4
    Su codigo en la tabla ASCII es: 52
    */

#include <stdio.h>

int main()
{
    char car;
    int num;
    printf("Ingresar un carácter numério entre 0 y 9: ");
    scanf(" %c%*c", &car); //Añades el %*c para eliminar el carácter de nueva linea
    printf("Su valor numerico correspondiente es: %c\n", car);

    num = (int) car; //Conversión explícita 

    printf("El código ASCII correspondiente es: %d\n", num);

    return 0;
}