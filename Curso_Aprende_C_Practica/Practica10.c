/*Desarrolla un programa que solicite constantemente la carga de un numero al usuario.
El programa finalizará cuando el usuario introduzca un 0, momento en el que se
debe visualizar la suma y el promedio de todos los numeros introducidos*/
#include <stdio.h>
int main()
{
    int num = 0, suma = 0, contador = -1;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d%*c", &num);
        contador += 1;
        suma += num;
    } while (num != 0); // El cero es el numero para parar el bucle y no se cuenta en el contador
    printf("La suma de todos los numeros ingresados es: %d y el promedio es: %d / %d = %d\n", suma, suma, contador, suma / contador);
    return 0;
}