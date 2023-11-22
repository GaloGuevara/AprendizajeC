/*Escribir una función que reciba como parámetros un vector de enteros (por referencia)
y la longitud del vector y un número (por valor)

La función debe multiplicar cada elemento del vector por el número*/
#include <stdio.h>
#include <string.h>

void multiplicar_vector(int *vector, int nElementos, int valor);

int main()
{
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    multiplicar_vector(&vector[0], 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vector[i]);
    }
}

void multiplicar_vector(int *vector, int nElementos, int valor)
{
    for (int i = 0; i < nElementos; i++)
    {
        *(vector + i) *= valor;
    }
}