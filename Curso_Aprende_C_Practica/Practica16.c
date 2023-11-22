/*Crear un programa que pida al usuario los nombres, edades y alturas de los jugadores
de un equipo de baloncesto (5 jugadores)

Posteriormente le presentará un menú que le permita:
    1. Listar los nombres y alturas de los jugadores;
    2. Buscar un jugador por su nombre y presentar su altura y su edad;
    3. Indicar el nombre y la edad del jugador más alto del equipo*/
#include <stdio.h>
#include <string.h> //Libreria para manejar strings
int main()
{
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    }; // Ojo que terminas con punto y coma

    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce el nombre del jugador %d: ", i + 1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugadoor %d: ", i + 1);
        scanf("%d%*c", &jugadores[i].edad);
        printf("Introduce la altura del jugador %d: ", i + 1);
        scanf("%f%*c", &jugadores[i].altura);

        fflush(stdin); // Limpias el buffer de todos los jugadores justo despues del scanf
    }
    int opcion = -1;

    while (opcion != 0)
    {
        printf("Introduce la opcion que deseas realizar\n1-Listar jugador\n2-Buscar jugador\n3-Jugador mas alto\n0-Salir\n: ");
        scanf("%d", &opcion); // No te olvides el operador direccion &
        fflush(stdin);        // Limpias el buffer justo despues del scanf

        if (opcion == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre: %s y altura: %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
        }

        else if (opcion == 2)
        {
            char nombre_jugador[50];
            printf("Introduce el nombre de jugador que deseas buscar: ");
            gets(nombre_jugador); // ingresas la cadena de caracteres con gets
            int encontrado = 0;

            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i].nombre, nombre_jugador) == 0) // comparas dos cadenas y si son iguales devuelve 0
                {
                    encontrado = 1;
                    printf("La edad del jugador es %d y su altura %.2f\n", jugadores[i].edad, jugadores[i].altura);
                }
            }
            if (encontrado == 0)
            {
                printf("Jugador no encontrado\n");
            }
        }

        else if (opcion == 3)
        {
            float mayor_altura = jugadores[0].altura;
            char nombre_mayor_altura[50];
            int edad_mayor_altura = jugadores[0].edad;
            strcpy(nombre_mayor_altura, jugadores[0].nombre); // copias un string en otro

            for (int i = 1; i < 5; i++)
            {
                if (jugadores[i].altura > mayor_altura)
                {
                    strcpy(nombre_mayor_altura, jugadores[i].nombre);
                    edad_mayor_altura = jugadores[i].edad;
                    mayor_altura = jugadores[i].altura;
                }
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n", nombre_mayor_altura, edad_mayor_altura);
        }

        else if (opcion != 0 && opcion != 1 && opcion != 2 && opcion != 3) // Si no ingresa algun valor valido te vuelve a pedir
        {
            printf("Opcion incorrecta\n");
        }
    }
    return 0;
}