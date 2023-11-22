/*Cargar por teclado y almacenar en un vector el peso de 5 personas.
Obtener el promedio de los mismos. Contar cuantas personas pesan más
que el promedio y cuantas pesan menos.*/
#include <stdio.h>
int main()
{
    float vector[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el peso de la persona %d: ", i + 1);
        scanf("%f%*c", &vector[i]);
    }

    float suma = 0, contador = 0, promedio = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += vector[i];
        contador += 1;
    }

    promedio = suma / contador;
    int contadormas = 0, contadormenos = 0;
    for (int i = 0; i < 5; i++)
    {
        if (vector[i] < promedio)
        {
            contadormenos += 1;
        }
        else if (vector[i] >= promedio)
        {
            contadormas += 1;
        }
    }
    printf("El promedio del peso de las personas es: %.2f\n", promedio);
    printf("Tenemos que %d pesan mas o igual que el promedio y %d pesan menos\n", contadormas, contadormenos);

    return 0;
}