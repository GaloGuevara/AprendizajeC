/*Escribe un programa que pida un numero al usuario y muestre el dia de la semana al que
equivale. Si se introduce un numero fuera del rango valido (1-7), se debe mostrar un mensaje
de error*/
#include <stdio.h>
int main()
{
    int n;
    printf("Ingrese un numero (1-7): ");
    scanf("%d", &n);

    switch (n)
    {
        case (1):
        {
            printf("Lunes");
            break;
        }
        case (2):
        {
            printf("Martes");
            break;
        }
        case (3):
        {
            printf("Miercoles");
            break;
        }
        case (4):
        {
            printf("Jueves");
            break;
        }
        case (5):
        {
            printf("Viernes");
            break;
        }
        case (6):
        {
            printf("Sabado");
            break;
        }
        case (7):
        {
            printf("Domingo");
            break;
        }
        default:
            printf("ERROR!!!");
            break;
    }
}