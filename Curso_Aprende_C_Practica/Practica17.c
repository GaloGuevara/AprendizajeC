/*Crear un vector de 5 numeros reales introducidos por teclado. A continuacion, declarar un puntero al vector y
calcular la media de sus elementos empleando dicho puntero.*/
#include <stdio.h>
#include <string.h>

int main()
{
    int vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el elemento %d del vector: ", i + 1);
        scanf("%d%*c", &vector[i]);
    }
    int *punteroAVector = &vector[0];

    int suma = 0, contador = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += *(punteroAVector + i);
        contador += 1;
    }

    printf("La media de los elementos ingresados es: %d\n", suma / contador);
}
