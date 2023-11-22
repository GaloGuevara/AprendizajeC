/*Escribir un programa que dado un vector de enteros de 10 elementos, muestre el valor
maximo y el minimo*/
#include <stdio.h>
int main()
{
    int vector[10], max = 0, min = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el numero entero para la posicion %d: ", i + 1);
        scanf("%d%*c", &vector[i]);
        if (vector[i] >= max)
        {
            max = vector[i];
        }
    }

    min = max;

    for (int i = 0; i < 10; i++)
    {
        if (vector[i] <= min)
        {
            min = vector[i];
        }
    }

    printf("El maximo es: %d\nEl minimo es: %d\n", max, min);
    return 0;
}