/*Desarrolla un programa que solicite la carga de un número al usuario.
A continuación, deberá pedir las notas de ese número de alumnos, y mostrar
por pantalla el número de alumnos aprobados y suspensos*/
#include <stdio.h>
int main()
{
    int num_users = 0, contador_aprobados = 0, contador_suspenso = 0, temp = 0;
    printf("Ingrese el numero de usuarios para ingresar: ");
    scanf("%d%*c", &num_users);

    for (int i = 1; i <= num_users; i++)
    {
        printf("Ingrese la nota del usuario %d: ", i);
        scanf("%d%*c", &temp);

        if (temp >= 7)
        {
            contador_aprobados += 1;
        }
        else if (temp < 7)
        {
            contador_suspenso += 1;
        }

        temp = 0;
    }

    printf("El numero de usuarios aprobados son: %d\n", contador_aprobados);
    printf("El numero de usuarios que han suspendido son: %d\n", contador_suspenso);
    return 0;
}